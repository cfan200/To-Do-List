#include <fstream>
#include <iostream>
#include <string>
void readl(){
        std::fstream fs; 
        fs.open("log.txt", std::fstream::in);
        if (!fs.is_open()) {
            std::cout<<"Fail unreachable error code :02";
	    }
        char file_output;
        while (fs.get(file_output)){
            std::cout<<file_output;
        }
        char wait_for_input;
        std::cout<<std::endl<<"press any key to go back ";
        std::cin>>wait_for_input;
        fs.close();
}


void writel(){
    std::fstream fs;
    std::string input_file_writing;
	std::cout<<'\n'<<":";
          		
  	std::getline(std::cin, input_file_writing);
	fs.open("log.txt", std::fstream::out); // idk why it's reversed in the docmention but imma roll with it....
	if(!fs.is_open()){
	 	std::cout<<"File unreachable error code :02";
	}
  	fs<<input_file_writing;
        fs.close();
}
