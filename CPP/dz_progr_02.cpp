#include <iostream>
using namespace std;

int main()
{
    double a,b,c,diskr;
	setlocale(0, "");

	cout <<"���� ��������� ax^2+bx+c, ������� a, b � � ����� ������ "<< endl;
	cin >> a;	
	cin >> b;
	cin >> c;
	
	diskr=((b*b)-(4*a*c));
	cout <<diskr<<endl;
	
	
	if (diskr>0) {
		cout <<"��������� ����� 2 ����� "<< endl;
	}else if (diskr==0){
	
		cout <<"��������� ����� 1 ���e��"<<endl;

		
	}else{
		cout <<"��������� �� ����� ������"<<endl;
	}
	
	
		
	
}
	
