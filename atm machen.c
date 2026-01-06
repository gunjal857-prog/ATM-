# ATM-
MY FIRST ATM MENUE.
<br>
AUTHOR - GAURAV GUNJAL

#include <stdio.h>

int main() {
    int pin, choice;
    int attempts = 0;
    int balance = 5000; 
    int amount,totalbalance;
    
 
while(attempts <=3){
	printf("enter a pin : ");
	scanf("%d",&pin);
 
if(pin == 1234){
	printf(" pin verified sucessfully!\n ");
	
}else{

	printf("wrong pin ! rienter a valide pi : %d",attempts - 3);
	attempts++;
}
 if (attempts == 3){
 	printf("your card is blocked too many  times wrong attempt \n");

 }
    while(1){
    	printf("\n------ATM------\n");
    	printf("1.check balance\n");
    	printf("2.deposite money\n");
    	printf("3.withdrawal\n");
    	printf("4.exite\n");
    	printf("enter your choice \n: ");
    	scanf("%d",&choice);
    	
    
		switch (choice){
		
    	
    
    	case 1:
    		printf("your current balance is = %d",balance);
		break;
		
		
     case 2:
            // deposit money
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Invalid amount!\n");
            } else {
                balance += amount;
                printf("Deposit successful!\n");
                printf("New balance = %d\n", balance);
            }
            break;
		
		
	        case 3:
            // withdraw money
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Invalid amount!\n");
            } else if (amount > balance) {
                printf("Insufficient funds!\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful!\n");
                printf("Remaining balance = %d\n", balance);
            }
            break;
		
		
		
	case 4:
		
			printf(" ---thank you visit againe---\n");
		return 0;
		
		default:
			printf("invalide choice tray againe");
	
	}
}
}

    return 0;
}


