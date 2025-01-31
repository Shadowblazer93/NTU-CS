class UnorderedPriorityQueue:
    def __init__(self,size,data=None):
        self.size = size
        self.pqueue = [None]*size
        if data is not None:
            for k in range(len(data)):
                self.pqueue[k] = data[k]

    def insert(self,value):
        for i in range(self.size):
            if self.pqueue[i] is None:
                self.pqueue[i] = value
                return True
        else: return False
    
    def remove(self):
        min = float('inf')
        ind = None
        for i in range(self.size):
            if self.pqueue[i] is None: continue
            if self.pqueue[i]<min:
                min = self.pqueue[i]
                ind = i
        self.pqueue[ind] = None
    
    def __repr__(self):
        return str(self.pqueue)

upq = UnorderedPriorityQueue(7,[5,10,9,2,1,4])
upq.insert(15)
print(upq)
upq.remove()
upq.remove()
print(upq)
upq.insert(0)
print(upq)