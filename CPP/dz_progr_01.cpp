#include <iostream>
using namespace std;

int main()
{
	int kmh,ms,msvkm;
	setlocale(0, "");
	
	
	cout <<"¬ведите число в километрах в час "<<endl ;
	cin >> kmh;
	
	cout <<"¬ведите число в метрах в секундну " <<endl;
	cin >> ms;
	
	msvkm=((ms*3600)/1000);
	
	cout <<ms <<"м/c в километрах в час ="<< msvkm <<endl;
	
	if (msvkm>kmh) {
	cout <<ms <<"м/c  больше , чем "<< kmh <<"км/ч"<<endl;
	
	}else if (msvkm==kmh){
		cout <<kmh <<"км/ч  равен "<< ms <<"м/c"<<endl;	
	
	}else{	
	cout <<kmh <<"км/ч  больше , чем "<< ms <<"м/c"<<endl;}
		}
	
	
	
	
	
	
	

