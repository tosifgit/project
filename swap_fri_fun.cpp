#include<iostream>
using namespace std;
class swapnumbers{
    private:
    int a,b;
    public:
    void get_data(){
        cin>>a>>b;
    }
    void display_data()
    {
        cout<<"\n"<<a<<b;
    }
    friend void swap(swapnumbers &s)
};
swap(swapnumbers &s)
{
    a=a+b;//a=20 b=10 a=30
    b=a-b;//b=30-10=20
    a=a-b;//a=30-20=10
}
int main(){
    swapnumbers s;
    cout<<"\nenter two numbers for swap";
    s.get_data();
    cout<<"\nbefore swapping:";
    s.display_data();
    swap(s);
     cout<<"\nafter swapping:";
    s.display_data();

    return 0;
}
