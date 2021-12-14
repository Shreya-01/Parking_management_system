#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int menu();
void bike();
void sedan();
void suv();
void detail();
void del_data();
int num_b=0, num_sed=0, num_suv=0, amt=0, cnt=0;

int main()
{
    int op;
    do
  {

    switch(menu())
    {
      case 1:
         bike();
         break;
      case 2:
         sedan();
         break;
      case 3:
         suv();
         break;
      case 4:
         detail();
         break;
      case 5:
         del_data();
         break;
      case 6:
         exit(0);
         break;
      default:
         cout<<"Invalid choice entered"<<endl;
    }

  cout<<"For more vehicle details, please press 0 or else press any others for exit"<<endl;
  cout<<"Enter your choice: "<<endl;
  cin>>op;
  }while(op==0);
  cout<<"THANK YOU FOR VISITING"<<endl;

    getch();
}

void bike()
{
    num_b++;
    amt = amt+15;
    cnt++;
}

void sedan()
{
    num_sed++;
    amt = amt +45;
    cnt++;

}

void suv()
{
    num_suv++;
    amt = amt + 55;
    cnt++;

}

int menu()
{
   int ch;
   cout<<"------------------------------------"<<endl;
   cout<<"Press 1 for bike\nCharge is 15 INR"<<endl;
   cout<<"Press 2 for Sedan\nCharge is 45 INR"<<endl;
   cout<<"Press 3 for SUV\nCharge is 55 INR"<<endl;
   cout<<"Press 4 to view the entered record"<<endl;
   cout<<"Press 5 to delete the record"<<endl;
   cout<<"Press 6 for exit"<<endl;
   cout<<"------------------------------------"<<endl;
   cout<<"Press enter your choice=";
   cin>>ch;
   return ch;
}

void detail()
{
  cout<<"---------------------------------------------"<<endl;
  cout<<"Total number of Bikes in the parking ="<<num_b<<endl;
  cout<<"Total number of Sedans in the parking ="<<num_sed<<endl;
  cout<<"Total number of SUVs in the parking ="<<num_suv<<endl;
  cout<<"Total number of vehicles in the parking lot ="<<cnt<<endl;
  cout<<"Total parking charges applied ="<<amt<<endl;
  cout<<"---------------------------------------------"<<endl;
}

void del_data()
{
   num_b=0;
   num_sed=0;
   num_suv=0;
   amt=0;
   cnt=0;
}
