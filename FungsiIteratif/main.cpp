#include<iostream>

using namespace std;

//faktorial dengan iteratif
int faktorial(int n){
    int fak = 1;
    for (int i=1; i<=n; i++)
    fak *= i;
    return fak;
}

int main(){
int n;
cout << "masukkan nilai n! ";
cin >> n;
cout << "Nilai N faktorial dengan iteratif: " << faktorial(n) << endl;
}
