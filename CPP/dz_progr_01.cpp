#include <iostream>
using namespace std;

int main()
{
	int kmh,ms,msvkm;
	setlocale(0, "");
	
	
	cout <<"������� ����� � ���������� � ��� "<<endl ;
	cin >> kmh;
	
	cout <<"������� ����� � ������ � �������� " <<endl;
	cin >> ms;
	
	msvkm=((ms*3600)/1000);
	
	cout <<ms <<"�/c � ���������� � ��� ="<< msvkm <<endl;
	
	if (msvkm>kmh) {
	cout <<ms <<"�/c  ������ , ��� "<< kmh <<"��/�"<<endl;
	
	}else if (msvkm==kmh){
		cout <<kmh <<"��/�  ����� "<< ms <<"�/c"<<endl;	
	
	}else{	
	cout <<kmh <<"��/�  ������ , ��� "<< ms <<"�/c"<<endl;}
		}
	
	
	
	
	
	
	

