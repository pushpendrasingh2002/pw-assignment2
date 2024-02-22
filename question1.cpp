#include<iostream>
using namespace std;
int main(){
int x;
cout<<" Enter frist number : ";
cin>>x;
int y,m;
cout<<" Enter second number and value for taking modulus : ";
cin>>y>>m;
int z=(x*y)%m;
cout<<"Output is :"<<z;

return 0;


}