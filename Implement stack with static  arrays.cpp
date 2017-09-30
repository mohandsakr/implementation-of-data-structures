//============================================================================
/*
 * in this file i implement the stack using array
 * note that the stack size here i defined it as a 1001
 * and if it exceed 1000 element it will considered a stack over flow ;
 *
 * */
// Name        : Implement.cpp
// Author      : mohand sakr;
// Version     :1
// Copyright   : use this code under your responsibility ;
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void ShowTheTop();
void Push();
void Pop();
bool isempty();
int Stack[1001];
int top=0;
int main() {
	int choice;
	do{
	cout<<"welcome\n"<<"this is the stack implementation  program please inser a choice \n ";
	cout<<"To Push  insert 1\n";
	cout<<"To pop  insert 2\n";
	cout<<"To see the element  in the top of the stack  insert 3\n";
	cout<<"To exit  insert 0 \n";
	cin>>choice;
	if(choice==1){
			Push();
		}
		else if(choice==2){
			Pop();
		}
		else if(choice==3){
			ShowTheTop();
		}

	}
	while(choice);

 	return 0;
}
bool isempty(){
	if(!top){
		return 1;
	}
	else
		return 0;
}
void ShowTheTop(){
	if(isempty()){
		cout<<"the stack is empty \n";
	}
	else{
	cout<<"the element on the top \n"<<Stack[top]<<"\n";}
};
void Push(){
	if(top==1001){
		cout<<"the Stack is Full  and this is a stack overflow ";
	}
	else{
	cout<<"enter a value  \n";
	top+=1;
	cin>>Stack[top];}
}
void Pop(){
	if(isempty())
		cout<<"the stack is empty this is a under folow error\n ";
	else{
		top-=1;
		cout<<"poping successfuly\n";
		cout<<"top :"<<top<<"\n";
	}

}
