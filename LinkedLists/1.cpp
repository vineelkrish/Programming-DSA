#include<bits/stdc++.h>
using namespace std;
class MyLinkedList {
    public:
    struct Node{
        int val;
        Node* next;
        Node (int data)
        {
            val=data;
            next=nullptr;
        }
    };
        Node* head;
        int size=0;
        MyLinkedList() {
            head=nullptr;
            size=0;
        }
        
        int get(int index) {
            if(index<0 || index>=size)
            return -1;
            Node* current=head;
            for(int i=0;i<index;i++)
            {
                current=current->next;
            }
            return current->val;
        }
        
        void addAtHead(int val) {
            Node* newNode=new Node(val);
            newNode->next=head;
            head=newNode;
            size++;
        }
        
        void addAtTail(int val) {
            
            Node* newNode=new Node(val);
            if(head==nullptr)
            head=newNode;
            else{ 
            Node* temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
                temp->next=newNode;
                
            }
                size++;
        }
        
        void addAtIndex(int index, int val) {
            if(index<0 || index>size)
            return;
            if(index==0)
            {
                addAtHead(val);
                return;
            }
            Node* newNode=new Node(val);
            Node* temp=head;
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            } 
            newNode->next=temp->next;
            temp->next=newNode;
            size++;
        }
        
        void deleteAtIndex(int index) {
            if(index<0 || index>=size)
            return;
            if(index==0)
            {
                Node* temp=head;
                head=head->next;
                delete temp;
            }
            else{
                Node* curr=head;
                for(int i=0;i<index-1;i++)
                {
                    curr=curr->next;
                }
                Node* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            size--;
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