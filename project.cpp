#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
#define username "student"
#define password "student123"
#define username1 "teacher"
#define password1 "teacher123"
#define username2 "admin"
#define password2 "admin123"
#define username3 "accountant"
#define password3 "account123"
#define username4 "library"
#define password4 "library123"
#define username5 "office"
#define password5 "office123"

int main()
{
      int choice;
      while(1)
     {
      cout<<"                                 ---------welcome to the school management system----------------"<<endl<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     1.login as student:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     2.login as teacher:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     3.login as admin:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     4.login as coordinator:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     5.login as Accountant:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     6.collage Transport:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     7.collage library:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     8.Admission office:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     9.Email system:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl;
      cout<<"                                                     10.Exit:"<<endl;
      cout<<"                                          |---------------------------------------------|"<<endl<<endl<<endl;
      cout<<"- Enter your choice:"<<endl;
      cin>>choice;
      if(choice<10)
      {
      last:
     char user[50],pass[50];
     cout<<"              ----------------welcome to the login"<<endl;
     cout<<"              username:";
     cin>>user;
     cout<<"              password:";
     cin>>pass;
     if((strcmp(user,username)==0&&strcmp(pass,password)==0)||(strcmp(user,username1)==0&&strcmp(pass,password1)==0)||(strcmp(user,username2)==0&&strcmp(pass,password2)==0)||(strcmp(user,username3)==0&&strcmp(pass,password3)==0)||(strcmp(user,username4)==0&&strcmp(pass,password4)==0)||(strcmp(user,username5)==0&&strcmp(pass,password5)==0))
     {
           cout<<"      -login successfull!!!!"<<endl;
     }
     else{
           cout<<"      -error!!!.....please try again"<<endl;
           goto last;
     }
      }
      
 }
      switch(choice)
      {
      case 1:
           
           break;
      case 2:
            
            break;
      case 3:
            
            break;
      case 4:
            break;
      case 5:
            break;
      case 6:
            break;
      case 7:
            break;
      case 8:
            break;
      case 9:
             break;
      case 10:
             exit(0);
      default:
            cout<<"please enter the valid choice!!!!!"<<endl;


      }
     
   return 0;

}
 