#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <random>
#include<string.h>
#include<stdio.h>
#include <cstring>
#include <chrono>
#include <thread>
#include<time.h>
#include<ctime>
#include<stdio.h>
#include <vector>
#include <array>
#include <random>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
#define TRIANGLE "You choose triangle !!";
#define LENGTH "LENGTH : ";
#define HEIGHT "HEIGHT : ";
#define WIDTH "WIDTH : ";
#define SQUARE "You choose square !!";
#define STARTUP "CHOOSE FROM TRI, SQU OR REC";
#define RECTANGLE "You chose rectangle !!";
#define AREA "The Area is :"
void main_code(void);
class Rectangle{
 public:
   void setLength(int l){
     length = l;
   }
   void setWidth(int w){
     width = w;
 
 
   }
 protected:
   int width;
   int length;
   
};
 
class Square{
 public:
   void setLength(int l){
     length = l;
   }
   void setWidth(int w){
     width = w;
 
   }
 protected:
   int width;
   int length;
 
  
};
 
 
class Triangle{
 public:
   void setLength(int w){
     length = w;
   }
   void setHeight(int h){
     height = h;
   }
 
  protected:
   int height;
   int length;
 
 };
 
void sleep(float seconds){
   clock_t startClock = clock();
   float secondsAhead = seconds * CLOCKS_PER_SEC;
   // do nothing until the elapsed time has passed.
   while(clock() < startClock+secondsAhead);
   return;
}
class Box{
 public:
   int length;
   int width;
   int height;
 
 };
