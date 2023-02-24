#include<iostream>
#include<cmath>
using namespace std;


void Input(int a[] , int &n){
	do{
		cin>>n;
	}while(!(1 <= n && n <= 100));
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<" ";
	}
}
bool CheckScp(int n){
	int k = sqrt(abs(n));
	if(k*k == n) return true;
	return false;
}
int CheckSnt(int n){
for(int i = 2 ; i *i <= n ; i++){
	if(n % i == 0) return -1;
  }
  return n>1;	
}
bool CheckShh(int n){
	int sum = 0;
	for(int i = 1 ; i <= n/2 ; i++){
		if(n % i == 0) sum+= i;
	}
	if(sum == n) return true;
	return false;
}
void AddNumber(int a[] , int&n , int pos , int value){
	for(int i = n ; i > pos ; i--){
		a[i] = a[i-1];
	}
	n++; a[pos] = value;
}
void DeleteNumber(int a[] , int &n , int pos){
	for(int i = pos ; i < n-1 ; i++){
		a[i] = a[i+1];
	}
	n--;
}
void AddXSatisfy(int a[] , int &n , int&x){
	cin>>x;
	int mark = 1;
	for(int i = 0 ; i < n ; i++){
		if(CheckScp(a[i]))
		{
		AddNumber(a , n , i+1 , x);
		i++;	
		mark = 0;
		}
	}
	if(mark == 1){
		int maxSnt = 2 , cnt = 0;
		for(int i = 0 ; i < n ; i++){
			if(CheckSnt(a[i]) == 1 && a[i] >= maxSnt){
		      maxSnt = a[i];	
			  cnt++;	
			}
		}
		//Cach 1
//		if(cnt > 0){
//			for(int i = 0 ; i < n ; i++){
//				if(a[i] == maxSnt){
//		 			AddNumber(a , n , i+1 , x);
//		            i++;	
//				}
//			}
//		}else
//		AddNumber(a , n , n , x);
   //Cach 2
      int i = 0;
      while(a[i] != maxSnt && i < n-1)
      i++;
      AddNumber(a , n ,i+1 , x);
	}
	Ouput(a , n);
}
int UlnShh(int n){
	int maxShh = 1;
//	for(int i = 1 ; i <= n/2 ; i++){
//		if(n % i == 0 && i > maxShh){
//			maxShh = i;
//		}
//	}
//    for(int i = n/2 ; i >= 1 ; i--){
//    	if(n % i == 0) return i;
//	}
//	return maxShh;
}
void EditAllLuckyNum(int a[] , int n){
	int i = 0;
	while( i < n){
		if(CheckShh(a[i])){
//			a[i] = UlnShh(a[i]);
           a[i] = a[i]/2;
		}
		i++;
	}
	Ouput(a , n);
}
void BeautifulyArr(int a[] , int &n){
	 for(int i = 0 ; i < n-1 ; i++){
	 	if((a[i] % 2 == 1 && a[i+1] % 2 == 1) 
		 ||(a[i] % 2 == 0 && a[i+1] % 2 == 0)){
	 	  	DeleteNumber(a , n , i+1);
	 	  	i--;
		 }
	 }
	 Ouput(a , n);
}
int main(){
	
	int a[100] , n , x;
	Input(a , n);
	//Cau a
	AddXSatisfy(a , n  , x);
	cout<<endl;
	//Cau b
	EditAllLuckyNum(a , n);
	cout<<endl;
	//Cau c
	BeautifulyArr(a , n );
	return 0;
} 
