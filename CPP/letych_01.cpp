#include <iostream>
#include <cstring>

using namespace std;


char text1[99];
char text2[99];

 
int main (){
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите первое предложение >> ";
	cin  >> text1;
	cout << "¬ведите второе предложение >> ";
	cin  >> text2;  
  
	if (strcmp(text1,text2)==0){
		cout << "¬аши строки идентичны >> ";
  	}
	else{
		cout << "¬аши строки отличаютс€ >> ";
	}
  
                       
 
  return 0;
}
