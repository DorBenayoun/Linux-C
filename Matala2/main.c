#include <stdio.h>
#include "myBank.h"

int main(){

printf("Welcome to Bank of Ariel!\n"); 
printf("I'm Dor your digital banker, what I can do for you today? (pay attention to case sensitivity)\n"); 
printf("O - open a new account and make a first deposit\n"); 
printf("B - check what's your current balance\n"); 
printf("D - deposit\n"); 
printf("W - withrawal\n"); 
printf("C - close your account\n"); 
printf("I - change the bank interest rate (banker option)\n"); 
printf("P - show bank status (banker option)\n"); 
printf("E - exit\n"); 

char select = ' ';

	while(select != 'E'){
		printf("\nTransaction type? : "); 
		scanf("%select", &select);
      
		switch(select){
	
			case 'O': newAccount();
	        	break;

			case 'B': currentBalance();
	        	break;

     			case 'D': bankDeposit();
	        	break;

      			case 'W': bankWithdrawal();
	        	break;

			case 'C': terminateAccount();
	        	break;

			case 'I': bankInterest();
	        	break;

			case 'P': bankStatus();
	        	break;

			case 'E': appExit();
	  		break;
	  		
			default: printf("You've pressed the wrong button, try again.\n");
			break;
        
		}
	}

}
