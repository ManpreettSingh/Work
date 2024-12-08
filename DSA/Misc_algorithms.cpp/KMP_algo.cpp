#include <iostream>
using namespace std;
class a{
    protected:
    int z=2;
    public :
    a(){
        cout<<"i am a constructor"<<endl;
    }
    
    ~a(){
        cout<<"i am a distructor"<<endl;
    }
    
    public:
    void f(){
        cout<<"hello i am in a"<<endl;
    }
};
class c:virtual protected a{
    public:
    c(){
        cout<<"i am c constructor"<<endl;
    }
    ~c(){
        cout<<"i am c distructor"<<endl;
    }


} ;
class b:virtual public a{
    public:
    b(){
        cout<<"i am b constructor"<<endl;
    }
    ~b(){
        cout<<"i am b distructor"<<endl;
    }

} ;
class d:public b,c{
    public:
    d(){
        cout<<"i am d constructor"<<endl;
    }
    ~d(){
        cout<<"i am d distructor"<<endl;
    }
} ;


int main() {
    d l;
    l.f();
    return 0;
}