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
    
def move_even_items_to_back(ll:LinkedList):
    evens = []
    node = ll.head
    prev = None
    while node:
        if node.data%2==0:
            evens.append(node)
            if prev: prev.next = node.next
            else: ll.head = node.next
        else: prev = node
        node = node.next
    
    node = ll.head
    while node.next: node = node.next
    while evens:
        k = evens.pop(0)
        k.next = None
        node.next = k
        node = k
        
    
llist = LinkedList([2,7,18,3,4,15])
move_even_items_to_back(llist)
print(llist)