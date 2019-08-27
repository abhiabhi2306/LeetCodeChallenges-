class Node {
    public:
    int data;
    Node *next;
};


class MyStack {
public:
    Node *front=NULL;
    Node *rear=NULL;
    
    /** Push element x onto stack. */
    void push(int x) {
        
        if (front==NULL && rear==NULL)
        {
            Node *node1 = new Node();
            front=node1;
            rear=node1;
            node1->data=x;
        
        }
        else
        {
            Node *node1 = new Node();
            node1->data=x;
            rear->next=node1;
            rear=node1;
        }
        
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
        if (front==rear)
        {
            Node *tmp = front;
            int value=front->data;
            front=NULL;
            rear=NULL;
            return value;
            
        }
        else
        {
        Node *tmp=rear;
        int value=tmp->data;
        rear=

        return value;
        }

        
    }
    
    /** Get the top element. */
    int top() {
        
        return rear->data;
        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        
        if(front==NULL && rear==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
