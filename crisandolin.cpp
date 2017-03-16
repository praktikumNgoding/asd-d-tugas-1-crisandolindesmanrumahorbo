#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
struct{
	int a,b,c,d;
}bil;
void kali();
void bagi();
void jumlah();
void kurang();
int main(){
	char hasil;
	int pilihan;
	do{
		cout<<"================Program Bilangan Kompleks=============="<<endl;
		cout<<"Masukkan bilangan A    : ";
		cin>>bil.a;
		cout<<"Masukkan bilangan B    : ";
		cin>>bil.b;
		cout<<"Masukkan bilangan C    : ";
		cin>>bil.c;
		cout<<"Masukkan bilangan D    : ";
		cin>>bil.d;
		cout<<"\n\tPilihan :         ";
        cout<<"\n\t\t1. Perkalian \n\t\t2. Pembagian \n\t\t3. Penjumlahan \n\t\t4. Pengurangan\n";
		cout<<"\nMasukkan pilihan anda : ";
		cin>>pilihan;
		cout<<endl;

		switch (pilihan){
			case 1:
				kali();
				break;
			case 2:
				bagi();
				break;
			case 3:
				jumlah();
				break;
			case 4:
				kurang();
				break;
			default:
				cout<<"Masukkan pilihan yang sesuai !";
				break;
		}

		cout<<"\n\n Mau Mengulangi ? [y/t] ";
		cin>>hasil;
		cout<<endl;
	}
	while ((hasil=='Y' || hasil=='y'));
	cout<<"\tProgram Dihentikan";
}


void kali(){
	cout<<"PERKALIAN BILANGAN KOMPLEKS\n";
	int angka1 = (bil.a * bil.c) - (bil.b * bil.d);
	int angka2 = (bil.a *bil.d) + (bil.b * bil.c);
	printf("Hasil perkalian dari (%d + %di) * (%d + %di) = (%d.%d - %d.%d)+(%d.%d + %d.%d)i adalah %d + %di",bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,bil.a,bil.d,bil.b,bil.c,angka1, angka2);
}
void bagi(){
	cout<<"PEMBAGIAN BILANGAN KOMPLEKS\n";
	int angka1 = ((bil.a*bil.c)+(bil.b*bil.d));
	int angka2 = (bil.a*bil.a)+(bil.b*bil.b);
	int angka3 = ((bil.b*bil.c)-(bil.a*bil.d));
	int angka4 = (bil.c*bil.c)+(bil.d*bil.d);
	printf("Hasil pembagian dari (%d + %di)/(%d + %di) =[(%d.%d + %d.%d)/(%d.%d + %d.%d)]+[(%d.%d - %d.%d)/(%d.%d + %d.%d)i adalah (%d/%d)+(%d/%d)i",bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,bil.a,bil.a,bil.b,bil.b,bil.b,bil.c,bil.a,bil.d,bil.c,bil.c,bil.d,bil.d,angka1,angka2,angka3,angka4);
}
void jumlah(){
	cout<<"PENJUMLAHAN BILANGAN KOMPLEKS\n";
	int angka1 = (bil.a + bil.c);
	int angka2 = (bil.b + bil.d);
	printf("Hasil penjumlahan dari (%d + %di) + (%d + %di) = (%d + %d)+(%d + %d)i adalah %d + %di",bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,angka1,angka2);
}
void kurang(){
	cout<<"PENGURANGAN BILANGAN KOMPLEKS\n";
	int angka1 = (bil.a - bil.c);
	int angka2 = (bil.b - bil.d);
	printf("Hasil pengurangan dari (%d + %di) - (%d + %di) = (%d - %d)+(%d - %d)i adalah %d + %di",bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,angka1, angka2);
}
