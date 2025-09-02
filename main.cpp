#include <fstream>
#include <string>
#include <iostream>
#include "linefunc.h"
#include <limits>
int main(){
  std::fstream fs;
  while (true){
//checks if it can be opened	  
   fs.open("log.txt",std::ios::in);
   if (fs.is_open()){
     fs.close();
   }else{
    std::cout<<"File unreachable error :01";
    break;
   }
   char first_input;

   for (int i = 0; i < 100; i++) {
        std::cout<<std::endl; //for making a clear without using system("clear")/ system("cls")
   }
   //the main part 
   std::cout<<"Hi And Welcome To The ..!!To Do List!!.."<<std::endl;
   std::cout<<"What do you wanna do"<< '\n' <<"[M]:Make a new list?  [S] Show current list? [Q]:Quit? "<<std::endl;
   std::cin >> first_input;
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

   if (first_input == 'm' || first_input == 'M'){ //MAKES THE LIST 
        writel(); 
   }
   if (first_input == 's'|| first_input == 'S'){//reading the List
        readl();
        }
	    

   if (first_input == 'q'||first_input == 'Q'){
      if(fs.is_open()){fs.close();}
      break;
   }   
  }
  return 1;
}
