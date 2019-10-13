#include <iostream>
using namespace std;

int main()
{
    int y,m,y1,m1,vozr;
	setlocale(0, "");
	
		cout <<"Введите год  и месяц вашего рождения через пробел  "<< endl;
		cin >> y;	
		cin >> m;
		
		
		cout <<"Введите текуцщий год  и месяц   через пробел  "<< endl;
		cin >> y1;	
		cin >> m1;
		
		
		vozr=(y1-y);
		
		if ((m1-m)>=0){
		cout << "Ваш возраст равен "<< vozr <<"годам"<< endl;
		
		 }if ((m1-m)<0){
		cout << "Ваш возраст равен "<< vozr-1 <<"годам"<< endl;
		
		
		
		
}
		
}
	
