#include"Account.h"
using namespace std;

float Account::AccountBalance(float depositedAmount){
	float currentAmount = 150.45;
	float totalBalance = 0;
	totalBalance = currentAmount + depositedAmount;
	return totalBalance;
}