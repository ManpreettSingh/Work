#include <bits/stdc++.h>
using namespace std;
class math1
{
public:
    int h;
    math1(){

    }
    math1(int h){
        this->h=h;
    }
    void print()
    {
        cout << "hello bhai me maths1 hu";
    }
    ~math1(){

    }
};
class math2 : protected math1
{
public:
    int h2;
    math2(){
    }
    math2(int h2,int h){
        this->h=h;
        this->h2=h2;
    }
    void print1()
    {
        cout << "hello bhai me maths1 hu";
    }
    int add()
    {
        return h+h2;
    }
    ~math2(){
    }
};

int main()
{
    math2 m2(6,8);
    math2 b=m2;
    cout<<m2.add();
    return 0;
}