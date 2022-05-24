#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"in show of A";
    }
};
class B:protected A{
    public:
    void disp(){
         cout<<"in disp of B";
    }
};
int main(){
    B obj;
    obj.disp();
}