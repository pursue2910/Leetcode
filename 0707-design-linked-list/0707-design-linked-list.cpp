class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
        Node(int val){
           this->val=val;
           this->next=NULL;
        }
    };
    Node* head;

    
    

    MyLinkedList() {
        head=NULL;
        
    }
    
    int get(int index) {
        Node* temp=head;
        for(int i=0;i<index;i++){
            if(temp==NULL){
                return -1;
            }
            temp=temp->next;
        }
        if(temp==NULL){
            return -1;
        }
        return temp->val;
        
    }
    
    void addAtHead(int val) {
        Node* newNode= new Node(val);
        newNode->next=head;
        head=newNode;
        
    }
    
    void addAtTail(int val) {
        if(head==NULL){
            head= new Node(val);
            return;
        }
        
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= new Node(val);
       

        
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        Node* temp=head;
        for(int i =0;i<index-1;i++){
            if(temp==NULL){
                return;
            }
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        Node* newNode = new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL){
            return ;

        }
        if(index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }


        Node* temp=head;
        for (int i =0;i<index-1;i++){
            if(temp->next==NULL){
                return;
            }
            temp=temp->next;
        }
        if(temp->next == NULL)
            return;

        Node* toDelete = temp->next;

        temp->next = temp->next->next;

        delete toDelete;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */