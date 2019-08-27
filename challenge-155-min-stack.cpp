class Node {
    public:
        
    int data;
    Node *next;
        
                   
    };
    
class MinStack {
public:
 
    Node *head=NULL;    
        
    
    
    void push(int x) {
        
    if (head==NULL)  
    {
    Node *node1= new Node();
    head=node1;
    node1->data=x;   
    cout << "Pushed " <<x;
    }
    else
    {
    Node *node1= new Node();
    node1->next=head;
    head=node1;
    node1->data=x;   
        
    }
    }
         
    
    void pop() {
    
    Node *temp=head;
    head=head->next;
    delete(temp);
        
    }
    
    int top() {
        
    return head->data;
        
    }
    
    int getMin() {
        
        int min=head->data;
        Node *temp=head;
        while(temp!=NULL)
        {
            if (temp->data<min)
            {
                min=temp->data;
            }
            temp=temp->next;
        }
        return min;
                    
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
