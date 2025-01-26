class myStack:
    def __init__(self,size):
        self.stack = [None]*size
        self.top = -1

    def push(self,value):
        self.top += 1
        self.stack[self.top] = value
    
    def pop(self):
        del self.stack[self.top]
        self.top -= 1
    
    def __repr__(self):
        return str(self.stack)
    
st = myStack(3)
st.push('a')
st.push('b')
st.push('c')
print(st)
st.pop()
print(st)