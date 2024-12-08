#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node()
    {
        next = nullptr;
        val = 0;
    }
    node(int m)
    {
        next = nullptr;
        val = m;
    }
    node(int m, node *pt)
    {
        next = pt;
        val = m;
    }
};
node* st(vector<int> v){
    if(v.size()==0) return nullptr;
    node* head=new node(v[0]);
    node * temp=head;
    for(int i=1;i<v.size();i++){
        temp->next=new node(v[i]);
        temp=temp->next;
    }
    return head;
}
void printll(node * head){
    node * temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return ;
}
int main()
{
    node * head=st({1,2,3,4,5,6,2,3,9,7,9});
    printll(head);
    return 0;
}