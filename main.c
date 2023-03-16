#include <stdio.h>
#include <stdlib.h>

//write a program that works just like Zenith Bank USSD code to purchase airtime

int main(void) 
{
  int recharge,  network, amount;

  printf("Welcome to Zenith Bank Automated Teller Machine\n\n1. Open an account\n2. Check amount\n3. Buy airtime\n\n");
  scanf("%d", &recharge);
  system("clear");

  if (recharge == 3)
  {
    printf("Please input network\n\n1. MTN\n2. GLO\n3. AIRTEL\n4. ETISALAT\n\n");
    scanf("%d", &network);
    system("clear");
    
    if (network == 1)
    {
      printf("Please input amount\n\n1. 1000\n2. 500\n3. 200\n4. 100\n\n");
      scanf("%d", &amount);
      system("clear");
      
      if (amount == 1 || amount == 2 || amount == 3 || amount == 4)
      {
        printf("Your account has been recharged successfully. Spend responsively\n");
        printf("Have a nice day from Zenith Bank\n\n");
        }
        else
      printf("Wrong input, Please try again later\n\n");
        
    }
   else 
    
      printf("Not available at the moment, Please try again another time\n\n"); 
    
  }
else
    printf("Not available at the moment, please try again later\n\n");

  printf("Thank you for banking with Zenith Bank\n\n");

  printf("End of program\n");
  sleep(10);
  system("clear");
  printf("Welcome User\n");
  return 0;
}