#include<iostream>
#include<conio.h>
using namespace std;
struct poli{
	int k;
	string h;
	int pang;
};
int main(){
	//P1
	poli p1[5];
	p1[0].k=6;    p1[1].k=8;     p1[2].k=5;     p1[3].k=1;     p1[4].k=15; 
	p1[0].h="x";  p1[1].h="x";   p1[2].h="x";   p1[3].h="x";   p1[4].h="0";
	p1[0].pang=8; p1[1].pang=7;  p1[2].pang=5;  p1[3].pang=3;  p1[4].pang=0;
	cout<<"P1 = ";
	for(int i=0; i<5;i++){
		if(p1[i].h=="x" && p1[i].pang!=0 && p1[i].k!=1){
			cout<<p1[i].k<<"x^"<<p1[i].pang<<" + ";
		}else if(p1[i].h=="x" && p1[i].pang!=0){
			cout<<"x^"<<p1[i].pang<<" + ";
		} else{
			cout<<p1[i].k;
		}
	}
	//P2
	cout<<endl<<"P2 = ";
	poli p2[6];
	p2[0].k=3;    p2[1].k=4;     p2[2].k=3;     p2[3].k=2;     p2[4].k=2;     p2[5].k=10;
	p2[0].h="x";  p2[1].h="x";   p2[2].h="x";   p2[3].h="x";   p2[4].h="x";   p2[5].h="0";
	p2[0].pang=9; p2[1].pang=7;  p2[2].pang=4;  p2[3].pang=3;  p2[4].pang=2;  p2[5].pang=0;
	for(int i=0; i<6;i++){
		if(p2[i].h=="x" && p2[i].pang!=0 && p2[i].k!=1){
			cout<<p2[i].k<<"x^"<<p2[i].pang<<" + ";
		}else if(p2[i].h=="x" && p2[i].pang!=0){
			cout<<"x^"<<p2[i].pang<<" + ";
		} else{
			cout<<p2[i].k;
		}
	}
	//P3
	cout<<endl<<"P3 = ";
	poli p3[2];
	p3[0].k=1;     p3[1].k=5;
	p3[0].h="x";   p3[1].h="0";
	p3[0].pang=2;  p3[1].pang=0;
	for(int i=0; i<2;i++){
		if(p3[i].h=="x" && p3[i].pang!=0 && p3[i].k!=1){
			cout<<p3[i].k<<"x^"<<p3[i].pang<<" + ";
		}else if(p3[i].h=="x" && p3[i].pang!=0){
			cout<<"x^"<<p3[i].pang<<" + ";
		} else{
			cout<<p3[i].k;
		}
	}
	cout<<endl<<endl;
	int a,o=0;
	//P1 + P2
	cout<<"P1 + P2 = ";
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(p1[i].pang==p2[j].pang){
				a=p1[i].k+p2[j].k;
				if(p1[i].pang!=0)
				cout<<a<<"x^"<<p1[i].pang<<" + ";
				else cout<<a<<" + ";
			} else o++;
		}
		if(o==6){
			cout<<p1[i].k<<"x^"<<p1[i].pang<<" + ";
		} o=0;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			if(p2[i].pang!=p1[j].pang){
			o++;
			} 
		}
		if(o==5){
			cout<<p2[i].k<<"x^"<<p2[i].pang;if(i!=4)cout<<" + ";
		} o=0;
	}
	cout<<endl<<endl;
	//P1 - P2
	cout<<"P1 - P2 = ";
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(p1[i].pang==p2[j].pang){
				a=p1[i].k-p2[j].k;
				if(p1[i].pang!=0)
				cout<<a<<"x^"<<p1[i].pang<<" + ";
				else cout<<a<<" + ";
			} else o++;
		}
		if(o==6){
			cout<<p1[i].k<<"x^"<<p1[i].pang<<" + ";
		} o=0;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<5;j++){
			if(p2[i].pang!=p1[j].pang){
			o++;
			} 
		}
		if(o==5){
			cout<<-p2[i].k<<"x^"<<p2[i].pang;if(i!=4)cout<<" + ";
		} o=0;
	}
	cout<<endl<<endl;
	//P1 * P3
	cout<<"P1 * P3 = ";
	int kal=0;
	poli kali[10];
	for(int i=0;i<5;i++){
		for(int j=0;j<2;j++){
			if(j==0){
			kali[kal].k=p1[i].k*p3[j].k;
			kali[kal].h=p3[j].h;
			kali[kal].pang=p1[i].pang+p3[j].pang;
			}	
			if(j==1){
			kali[kal].k=p1[i].k*p3[1].k;
			kali[kal].h=p1[i].h;
			kali[kal].pang=p1[i].pang+p3[1].pang;
			}
			kal++;
		}
	}
	for(int i=0; i<10;i++){
		if(kali[i].h=="x" && kali[i].pang!=0 && kali[i].k!=1){
			cout<<kali[i].k<<"x^"<<kali[i].pang<<" + ";
		}else if(kali[i].h=="x" && kali[i].pang!=0){
			cout<<"x^"<<kali[i].pang<<" + ";
		} else{
			cout<<kali[i].k;
		}
	}
	cout<<endl<<" = ";
	for(int i=0;i<10;i++){
		o=0;
		for(int j=0;j<10;j++){
			if(i==j){
			continue;}
			if(kali[i].pang==kali[j].pang){
				cout<<kali[i].k+kali[j].k<<"x^"<<kali[i].pang<<" + ";
				o++;
			}
		}
		if(o==0){
		cout<<kali[i].k<<"x^"<<kali[i].pang;if(i!=9)cout<<" + ";}
	}
	//P2'
	cout<<endl<<endl;
	cout<<"P2' = ";
	for(int i=0; i<6;i++){
		if(p2[i].h=="x" && p2[i].pang!=0 && p2[i].k!=1){
			cout<<p2[i].k*p2[i].pang<<"x^"<<p2[i].pang-1;
		} else{
			cout<<" ";
		}
		if(i<4)cout<<" + ";
	}
	getch();
}
