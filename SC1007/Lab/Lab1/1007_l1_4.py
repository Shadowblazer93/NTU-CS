class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    def __repr__(self): return self.data
class LinkedList:
    def __init__(self,nodes=None):
        self.head = None

        if nodes is not None:
            node = Node(nodes.pop(0))
            self.head = node
            for n in nodes:
                node.next = Node(n)
                node = node.next
    
    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        return ' -> '.join(nodes)
    
    def llsearch(self,value):
        node = self.head
        index = 0
        while node:
            if node.data==value: return index
            index += 1
            node = node.next
        return -1
    
    def llappend(self,value):
        node = self.head
        while node.next: node = node.next
        new_node = Node(value)
        node.next = new_node

    def lladd(self,value,index):
        node = self.head
        while index>1 and node.next:
            node = node.next
            index -= 1
        successor = node.next
        new_node = Node(value)
        node.next = new_node
        new_node.next = successor
    
    def llremove(self,index):
        node = self.head
        while index>1 and node.next:
            node = node.next
            index -= 1
        left_node = node
        node = node.next
        left_node.next = node.next
    
    def llsize(self):
        size = 0
        node = self.head
        while node:
            size += 1
            node = node.next
        return size

def duplicatesReverse(head:Node,newHead:Node):
    node = head
    nodes = []
    while node:
        nodes.append(node.data)
        node = node.next
    
    while nodes:
        newHead.next = Node(nodes.pop())
        newHead = newHead.next
    

llist = LinkedList(['A','B','C','D'])
revllist = LinkedList()
revllist.head = Node('E')
duplicatesReverse(llist.head,revllist.head)
print(revllist)