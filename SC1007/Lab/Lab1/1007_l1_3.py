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

        if not node:
            self.head = Node(value)
            return

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

def split(head:Node,evenlist:LinkedList,oddList:LinkedList):
    node = head
    enode = evenlist.head
    onode = oddList.head

    while node:
        if node.data%2==0:
            if evenlist.head:
                enode.next = node
                enode = enode.next
            else:
                evenlist.head = node
                enode = evenlist.head

        elif node.data%2==1:
            if oddList.head:
                onode.next = node
                onode = onode.next
            else:
                oddList.head = node
                onode = oddList.head

        node = node.next
    
    if enode: enode.next = None
    if onode: onode.next = None

ll = LinkedList([1,2,3,4,5,6])
even = LinkedList()
odd = LinkedList()
split(ll.head,even,odd)
print(even)
print(odd)