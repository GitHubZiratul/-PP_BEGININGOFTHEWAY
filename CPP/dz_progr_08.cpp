#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(){
	setlocale(0, "");	

	int n;


	cout <<"������� ������� ���  "<< endl;
	cin >> n;	
	if (n%12==0)
	cout <<"��������  "<< endl;
	if (n%12==1)
	cout <<"�����  "<< endl;
	if (n%12==2)
	cout <<"������  "<< endl;
	if (n%12==3)
	cout <<"������  "<< endl;

	if (n%12==4)
	cout <<"�����  "<< endl;
	if (n%12==5)
	cout <<"������  "<< endl;
	if (n%12==6)
	cout <<"����  "<< endl;
	if (n%12==7)
	cout <<"������  "<< endl;
	if (n%12==8)
	cout <<"������  "<< endl;
	if (n%12==9)
	cout <<"����  "<< endl;
	if (n%12==10)
	cout <<"������  "<< endl;
	if (n%12==11)
	cout <<"����  "<< endl;

	else if (n%5==0)
	cout <<"�������� �����  "<< endl;
	else if (n%12==1)
	cout <<"������� �����  "<< endl;
	else if (n%12==2)
	cout <<"������ �����  "<< endl;
	else if (n%12==3)
	cout <<"������� �����  "<< endl;
	else if (n%12==4)
	cout <<"�������� �����  "<< endl;
	return 0;
} 


