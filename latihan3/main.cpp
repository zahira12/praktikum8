#include <iostream>

using namespace std;
 int tambah1(int a, int b){
 int hasil =0;
 for(int i=0;i<b;i++){
 hasil=hasil+a;
 }
 return hasil;
 }
 int tambah2(int a, int b){
 if(b==0)
 return 1;
 else if(b==1)
 return a;
 else
 return a+tambah2(a,b-1);
 }
 int main(int argc, char *argv[])
 {
 int a,b;
 cout<<"masukkan nilai a :";
 cin>>a;
 cout<<"masukkan nilai b :";
 cin>>b;
 cout<<"secara ITERATIF :"<<endl;
 cout<<tambah1(a,b)<<endl;
 cout<<"secara REKURSIF"<<endl;
 cout<<tambah2(a,b)<<endl;
 cout<<("PAUSE");
}
