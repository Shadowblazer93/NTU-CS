class Dequeue:
    def __init__(self,n):
        self.maxsize = n
        self.queue = [None]*n
        self.left = 1
        self.right = 0
        self.nitems = 0
    
    def insertLeft(self,value):
        self.left -= 1
        if self.left<0: self.left = self.maxsize-1
        self.queue[self.left] = value
        self.nitems += 1

    def insertRight(self,value):
        self.right += 1
        if self.right==self.maxsize: self.right=0
        self.queue[self.right] = value
        self.nitems += 1
    
    def removeLeft(self):
        if self.left==self.maxsize: self.left=0
        self.queue[self.left] = None
        self.left += 1
        self.nitems -=1
    
    def removeRight(self):
        if self.right<0: self.right = self.maxsize-1
        self.queue[self.right] = None
        self.right -= 1
        self.nitems -= 1
    
    def __repr__(self):
        return str(self.queue)
    
dq = Dequeue(6)
dq.insertLeft('a')
dq.insertRight('b')
dq.insertRight('c')
dq.insertRight('d')
dq.insertRight('e')
print(dq)
dq.removeLeft()
dq.removeLeft()
dq.removeRight()
print(dq)