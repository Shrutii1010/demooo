/*Write  a  program  to  define  a  structure  for  customer  bank  account  that  holds  information  like 
account number, name of account ho
lder, balance, internet banking facility availed(Yes or No), 
pin code ( 422001 to 422013) , account type(saving, recurring, deposit).
a) Read account details for N customers.
b) Identify the golden, silver and general customers.
c) Golden customers: Balanc
e > 10,00000.
Silver Customers: Balance > 500000 and < 10,00000.
General customers: Balance <500000.
c) Display the list of customers availing the internet banking facility.
d) Display the customers belonging to a particular geographical location depending
on postal 
code.
e) Display the customer list as per their account type.*/

#include <stdio.h>
#include <string.h>
#define Maximum 2

void read_data();
void write_data();
void identify_cust();
void internetfacility();
void display_pincode();
void display_account_type();

typedef struct bank
{
    int account_no;
    char cust_name[20];
    float balance;
    char internetbanking[4];
    int pincode;
    char account_type[10];
} bank;
bank customer[Maximum];
int main()
{
    int choice, i;
    while (1)
    {
        printf("\n\nPerform following queries\n1.Read account details for N customers.\n2.Identify the golden, silver and general customers.\n3.Display the list of customers availing the internet banking facility.\n4.Display the customers belonging to a particular geographical location depending on postal code.\n5.Display the customer list as per their account type.\n6.Exit.\n\n  Please Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            readdata();
            printdata();
            break;
        case 2:
            identifycustomer();
            break;
        case 3:
            internetfacility();
            break;
        case 4:
            displaypin();
            break;
        case 5:
            displayacc_type();
            break;
        case 6:
            return 0;
        default:
            printf("\n Invalid choice!!!");
        }
    }
}
void read_data()
{
    int choice;
    printf("\nEnter the %d no of customers:\n", Maximum);
    for (int i = 0; i < Maximum; i++)
    {
        printf("\nEnter account number:\n");
        scanf("%d", &customer[i].account_no);
        printf("Enter account holder name:\n");
        scanf("%s", customer[i].cust_name);
        printf("Enter account balance:\n");
        scanf("%f", &customer[i].balance);
    xyxy:
        printf(" Whether available internet banking facility... \n1)Yes \n2)No -\n");
        scanf("%d", &choice);
        if (choice == 1)
            strcpy(customer[i].internetbanking, "Yes");
        else if (choice == 2)
            strcpy(customer[i].internetbanking, "No");
        else
            goto xyxy;
    aaaa:
        printf("Enter the Pincode between 422001 to 422013\n");
        scanf("%d", &customer[i].pincode);
        if (customer[i].pincode < 422001 && customer[i].pincode > 422013)
            goto aaaa;
    bbbb:
        printf("Enter account type: \n1.Saving \n2.Recurring \n3.Deposit\n");
        scanf("%d", &choice);
        if (choice == 1)
            strcpy(customer[i].account_type, "Saving");
        else if (choice == 2)
            strcpy(customer[i].account_type, "Recurring");
        else if (choice == 3)
            strcpy(customer[i].account_type, "Deposit");
        else
            goto bbbb;
    }
}

