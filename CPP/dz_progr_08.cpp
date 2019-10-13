#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(){
	setlocale(0, "");	

	int n;


	cout <<"Введите текущий год  "<< endl;
	cin >> n;	
	if (n%12==0)
	cout <<"Обезьяна  "<< endl;
	if (n%12==1)
	cout <<"Петух  "<< endl;
	if (n%12==2)
	cout <<"Собака  "<< endl;
	if (n%12==3)
	cout <<"Свинья  "<< endl;

	if (n%12==4)
	cout <<"Крыса  "<< endl;
	if (n%12==5)
	cout <<"Корова  "<< endl;
	if (n%12==6)
	cout <<"Тигр  "<< endl;
	if (n%12==7)
	cout <<"Кролик  "<< endl;
	if (n%12==8)
	cout <<"Дракон  "<< endl;
	if (n%12==9)
	cout <<"Змея  "<< endl;
	if (n%12==10)
	cout <<"Лошадь  "<< endl;
	if (n%12==11)
	cout <<"Овца  "<< endl;

	else if (n%5==0)
	cout <<"Красного цвета  "<< endl;
	else if (n%12==1)
	cout <<"Желтого цвета  "<< endl;
	else if (n%12==2)
	cout <<"Белого цвета  "<< endl;
	else if (n%12==3)
	cout <<"Черного цвета  "<< endl;
	else if (n%12==4)
	cout <<"Зеленого цвета  "<< endl;
	return 0;
} 


