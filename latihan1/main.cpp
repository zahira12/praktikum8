#include <iostream>

using namespace std;

int iteratif (int nilai, int a, int b, int c)
{
a=0, b=2;

if (nilai == 2) return b;
if (nilai == 0) return a;

else{
for(int i=2; i<=nilai; i++){

c = a + b;
a = b;
b = c;
}
return c;
}
}

int main()
{
int nilai, a, b,c;

cout<<"Masukkan nilai ke-: ";

cin>>nilai;
cout<<"\nBilangan fibonaccinya untuk "<<nilai<<" adalah ";
cout<< iteratif ( nilai,  a,  b,  c);
return 0;
}
