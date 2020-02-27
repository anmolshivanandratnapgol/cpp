
#include<iostream>


using namespace std;

class A
{

  int a,b;
  public:

   void input()
   {
   cout<<"Enter the value of a and b:";

   cin>>a>>b;
   }

    friend class B;

};

class B
{

     public:
   void show(A c1)
   {
      cout<<c1.a<<"\t"<<c1.b;


   }
};

int main()
{
  A a1;
  B b1;
  a1.input();
  b1.show(a1);





}
