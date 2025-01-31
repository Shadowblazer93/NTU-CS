class Node:
    def __init__(self,data,next=None,prev=None):
        self.data = data
        self.next = next
        self.prev = prev
    def __repr__(self): return self.data

class LinkedList:
    def __init__(self,data=None):
        self.head = None

        previous = None
        if data:
            node = Node(data.pop(0))
            self.head = node
            for d in data:
                node.prev = previous
                node.next = Node(d)
                previous = node
                node = node.next
    
    def __repr__(self):
        node = self.head
        nodes = []
        while node:
            nodes.append(node.data)
            node = node.next
        return str(nodes)
    
ll = LinkedList(['a','b','c','d'])
print(ll)