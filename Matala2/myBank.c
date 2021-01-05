#include <stdio.h>
#include "myBank.h"

#define OPEN 1
#define CLOSED 0
#define ACCOUNT_SIZE 50
#define INFO_SIZE 2

double bankDatabase[ACCOUNT_SIZE][INFO_SIZE] = {0};


void newAccount(){

int account_number = 901, i = 0;

	while(i < ACCOUNT_SIZE){
		if(bankDatabase[i][0] == CLOSED){
		double amount;
	      	printf("This is your first deposit, enter an amount: ");
	      	scanf("%lf", &amount);
	      	bankDatabase[i][1] = amount;
	      	bankDatabase[i][0] = OPEN;
	      	account_number += i; 
	      	printf("Your account number is: %d", account_number);
		return;
		}
	i++;
	}
	printf("The bank is currently full");			   
}


void currentBalance(){

int account_number;
printf("Enter your account number: ");
scanf("%d", &account_number);
int i = (account_number % 50)-1;
	if(bankDatabase[i][0] == OPEN){
	double currentBalance = bankDatabase[i][1];
        printf("Your account current balance is: %0.2lf", currentBalance);
        }
	
   	else{ 
   	printf("The account doesn't exist");
   	}
}


void bankDeposit(){

int account_number;
printf("Enter your account number: ");
scanf("%d", &account_number);
int i = (account_number % 50)-1;
     
	if(bankDatabase[i][0] == OPEN){
	double amount;
	printf("Enter an amount to deposit: ");
	scanf("%lf", &amount);
	bankDatabase[i][1] += amount;
	printf("Your account current balance is: %0.2lf", bankDatabase[i][1]);
	}
      
	else{
	printf("The account deosn't exist");
	}
}


void bankWithdrawal(){

int account_number;
printf("Enter your account number: ");
scanf("%d", &account_number);
int i = (account_number % 50)-1;

	if(bankDatabase[i][0] == OPEN){
	double amount;
	printf("Enter an amount to withdraw: ");
	scanf("%lf", &amount);
	
		if((bankDatabase[i][1] > amount) && (bankDatabase[i][1] > 0)){
		bankDatabase[i][1] -= amount;
		printf("Your account current balance is: %0.2lf", bankDatabase[i][1]);
		}
	
        	else{
        	printf("Theres not enough money to withdraw, please check your account balance");
        	}
	}
	else{ 
	printf("The account doesn't exist");
	}
}


void terminateAccount(){

int account_number;
printf("Enter your account number: ");
scanf("%d", &account_number);
int i = (account_number % 50)-1;

	if(bankDatabase[i][0] == OPEN){
	bankDatabase[i][0] = CLOSED;
	printf("Your account is closed");
	}
	
	else{
	printf("The account doesn't exist");
	}
}


void bankInterest(){
int i = 0;
double interest_rate;
printf("Enter the desired interest rate: ");
scanf("%lf", &interest_rate);

	while(i < ACCOUNT_SIZE){
		if(bankDatabase[i][0] == OPEN){
		bankDatabase[i][1] = bankDatabase[i][1]*(1 + interest_rate/100);
		}
	i++;
	} 
}


void bankStatus(){
int account_number = 901;
int i = 0;

	while(i < ACCOUNT_SIZE){
		if(bankDatabase[i][0] == OPEN){
		printf("\nBank of ariel account number: %d current balance is: %0.2lf",account_number, bankDatabase[i][1]);
		}
	account_number++;
	i++;
	}
}


void appExit(){
int i = 0;

	while(i < ACCOUNT_SIZE){
		if(bankDatabase[i][0] == OPEN){
		bankDatabase[i][0] = CLOSED;
		bankDatabase[i][1] = CLOSED;
		}
	i++;
	}
	printf("Thanks for using BOA app!\n");
    	return;
}

