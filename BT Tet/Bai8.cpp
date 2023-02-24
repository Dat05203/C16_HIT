#include<iostream>
#include<cstring>
using namespace std;

void DeleteCharacter(char name[] , int pos){
	for(int i = pos ; i < strlen(name) - 1 ; i++){
		name[i] = name[i+1];
	}
	name[strlen(name) - 1] = '\0';
}
void FormatString(char name[]){
	int i = 0;
	//xoa ki tu khoang trang thua o dau
	while(name[0] == ' '){
		DeleteCharacter(name , 0);
	}
	//Xoa ki tu khoang trang thua o cuoi
	while(name[strlen(name) - 1] == ' '){
		DeleteCharacter(name , strlen(name) - 1);
	}
	//Xoa di cac ki tu khoang trang lien ke nhau 
	for(int i = 0 ; i < strlen(name) ; i++){
		if(name[i] == ' ' && name[i+1] == ' '){
			DeleteCharacter(name , i);
			i--;
		}
	}
	// chuyen het cac chuoi nay thanh chuoi viet thuong 
	strlwr(name);//chuyen chuoi thanh chuuoi viet thuong
	//strupr(name);//chuyen chuoi thanh chuoi viet hoa
	//dua theo bang ma assci 
	name[0] -= 32;
	for(int i = 1 ; i < strlen(name) ; i++){
		if(name[i] == ' ' && name[i+1] != ' '){
			name[i+1] -= 32;
		}
	}
}
int main(){
	
	char name[100];
	cin.getline(name , 100);
	FormatString(name);
	cout<<name;
	return 0;
}
