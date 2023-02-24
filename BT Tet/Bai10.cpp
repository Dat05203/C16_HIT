#include<iostream>
using namespace std;

int main(){
	
	int n =6;
	float a[6] = {2 , 4 , 5 ,6 , 7 , 8};
	int x = 3 , sum = 0;
	
//	// 6 
//	1 2 3 4 5 6
//	// 7
//	1 2 3 4 5 6 7 
  if(x <= n/2 ){
  	int j = 0;
  	for(int i = n-1 ; i >=  0 ; i--){
  		if((i+1) % 2 == 0){
  			sum += a[i];
  			j++;
		  }
		  if(j == x){
		  	break;
		  }
	  }
	  cout<<sum;
  }else
  cout<<"-1";
	return 0;
}
