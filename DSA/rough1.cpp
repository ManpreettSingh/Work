#include <bits/stdc++.h>
using namespace std;
const int maximum = 1000;
class st
{
    int arr[maximum];
    int cap = -1;

public:
    void init()
    {
        cap = 0;
        return;
    }
    void push(int num)
    {
        if (cap == maximum)
        {
            cout << "stack overflow : ";
            return;
        }
        arr[cap] = num;
        cap++;
    }
    int pop()
    {
        if (cap == 0)
        {
            cout << "stack underflow : ";
            return INT_MIN;
            ;
        }
        cap--;
        int num = arr[cap];
        return num;
    }
    int top()
    {
        if (cap == -1)
        {
            cout << "stack is empty"<<endl;
            return INT_MIN;
        }
        return arr[cap-1];
    }
    bool underflow()
    {
        return (cap == -1);
    }
    bool overflow()
    {
        return (cap == maximum);
    }
    int size()
    {
        return cap;
    }
};
int main()
{
    st s;
    s.init();
    s.push(100);
    s.push(10);
    s.push(1000);
    s.push(1);
    s.push(0);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    // s.pop();
    s.pop();
    return 0;
}