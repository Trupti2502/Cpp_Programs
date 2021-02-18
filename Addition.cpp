#include<iostream>
using namespace std;
class Arithmatic
{
 public:
  int No1,No2;
  
 Arithmatic()
 {
  this->No1=0;
  this->No2=0;
 }
 
 Arithmatic(int i,int j)
 {
  No1=i;
  No2=j;
 }
 
 int Addition(int No1,int No2)
 {
  return No1+No2;
 }
 
};

int main()
{
 int a=0,b=0;
 int Ans=0;
 
 cout<<"**ADDITON OF TWO NUMBERS**\n\n";
 
 cout<<"Enter Fisrt Number: ";
 cin>>a;
 
 cout<<"Enter Fisrt Number: ";
 cin>>b;
 
 Arithmatic obj;
 
 Ans=obj.Addition(a,b);
 
 cout<<"\n\nAddition="<<Ans<<"\n\n";
 
 return 0;
}

