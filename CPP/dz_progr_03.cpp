#include <iostream>
using namespace std;

int main()
{
    int y,m,y1,m1,vozr;
	setlocale(0, "");
	
		cout <<"������� ���  � ����� ������ �������� ����� ������  "<< endl;
		cin >> y;	
		cin >> m;
		
		
		cout <<"������� �������� ���  � �����   ����� ������  "<< endl;
		cin >> y1;	
		cin >> m1;
		
		
		vozr=(y1-y);
		
		if ((m1-m)>=0){
		cout << "��� ������� ����� "<< vozr <<"�����"<< endl;
		
		 }if ((m1-m)<0){
		cout << "��� ������� ����� "<< vozr-1 <<"�����"<< endl;
		
		
		
		
}
		
}
	
