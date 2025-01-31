class Queue:
    def __init__(self,n):
        self.maxsize = n
        self.queue = [None]*n
        self.front = 0
        self.rear = 0
        self.nitems = 0
    
    def insert(self,value):
        self.queue[self.rear] = value
        self.rear += 1
        if self.rear==self.maxsize: self.rear=0
        self.nitems += 1
    
    def remove(self):
        self.queue[self.front] = None
        self.front += 1
        if self.front==self.maxsize: self.front=0
        self.nitems -= 1
    
    def __repr__(self):
        return str(self.queue)

q = Queue(4)