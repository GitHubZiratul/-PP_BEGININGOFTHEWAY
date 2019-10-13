#include <iostream>
using namespace std;

int main()
{
    int year;
	setlocale(0, "");
	
	cout <<"Введите интересующий вас год :"<< endl;
	cin >>year;
	
	if (year%4 != 0 || year%100 == 0 && year%400 != 0)
		cout <<"Обычный год  :"<< endl;
    else 
	cout <<"Високосный год  :"<< endl;
   

	
	

			
		
}
