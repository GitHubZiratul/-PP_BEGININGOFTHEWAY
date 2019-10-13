#include <iostream>
using namespace std;

int main()
{
    double a,b,c,diskr;
	setlocale(0, "");

	cout <<"Дано уравнение ax^2+bx+c, введите a, b и с через пробел "<< endl;
	cin >> a;	
	cin >> b;
	cin >> c;
	
	diskr=((b*b)-(4*a*c));
	cout <<diskr<<endl;
	
	
	if (diskr>0) {
		cout <<"Уравнение имеет 2 корня "<< endl;
	}else if (diskr==0){
	
		cout <<"Уравнение имеет 1 корeнь"<<endl;

		
	}else{
		cout <<"Уравнение не имеет корней"<<endl;
	}
	
	
		
	
}
	
