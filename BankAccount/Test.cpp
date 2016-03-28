#include"Account.h"
#include<iostream>
using namespace std;

int main(){
	Account myAccount;
	float deposit;
	cout << "Please enter the deposit amount into ypur account" << endl;
	cin >> deposit;
	cout << "The account balance at the moment is:" << myAccount.AccountBalance(deposit) << endl;
	//system("pause");
	return 0;
}