void print_data()
{
    int i;
    printf("\nAccount holder custumer information is:");
    for (i = 0; i < Maximum; i++)
    {
        printf("\nAccount number: %d", customer[i].account_no);
        printf("\nAccount holder Name: %s", customer[i].cust_name);
        printf("\nAccount balance: %f", customer[i].balance);
        printf("\nWhether internet banking facility is: %s", customer[i].internetbanking);
        printf("\nAccount type: %s\n", customer[i].account_type);
    }
}
void identify_cust()
{
    int x, j = 0, count = 0;
    for (int i = 0; i < x; i++)
    {
        if (customer[i].balance > 1000000)
        {
            count++;
            if (count == 1)
                printf("\n'GOLDEN' Customers are : \n");
            printf("\n %d.%s\n", j + 1, customer[i].cust_name);
            j++;
        }
    }
    count = 0;
    for (int i = 0; i < x; i++)
    {
        if (customer[i].balance > 500000 && customer[i].balance < 1000000)
        {
            count++;
            if (count == 1)
                printf("\n'SILVER' Customers are :\n");
            printf("\n %d.%s\n", j + 1, customer[i].cust_name);
            j++;
        }
    }
    count = 0;
    for (int i = 0; i < x; i++)
    {
        if (customer[i].balance < 500000)
        {
            count++;
            if (count == 1)
                printf("\n'GENERAL' Customers are :\n");
            printf("\n\t\t %d.%s\n", j + 1, customer[i].cust_name);
            j++;
        }
    }
}
void display_pincode()
{
    int k, count = 0, i;
    printf("\nEnter the pincode to display customers belonging to a particular geographical location :\n");
    scanf("%d", &k);
    for (i = 0; i < Maximum; i++)
    {
        if (k == customer[i].pincode)
        {
            count++;
            if (count == 1)
                printf("\nCustomers having same Postal Code %d are :\n", k);
            printf("\n%d. %s\n", count, customer[i].cust_name);
        }
    }
}
void internet_facility()
{
    int count = 0;
    printf("\nCustomers availing internet facility:\n");
    for (int i = 0; i < Maximum; i++)
    {
        if ((strcmp(customer[i].internetbanking, "Yes") == 0))
            printf("\n%d. %s\n", count + 1, customer[i].cust_name);
        if ((strcmp(customer[i].internetbanking, "No") == 0))
            printf("\nInternet banking Facility not available: %s\n", customer[i].cust_name);
        count++;
    }
}
void display_account_type()
{
    int i;
    printf("\nCustomers having Saving account:\n");
    for (i = 0; i < Maximum; i++)
    {
        if (strcmp(customer[i].account_type, "Saving") == 0)
            printf("\nAccount holder's name: %s\n", customer[i].cust_name);
    }
    printf("\nCustomers with Recurring account:\n");
    for (i = 0; i < Maximum; i++)
    {
        if (strcmp(customer[i].account_type, "Recurring") == 0)
            printf("\nAccount holder's name: %s\n", customer[i].cust_name);
    }
    printf("\nCustomers with Deposit account:\n");
    for (i = 0; i < Maximum; i++)
    {
        if (strcmp(customer[i].account_type, "Deposit") == 0)
            printf("\nName of the account holder::%s\n", customer[i].cust_name);
    }
}
/*
#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;

    printf("Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    do
    {

        printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, account_no, amount);
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].balance = 0;
    } 
}

void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}

int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    }
}
*/
/*#include<stdio.h>
#include<string.h>
#define Maximum 2


void read_data();
void write_data();
void identify_cust();
void internetfacility();
void display_pincode();
void display_account_type();

typedef struct bank
{
int account_no;
char cust_name[20];
float balance;
char internetbanking[4];
int pincode;
char account_type[10];
}bank;
bank customer[Maximum];
int main()
{
int choice,i;
while(1)
{
   printf("\n\nPerform following queries\n1.Read account details for N customers.\n2.Identify the golden, silver and general customers.\n3.Display the list of customers availing the internet banking facility.\n4.Display the customers belonging to a particular geographical location depending on postal code.\n5.Display the customer list as per their account type.\n6.Exit.\n\n  Please Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
  {
  case 1:
         read_data();
         write_data();
         break;
  case 2:
        identify_cust();
        break;
  case 3: 
        internet_facility();
        break;
  case 4: 
        display_pincode();
        break;
  case 5: 
        display_account_type();
        break;
  case 6: return 0;
  default: 
        printf("\n Invalid choice!!!");
   }
 }
}
void read_data()
{
  int choice;
printf("\nEnter the %d no of customers:\n",Maximum); 
for(int i=0;i<Maximum;i++) 
{ 
printf("\nEnter account number:\n");scanf("%d",&customer[i].account_no);
printf("Enter account holder name:\n");
scanf("%s",customer[i].cust_name);  printf("Enter account balance:\n");
scanf("%f",&customer[i].balance);
xyxy:printf(" Whether available internet banking facility... \n1)Yes \n2)No -\n");
scanf("%d",&choice);
if(choice==1)
strcpy(customer[i].internetbanking,"Yes");
else if(choice==2)
strcpy(customer[i].internetbanking,"No");
else 
goto xyxy;
aaaa: printf("Enter the Pincode between 422001 to 422013\n"); 
scanf("%d",&customer[i].pincode);
if (customer[i].pincode < 422001 && customer[i].pincode > 422013)
goto aaaa;
bbbb:printf("Enter account type: \n1.Saving \n2.Recurring \n3.Deposit\n");
scanf("%d",&choice);
if(choice==1)
strcpy(customer[i].account_type,"Saving"); 
else if(choice==2)
strcpy(customer[i].account_type,"Recurring");
else if(choice==3)
strcpy(customer[i].account_type,"Deposit");
else 
goto bbbb;
}
}

void write_data()
{
int i;
printf("\nAccount holder custumer information is:"); 
for(i=0 ;i<Maximum ;i++)
{
printf("\nAccount number: %d",customer[i].account_no);
printf("\nAccount holder Name: %s",customer[i].cust_name);
printf("\nAccount balance: %f",customer[i].balance);
printf("\nWhether internet banking facility is: %s",customer[i].internetbanking);
printf("\nAccount type: %s\n",customer[i].account_type);
}
}
void identify_cust()
{
    int x,j=0,count=0;
    for (int i = 0; i < x; i++)
    {
        if (customer[i].balance > 1000000)
        {
            count++;
            if (count==1)
            printf("\n'GOLDEN' Customers are : \n");
            printf("\n %d.%s\n",j+1,customer[i].cust_name);
            j++;
        }
    }
    count=0;
     for (int i = 0; i < x; i++)
    {
        if (customer[i].balance > 500000 && customer[i].balance < 1000000)
        {
            count++;
            if (count==1)
            printf("\n'SILVER' Customers are :\n");
            printf("\n %d.%s\n",j+1,customer[i].cust_name);
            j++;
        }
    }
    count=0;
    for (int i = 0; i < x; i++)
    {
        if (customer[i].balance < 500000)
        {
            count++;
            if (count==1)
            printf("\n'GENERAL' Customers are :\n");
            printf("\n\t\t %d.%s\n",j+1,customer[i].cust_name);
            j++;
        }
    }
    
}
void display_pincode()
{
    int k,count=0,i;
    printf("\nEnter the pincode to display customers belonging to a particular geographical location :\n");
    scanf("%d",&k);
    for(i=0;i<Maximum;i++)
    {
        if (k==customer[i].pincode)
        { 
          count++;
          if(count==1)
          printf("\nCustomers having same Postal Code %d are :\n",k); 
          printf("\n%d. %s\n", count,customer[i].cust_name); 
        }
    }
        }
void internet_facility()
{
  int count=0;
  printf("\nCustomers availing internet facility:\n");
  for( int i=0;i<Maximum;i++)
  {
  if((strcmp(customer[i].internetbanking, "Yes")==0)) 
  printf("\n%d. %s\n",count+1,customer[i].cust_name);
  if((strcmp(customer[i].internetbanking, "No")==0)) 
  printf("\nInternet banking Facility not available: %s\n",customer[i].cust_name);
  count++;
  }
}
void display_account_type()
{
  int i;
  printf("\nCustomers having Saving account:\n");
  for(i=0;i<Maximum;i++)
  {
    if(strcmp(customer[i].account_type,"Saving")==0) 
    printf("\nAccount holder's name: %s\n", customer[i].cust_name);

  }
  printf("\nCustomers with Recurring account:\n");
  for(i=0;i<Maximum;i++)
  {
    if(strcmp(customer[i].account_type,"Recurring")==0) 
    printf("\nAccount holder's name: %s\n", customer[i].cust_name);
    
  }
  printf("\nCustomers with Deposit account:\n");
  for(i=0;i<Maximum;i++)
  {
    if(strcmp(customer[i].account_type,"Deposit")==0)  
    printf("\nName of the account holder::%s\n", customer[i].cust_name);
  
  }

}
*/