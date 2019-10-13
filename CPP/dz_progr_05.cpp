#include <iostream>
using namespace std;

int main()
{
    double a,b,c;
	setlocale(0, "");
	cout <<"Введите числа  "<< endl;
	cin >> a;	
	cin >> b;
	cin >> c;
	
	if (a==b)
	
	cout <<"Есть пара равных чисел:"<<a<<" и "<<b<< endl;
	else if (a==c)
	cout <<"Есть пара равных чисел:"<<a<<" и "<<c<< endl;
	else if (b==c)
	cout <<"Есть пара равных чисел:"<<b<<" и "<<c<< endl;
	else
	 
	cout <<"Равных между собой чисел нет"<< endl;
	

}
	
	
