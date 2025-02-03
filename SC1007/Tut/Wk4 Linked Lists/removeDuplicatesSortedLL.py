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
        return str(nodes)
    
    def search(self,value):
        node = self.head
        index = 0
        while node:
            if node.data==value: return index
            index += 1
            node = node.next
        return -1
    
    def append(self,value):
        node = self.head
        while node.next: node = node.next
        new_node = Node(value)
        node.next = new_node

    def add(self,value,index):
        node = self.head
        while index>1 and node.next:
            node = node.next
            index -= 1
        successor = node.next
        new_node = Node(value)
        node.next = new_node
        new_node.next = successor
    
    def remove(self,index):
        node = self.head
        while index>1 and node.next:
            node = node.next
            index -= 1
        left_node = node
        node = node.next
        left_node.next = node.next
    
    def size(self):
        size = 0
        node = self.head
        while node:
            size += 1
            node = node.next
        return size
    
def remove_duplicates_sorted_ll(ll:LinkedList):
    node = ll.head
    prev = None

    while node:
        if prev and node.data==prev.data:
            while node.next and node.data==prev.data: node = node.next
            prev.next = node.next
        else: prev = node
        node = node.next

        
    
llist = LinkedList([1,2,2,2,4,4,5,5])
remove_duplicates_sorted_ll(llist)
print(llist)