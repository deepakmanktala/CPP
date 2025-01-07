#include <iostream>
#include <string>

using namespace std;

struct EUBankAccount{
	string IBAN;
	int amount;

};


struct UKBankAccount{
	
	string sortNumber;
	string accountNumber;
	int amount;
};


// To work with different type of bank account numbers use a template


template <typename BankAccount>

int getMaxAmount (const BankAccount& acc1, const BankAccount& acc2){
	
	// All bank accounts have an 'amount' field, so we can  access it safely
	if (acc1.amount > acc2.amount){
		return acc1.amount;
	}
	else {
		return acc2.amount;
	}
	
}



int main() {
	
	EUBankAccount euAccount1{"IBAN1", 1000};
	EUBankAccount euAccount2{"IBAN2", 2000};
	
	cout << "The greater amount b/2 two EU accounts is   " << getMaxAmount(euAccount1, euAccount2) << endl;
	
	UKBankAccount ukAccount1{"SORT1", "ACCOUNT_NUM_1", 2500};
	UKBankAccount ukAccount2{"SORT2", "ACCOUNT_NUM_2", 3500};
	cout << "The greater amount b/2 two UK accounts is   " << getMaxAmount(ukAccount1, ukAccount2) << endl;
	
	
	
	
}