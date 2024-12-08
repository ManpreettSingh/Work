#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class st
{
public:
    Node * head;
    int size=0;
    void push(int val){
        if(size==1000) {
            cout<<"invaild operator  ";
            return;
        }
        Node * newhead=new Node(val);
        size++;
        newhead->next=head;
        head=newhead;
    }
    int pop(){
        if(size==0) {
            cout<<"inalid operation ";
            return -1;
        }
        size--;
        int item=head->data;
        head=head->next;
        return item;
    }
    int sizeofa(){
        return size;
    }
    int top(){
        return head->data;
    }
    bool isFull(){
        return size==1000;
    }
    bool isEmpty(){
        return size==0;
    }
};
class stac{
public:
    queue<int> q1;
    queue<int> q2;
    int size=0;
    void push(int val){
        size++;
        q1.push(val);
    }
    int top(){
        return q1.front();
    }
    int pop(){
        if(q1.empty()){
            cout<<"invalid operation : ";
            return INT_MIN;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int item=q1.front();
        q1.pop();
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        size--;
        return item;
    }
    bool empty(){
        return q1.empty();
    }
    int sizeo(){
        return size;
    }
};
int main()
{
    stac a;
    a.push(1000);
    a.push(10);
    a.push(100);
    a.push(1);
    a.push(0);
    cout<<a.sizeo();
    cout<<a.top()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    return 0;
}