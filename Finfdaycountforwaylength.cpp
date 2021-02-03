#include<iostream>
using namespace std;
int main(){
	
	
	int mesafe;
	cout<<"mesafeni daxi edin:";
	cin>>mesafe;
	int count=0;
	for(int ilkMesafe=10;ilkMesafe<mesafe;ilkMesafe+=(ilkMesafe*110)/100){
		count=count+ilkMesafe;
	}
	
	cout<<"gun sayi:"<<count;
	
	
}
