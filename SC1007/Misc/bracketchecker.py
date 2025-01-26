class Stack:
    def __init__(self,n):
        self.size = n
        self.stack = [None]*n
        self.top = -1

    def push(self,item):
        if self.top==self.size-1: return None
        self.top += 1
        self.stack[self.top] = item

    def pop(self):
        if not self.stack: return None
        k = self.stack[self.top]
        self.stack[self.top] = None
        self.top -=1
        return k
    
    def peek(self):
        if self.stack: return self.stack[self.top]
    
    def len(self):
        return len([i for i in self.stack if i])
    
    def __repr__(self):
        return str(self.stack)
    
s = "([]({()}[()]))"
n = len(s)
st = Stack(n)

for i in s:
    if i in "([{": st.push(i)
    else:
        if i==']' and st.peek()=='[': st.pop()
        elif i==')' and st.peek()=='(': st.pop()
        elif i=='}' and st.peek()=='{': st.pop()
        else: st.push(i)

errors = st.len()
print(errors)