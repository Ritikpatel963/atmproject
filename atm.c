#include<stdio.h>
#include<conio.h>

int main(){
	
	int card = 9630884927, card_number, choice,withdraw,deposit,password;
	float amount=5000.0, new_amount=0.0;

printf("Enter the card number = ");
	scanf("%d",&card_number);

if (card_number == card){
	
	printf("Welcome to the atm \n Enter the Pin\n ");
//	printf("Enter the password = ");
	scanf("%d",&password);
	  if (password==9630){
	 
	      
	      printf("\n\n");
printf("\n\t*           MENU                  *");
     printf("\n\t*     1. Check Balance            *");
     printf("\n\t*     2. Withdraw                 *");
     printf("\n\t*     3. Deposit                  *");
     printf("\n\t*     4. Exit                     *");
     printf("\n\t*                                 *");
     printf("\n\t***********************************");
     printf("\n\n");
     
     scanf("%d",&choice);
if (choice==1)
printf("your balance is = %.3f",amount);
else if (choice==2){

	printf("Enter the amount to withdraw = \n");
	scanf("%d",&withdraw);
			if (amount<withdraw){
				printf("You not have not sufficent amount\n");
			}
			else{
				new_amount=amount-withdraw;
				printf("your current Amount is = %.3f",new_amount);
			}
		}
else if (choice==3){
	printf("Enter the amount to deposit = \n");
	scanf("%d",&deposit);
	amount=amount+deposit;
	printf("Your balance is = %.2f",amount);
}
else if(choice==4){
	printf("thank you for using Ritik atm");
}
}
	else{
		      printf("Enter the right pin");

		}	
		
} 
else{
	printf("enter the right card number\n");

}	


getch();
}

