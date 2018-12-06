# praktikum8

# Latihan1 # Fungsi Fibonaci dengan Cara Iterasif

	~Alur Algoritmanya
	-Mendeklarasikan variabel int iteratif (int nilai, int a, int b, int c) sebagai variabel input
	-Menginput Nilai a,b,c
	-Membuat Fungsi Fibonaci
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

~ Berikut Kode Lengkapnya

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

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum8/blob/master/latihan1/hasilscreenshot1.png)

# Latihan2 # Fungsi Rekursif untuk Perkalian 2 buah Bilangan

	~Alur Algoritmanya
	-Membuat fungsi Rekursif 
		// faktorial dengan rekursif
		int faktorial(int n){
		    if (n==0 || n==1){
		        cout << "1\n";
		        return 1;
	    } else {
		        cout << n << "*";
		        return n * faktorial (n-1);
	    }
	}
	-Masukan Nilai n 
		int main(){
		    int n;
		    cout << "\nMasukkan nilai n! ";
		    cin >> n;
	-cetak hasilnya
		    cout << n << "! = ";
		    cout << "Maka nilai " << n << " faktorial dengan rekursif: " << faktorial(n) << endl << endl;
 		}

~ Berikut Kode Lengkapnya

	#include<iostream>

	using namespace std;

	// faktorial dengan rekursif
	int faktorial(int n){
		if (n==0 || n==1){
		cout << "1\n";
		return 1;
	} else {
		cout << n << "*";
		return n * faktorial (n-1);
	}
	}

	int main(){
		int n;
		cout << "\nMasukkan nilai n! ";
		cin >> n;
		cout << n << "! = ";
		cout << "Maka nilai " << n << " faktorial dengan rekursif: " << faktorial(n) << endl << endl;
	}

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum8/blob/master/latihan2/hasilscreenshot2.png)

# Latihan3 # Mencari kasus lain dengan Cara Rekursif dan Iteratif

	~Alur Algoritmanya
	-Membuat Fungsi dengan cara Rekursif dan Iteratif
	-Mendeklarasikan Variabel  int (int a, int b) Sebagai Variabel Input
	-Masukkan Nilai a & b
		int main(int argc, char *argv[])
		{
		int a,b;
		cout<<"masukkan nilai a :";
		cin>>a;
		cout<<"masukkan nilai b :";
		cin>>b;
	-Cetak hasilnya dengan cara Rekursif dan Iteratif
		cout<<"secara ITERATIF :"<<endl;
		cout<<tambah1(a,b)<<endl;
		cout<<"secara REKURSIF"<<endl;
		cout<<tambah2(a,b)<<endl;
		cout<<("PAUSE");
		}

~ Berikut Kode Lengkapnya

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

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum8/blob/master/latihan3/hasilscreenshot3.png)

# Fungsi Iteratif
 
	~Alur Algoritmanya
	-Membuat Fungsi Iteratif 
		/faktorial dengan iteratif
		int faktorial(int n){
		    int fak = 1;
		    for (int i=1; i<=n; i++)
		    fak *= i;
		    return fak;
		}
	-Masukkan Nilai n!
		int main(){
		int n;
		cout << "masukkan nilai n! ";
		cin >> n;
	-Cetak hasil Fungsi Iteratif
		cout << "Nilai N faktorial dengan iteratif: " << faktorial(n) << endl;
		}

~ Berikut Kode Lengkapnya

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

~ Berikut Flowchartnya 

![img](https://github.com/zahira12/praktikum8/blob/master/FungsiIteratif/Flowchart.png)

~ Berikut Hasil Screenshootnya

![img](https://github.com/zahira12/praktikum8/blob/master/FungsiIteratif/Screenshot4%20Fungsi%20Iteratif.png)

