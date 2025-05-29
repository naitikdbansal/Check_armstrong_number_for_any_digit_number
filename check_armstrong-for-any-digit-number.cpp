#include <iostream>
using namespace std;

int main(){
int  a;
int b;
int c;
int d;
int i;
int e=0;

cout<<"Enter number : ";
cin>>a;

for( i=a ; (c=i%10)!=0 || (b!=0); i=b){

b=i/10;

d=c*c*c;

e+=d;

}



if(e==a){
    cout<<"The number is armstrong!"<<endl;
}
else{
    cout<<"The number is NOT armstrong!"<<endl;
}

return 0;
}