void desktop_design(void);
#define ADMIN "You are set to admin";
#define STANDARD "You are set to standard";
void admin_standard(string);
class notepad{
};
class Admin{
 string question;
public:
 void setFiles(string q) { question = q; }
 string get_string() const { return question; }
};
class Standard{
public:
 string q;
 void setFiles(string question) { question = q; }
 
};
int main(){
 
 Admin ad;
 Standard sd;
 desktop_design();
 string name;
 string login;
 string password;
 string retype;
 cout << "" << endl;
 cout << "Enter your name : " ;
 cin >> name;
 cout << "Enter a login :";
 cin >> login;
 cout << "Enter a password : ";
 cin >> password;
 cout << "Enter the password again : ";
 cin >> retype;
 while(password != retype){
   cout << "Password is incorrect" << endl;
   cout << "Enter the password again : ";
   cin >> retype;
 
 
 }
 admin_standard(login);
 string calc;
 
  cout << "Do you want to open calculator : " << endl;
 cin >> calc;
 if(calc == "Y"){
   string asksss;
   cout << "Do you want to open the Volume Calc? ";
   cin >> asksss;
   if(asksss == "Y"){
     string Wid1 =  "Enter a value for width : ";
 string Len1 = "Enter a value for the length : ";
 string Hei1 = "Enter a value for the height : ";
  Box Box1;
 Box Box2;
 Box Box3;
 int volume1;
 int volume2;
 
  cout <<  Len1 << endl;
 cin >> Box1.length;
 cout << Hei1 << endl;
 cin >> Box1.height;
 cout << Wid1 << endl;
 cin >> Box1.width;
 
 volume1 = Box1.length * Box1.width * Box1.height;
 
 string NewBox = "New Box values.. \n";
  cout << NewBox << endl;
 cout <<  Len1 << endl;
 cin >> Box2.length;
 cout << Hei1 << endl;
 cin >> Box2.height;
 cout << Wid1 << endl;
 cin >> Box2.width;
 
 volume2 = Box2.length * Box2.width * Box2.height;
 
 
 if (volume1 > volume2){
   string More1 = "You have more space in the 1st box \n";
   cout << More1 << endl;
 }
 if (volume2 > volume1){
   string More2 = "You have more space in the second box \n";
   cout << More2 << endl;
 }
 if (volume1 == volume2){
   string Same = "You have the same amount of space in both boxes \n";
   cout << Same << endl;
 }
   }
   string newask;
   cout << "Do you want to open Area calc ? ";
   cin >> newask;
   if(newask == "Y"){
      string tri = "tri";
   string Rect = "rec";
   Rectangle rect;
   int ar;
   string user_input;
   int triangle;
   Triangle Tria;
   Square Squ;
   string squ = "squ";
   int L, l;
   int W, w;
   int triHi;
   int Ar;
   int shape;
 
   cout << STARTUP;
   cin >> user_input;
   if(user_input == tri){
     cout << TRIANGLE;
     cout << LENGTH;
     cin >> triangle;
     cout << HEIGHT;
     cin >> triHi;
     Tria.setLength(triangle);
     Tria.setHeight(triHi);
     Ar = (triangle * triHi) / 2;
    
     cout << AREA << Ar << endl;
   }
   if(user_input == squ){
     cout << SQUARE;
     cout << LENGTH;
     cin >> L;
     cout << WIDTH;
     cin >> W;
     Squ.setWidth(W);
     Squ.setLength(L);
     ar = (W * L);
     cout << ar;
   }
   if(user_input == Rect){
     cout << RECTANGLE;
     cout << LENGTH;
     cin >> l;
     cout << WIDTH;
     cin >> w;
     rect.setWidth(w);
     rect.setLength(l);
     ar = (w*l);
     cout << ar;
  
 
 
 }
 
   }
 
   char operand;
   int x;
   int y;
   cout << "Enter a number : " << endl;
   cin >> x;
   cout << "Enter a number : " << endl;
   cin >> y;
   cout << "Choose an operator : " << endl;
   cin >> operand;
   switch(operand){
   case '+':
     cout << (x + y);
   case '-':
     cout << (x-y);
   case '*':
     cout << (x*y);
   case '/':
     cout << (x/y);
    }
 }
    
    
 
  
 
  string guess_game;
 cout << "Do you want to guess a number(out of 100) ? ";
 cin >> guess_game;
 if(guess_game == "Y"){
 int guess;
 srand( (unsigned)time( NULL ) );
 guess = rand() % 100;
 cout << "Enter your guess : ";
 int user_guess;
 cin >> user_guess;
 if(user_guess == guess){
   cout << "You have guessed it ";
 }
 else if(user_guess != guess){
   cout << "Sorry, try it again sometime !!";
 }
 }
 
 vector<char> x;
 string hangman = "hangman";
 char user_hang[] = "";
 string user_q;
 string q;
 cout << "Do you want to play hangman ? ";
 cin >> q;
 if(q == "Y"){
   cout << "under dev";
   cout << "Black Whole is the center of the solar system ?";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "t";
     x.push_back('d');
    
   }
   cout << "Is the sun yellow ? :";
   cin >> user_q;
   if(user_q == "F"){
   char user_hang[] = "tg";
   int hang_length = strlen(user_hang);
   x.push_back('g');
 
 
   }
   cout << " The first tea bags were made of silk ";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdg";
     int hang_length = strlen(user_hang);
     x.push_back('g');
   }
   cout << "The best type of water for tea is twice-boiled water.";
   cin >> user_q;
   if(user_q == "F"){
     char user_hang[] = "tdgg";
     int hang_length = strlen(user_hang);
     x.push_back('g');
  
   }
   cout << "Chai tea comes from Russia.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[]= "tdhsh";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "Horses, ponies, donkeys, mules, and zebras are also known as equines.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdhsao";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "The first domesticated animal was the horse.";
   cin >> user_q;
   if(user_q == "F"){
     char user_hang[] = "tdhsaof";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "Coffee became a popular drink in North America when the Boston Tea Party made tea hard to come by.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdhsaofs";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
 
    cout << "Caluclating results..." << endl;
   sleep(2.0);
   int hang_length = x.size();
   if(hang_length >= 6){
     cout << "Congrats, You have Won !!";
   }
   else if(hang_length <= 5){
     cout << "Sorry, try again next time !!";
   }
 
  }
 cout <<"You can log back in by typing: in " << endl;
 string system;
 string log_off;
 string sleep;
 char question;
 cout << "Do you want to open settings ? ";
 cin >> question;
 if(question == 'Y'){
   while (true){
     cout << "Do you want to change system settings ? ";
     cin >> system;
     if(system == "Y"){
       cout << "Under Dev";
       break;
     }
    
     else{
       cout << "Do you want to log_off: ";
       cin >> log_off;
       if(log_off == "Y"){
         cin >> log_off;
         if(log_off == "in"){
          
           string oo;
           string yy;
           cout << "login";
           cin >> oo;
           if(oo == login){
           cout << "passowrd";
           cin >> yy;
           if(yy == password){
             cout << "You are logged in";
             while(true){
          
 string calc;
 
  cout << "Do you want to open calculator : " << endl;
 cin >> calc;
 if(calc == "Y"){
   string asksss;
   cout << "Do you want to open the Volume Calc? ";
   cin >> asksss;
   if(asksss == "Y"){
     string Wid1 =  "Enter a value for width : ";
 string Len1 = "Enter a value for the length : ";
 string Hei1 = "Enter a value for the height : ";
  Box Box1;
 Box Box2;
 Box Box3;
 int volume1;
 int volume2;
 
  cout <<  Len1 << endl;
 cin >> Box1.length;
 cout << Hei1 << endl;
 cin >> Box1.height;
 cout << Wid1 << endl;
 cin >> Box1.width;
 
 volume1 = Box1.length * Box1.width * Box1.height;
 
 string NewBox = "New Box values.. \n";
  cout << NewBox << endl;
 cout <<  Len1 << endl;
 cin >> Box2.length;
 cout << Hei1 << endl;
 cin >> Box2.height;
 cout << Wid1 << endl;
 cin >> Box2.width;
 
 volume2 = Box2.length * Box2.width * Box2.height;
 
 
 if (volume1 > volume2){
   string More1 = "You have more space in the 1st box \n";
   cout << More1 << endl;
 }
 if (volume2 > volume1){
   string More2 = "You have more space in the second box \n";
   cout << More2 << endl;
 }
 if (volume1 == volume2){
   string Same = "You have the same amount of space in both boxes \n";
   cout << Same << endl;
 }
   }
   string newask;
   cout << "Do you want to open Area calc ? ";
   cin >> newask;
   if(newask == "Y"){
      string tri = "tri";
   string Rect = "rec";
   Rectangle rect;
   int ar;
   string user_input;
   int triangle;
   Triangle Tria;
   Square Squ;
   string squ = "squ";
   int L, l;
   int W, w;
   int triHi;
   int Ar;
   int shape;
 
   cout << STARTUP;
   cin >> user_input;
   if(user_input == tri){
     cout << TRIANGLE;
     cout << LENGTH;
     cin >> triangle;
     cout << HEIGHT;
     cin >> triHi;
     Tria.setLength(triangle);
     Tria.setHeight(triHi);
     Ar = (triangle * triHi) / 2;
    
     cout << AREA << Ar << endl;
   }
   if(user_input == squ){
     cout << SQUARE;
     cout << LENGTH;
     cin >> L;
     cout << WIDTH;
     cin >> W;
     Squ.setWidth(W);
     Squ.setLength(L);
     ar = (W * L);
     cout << ar;
   }
   if(user_input == Rect){
     cout << RECTANGLE;
     cout << LENGTH;
     cin >> l;
     cout << WIDTH;
     cin >> w;
     rect.setWidth(w);
     rect.setLength(l);
     ar = (w*l);
     cout << ar;
  
 
 
 }
 
   }
 
   char operand;
   int x;
   int y;
   cout << "Enter a number : " << endl;
   cin >> x;
   cout << "Enter a number : " << endl;
   cin >> y;
   cout << "Choose an operator : " << endl;
   cin >> operand;
   switch(operand){
   case '+':
     cout << (x + y);
   case '-':
     cout << (x-y);
   case '*':
     cout << (x*y);
   case '/':
     cout << (x/y);
    }
 }
    
    
 
  
 
  string guess_game;
 cout << "Do you want to guess a number(out of 100) ? ";
 cin >> guess_game;
 if(guess_game == "Y"){
 int guess;
 srand( (unsigned)time( NULL ) );
 guess = rand() % 100;
 cout << "Enter your guess : ";
 int user_guess;
 cin >> user_guess;
 if(user_guess == guess){
   cout << "You have guessed it ";
 }
 else if(user_guess != guess){
   cout << "Sorry, try it again sometime !!";
 }
 }
 
 vector<char> x;
 string hangman = "hangman";
 char user_hang[] = "";
 string user_q;
 string q;
 cout << "Do you want to play hangman ? ";
 cin >> q;
 if(q == "Y"){
   cout << "under dev";
   cout << "Black Whole is the center of the solar system ?";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "t";
     x.push_back('d');
    
   }
   cout << "Is the sun yellow ? :";
   cin >> user_q;
   if(user_q == "F"){
   char user_hang[] = "tg";
   int hang_length = strlen(user_hang);
   x.push_back('g');
 
 
   }
   cout << " The first tea bags were made of silk ";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdg";
     int hang_length = strlen(user_hang);
     x.push_back('g');
   }
   cout << "The best type of water for tea is twice-boiled water.";
   cin >> user_q;
   if(user_q == "F"){
     char user_hang[] = "tdgg";
     int hang_length = strlen(user_hang);
     x.push_back('g');
  
   }
   cout << "Chai tea comes from Russia.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[]= "tdhsh";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "Horses, ponies, donkeys, mules, and zebras are also known as equines.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdhsao";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "The first domesticated animal was the horse.";
   cin >> user_q;
   if(user_q == "F"){
     char user_hang[] = "tdhsaof";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
   cout << "Coffee became a popular drink in North America when the Boston Tea Party made tea hard to come by.";
   cin >> user_q;
   if(user_q == "T"){
     char user_hang[] = "tdhsaofs";
     int hang_length = strlen(user_hang);
     x.push_back('g');
 
   }
 
    cout << "Caluclating results..." << endl;
   int hang_length = x.size();
   if(hang_length >= 6){
     cout << "Congrats, You have Won !!";
   }
   else if(hang_length <= 5){
     cout << "Sorry, try again next time !!";
   }
 
  }
 cout <<"You can log back in by typing: in " << endl;
 string system;
 string log_off;
 string sleep;
 char question;
 cout << "Do you want to open settings ? ";
 cin >> question;
 if(question == 'Y'){
   while (true){
     cout << "Do you want to change system settings ? ";
     cin >> system;
     if(system == "Y"){
       cout << "Under Dev";
       break;
     }
    
    
       cout << "Do you want to log_off: ";
       cin >> log_off;
       if(log_off == "Y"){
         cin >> log_off;
         if(log_off == "in"){
           string oo;
           string yy;
           cout << "login";
           cin >> oo;
           if(oo == login){
           cout << "passowrd";
           cin >> yy;
           if(yy == password){
             cout << "You are logged in";
             break;
             // Do something, so that everything repeat's again (making a function is a good idea !! and call it when only in settings class )
           }
           }
 
    
         }
         else{
           cout << "Invalid command";
           break;
         }
       }
       else{
         cout << "Do you want to sleep: ";
         cin >> sleep;
         if(sleep == "Y"){
           break;
         }
         else{
           cout << "Invalid command";
           break;
         }
       }
      
    
   }
 }
 
             }
            
            
            
             // Do something, so that everything repeat's again (making a function is a good idea !! and call it when only in settings class )
           }
           }
 
    
         }
         else{
           cout << "Invalid command";
           break;
         }
       }
       else{
         cout << "Do you want to sleep: ";
         cin >> sleep;
         if(sleep == "Y"){
           break;
         }
         else{
           cout << "Invalid command";
           break;
         }
       }
      
     }
   }
 }
 
  
 }
      
      
    
 
    
 
  
 
 
 
 
 
 
 
  
 
void desktop_design(void){
 for(int i = 0; i < 10; i++){
   cout << "x";
 }
 for(int i = 0; i < 4; i++){
   cout << "x" << endl;
 }
 for(int i = 0; i < 11; i++){
   cout << "x";
 }
 
 
 }
 
void admin_standard(string login){
 Admin ad;
 Standard sd;
 string q;
 int a;
 char Check_Admin = true;
 char Check_Standard = true;
 cout << "Do you want to become a admin (Y/N): ";
 cin >> q;
 
 
 
 if(q == "Y"){
   cout << "How old are you : ";
   cin >> a;
   if(a > 13){
     cout << ADMIN;
     ad.setFiles(login);
    
   }
 }
 else if(q == "N"){
     cout << STANDARD;
     sd.setFiles(login);
    
  
   }
 
 }
 
 
 

