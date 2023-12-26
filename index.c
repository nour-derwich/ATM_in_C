#include<stdio.h>

int main()
{
     char card;
     int n;
     int p;
     int a;
     int b;
     int diff;
     int i;
     char cad;

     printf("Welcome To the ATM\n\n");

     printf("Please Insert your card\n\n");
     scanf("%c", &card);

     if(card=='k')
     {
          printf("Hello Ken Kaneki\n\n");

          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");

          b = 50000;

          scanf("%d", &n);

          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p==1234)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                         printf("insufficient");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");

                         diff = b - a;

                         printf("Now, Your Bank Balance is %d", diff);
                    }

               }
               else
               {
                    printf("Incorect Pin\n\n");

                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p==1234)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);

                    if(a>b)
                    {
                         printf("insufficient");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");

                         diff = b - a;

                         printf("Now, Your Bank Balance is %d", diff);
                    }
                    }
                    else
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p!=1234)
               {
                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p!=1234)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }

          }
     }
     else if(card=='s')
     {
          printf("Hello Sasuke Uchiha\n\n");

          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");

          b = 100000;

          scanf("%d", &n);

          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p==5678)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                         printf("insufficient");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");

                         diff = b - a;

                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");

                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p==5678)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);

                         if(a>b)
                         {
                              printf("insufficient");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");

                              diff = b - a;

                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p!=5678)
               {
                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p!=5678)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }

     }
     else if(card=='i')
     {
          printf("Hello Itachi Uchiha\n\n");

          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");

          b = 60000;

          scanf("%d", &n);

          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p==9123)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                         printf("Insufficient");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");

                         diff = b - a;

                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");

                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p==9123)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);

                         if(a>b)
                         {
                              printf("insufficient");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");

                              diff = b - a;

                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }

               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p!=9123)
               {
                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p!=9123)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }

     }
     else if(card=='l')
     {
          printf("Hello Light Yagami\n\n");

          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");

          b = 40000;

          scanf("%d", &n);

          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p==8123)
               {
                   printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                         printf("Insufficient");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");

                         diff = b - a;

                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");

                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p==8123)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);

                         if(a>b)
                         {
                              printf("insufficient");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");

                              diff = b - a;

                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
              printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);

               if(p!=8123)
               {
                    printf("Please Try Again\n\n");

                    scanf("%d", &p);

                    if(p!=8123)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }
     }
     else
     {
          printf("Please insert the card properly\n\n");
     }

     return 0;

}

