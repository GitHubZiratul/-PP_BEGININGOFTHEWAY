#include <iostream>
#include <cstring>

using namespace std;


char text1[99];
char text2[99];

 
int main (){
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ ����������� >> ";
	cin  >> text1;
	cout << "������� ������ ����������� >> ";
	cin  >> text2;  
  
	if (strcmp(text1,text2)==0){
		cout << "���� ������ ��������� >> ";
  	}
	else{
		cout << "���� ������ ���������� >> ";
	}
  
                       
 
  return 0;
}
