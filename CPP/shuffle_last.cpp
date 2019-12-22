#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void shuffle(int* cards,   int size)
{
	
	
    // инициализаци€ генератора случайных чисел
    srand(time(NULL));
 
    // реализаци€ алгоритма перестановки
    for (int i = size - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
 
        int tmp = cards[j];
        cards[j] = cards[i];
        cards[i] = tmp;
    }
}
    
	void shuffle_half(int* cards_1half,int* cards_2half, int half){
		
	
    // инициализаци€ генератора случайных чисел
    srand(time(NULL));
 
    // реализаци€ алгоритма перестановки
    for (int i = half - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
 
        int tmp = cards_1half[j];
        cards_1half[j] = cards_1half[i];
        cards_1half[i] = tmp;
        
        tmp = cards_2half[j];
        cards_2half[j] = cards_2half[i];
        cards_2half[i] = tmp;
        
        
    }
}


	


int main(){
	
	
		
	
    setlocale(LC_ALL, "Russian");
    int size,card,half,halfpl;
    
   
    cout <<"¬ведите количество кард в колоде ";
    cin >>size;
    half=size/2;
    
    int cards_1half[size];
    int cards_2half[size];
    int cards[size];
   
    
    
    
    
    
    for (int i=0;i<size;i++){
    	cout <<"¬ведите цифру "<<i+1 <<"  карты "<<endl;
    	cin >>card;
        cards[i]=card;
      	} 
    cout <<"Input: ";
    for (int i=0;i<size;i++){
    	cout<<cards[i]<<" ";
	}
	cout <<endl;
    	
      	
    shuffle(cards, size);
    
    
 
		       	
    if (size%2!=1){
    	
    	
    	for (int i=0;i<half;i++){
    		cards_1half[i]=cards[i];
    		cards_2half[i]=cards[i+half];
    	
    		
   		}
   		shuffle_half(cards_1half,cards_2half,half);
   	
   	}
	if (size%2==1){
       	
    	cards_2half[half+1]=cards[size-1];
    
    	for (int i=0;i<half;i++){
    		cards_1half[i]=cards[i];
    		cards_2half[i]=cards[i+half];
    		
    		
   		}
   			
   			shuffle_half(cards_1half,cards_2half,half);
   			
   			
   		
   			
   	}
   	
   	for (int i=0;i<half;i++){
    		
    		
   
   	
}

	for (int i=0;i<half;i++){	
		
			
		cards[i]=cards_1half[i];
		cards[half+i]=cards_2half[i];
		
	}
	if (size%2==1){
		cards[size]=cards_2half[half+1];
	}
	
	cout<<"Output: ";			
	for (int i=0;i<size;i++){
		cout<<cards[i]<<" ";
	}
    
	
	
	
}
