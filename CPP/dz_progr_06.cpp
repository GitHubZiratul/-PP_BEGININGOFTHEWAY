#include <iostream>
using namespace std;

int main()
{
    double a,b,c;
	setlocale(0, "");
	cout <<"Введите стороны треугольника   "<< endl;
	cin >> a;	
	cin >> b;
	cin >> c;
	
	if (a==b && b==c )
	
		cout <<"Треугольник равносторонний    "<< endl;
	else 
		cout <<"Треугольник не является равносторонним   "<< endl;
			

}
		
