#include <iostream> 
#include <string>
#include <fstream>
#include <sstream>
#include "ArgumentManager.h"
#include <vector>


using namespace std;

//create function to check for duplicate 

struct Books {
    string genre;
    string title;
    string author;
    string year;

};



int main (int argc, char* argv[]) {


    ArgumentManager  am (argc, argv);

    string input = am.get("input");
    string output = am.get("output");
    string command = am.get("command");

    ifstream in("input12.txt");                     // input file stream - reading from file 
    ifstream com("command12.txt");                  // reading from the command txt file 
    ofstream out("answer.txt");                            //output file stream
    
    

    const int MAX_BOOKS = 10000;                    // create dynamic array and sort 
    
    int count = 0; 
    string temp;

    //const  char* myArray;
    //myArray = new char[MAX_BOOKS];
    //string *data = new string [MAX_BOOKS];
    Books* p_studentData = new Books[MAX_BOOKS];
    in.open(input);

    if(!in.is_open()) {
      //  cout<<"Could not read " <<endl; 
        return -1;
    }
        
       while (!in.eof()) {
           string genre ="", genretitle = "", title = "" , titletile = "" , author ="", authortitle ="" , year = "" , yeartitle ="";
           getline(in,genre,':');
           getline(in, genretitle,',');
           getline(in,title,':');
           getline(in,titletile,',');
           getline(in, author, ':');
           getline(in,authortitle,',');
           getline(in,year,':');
           getline(in,yeartitle,'}');
           
        
        
         
         
         for(int i =0;i <MAX_BOOKS;i++) {
             cout << p_studentData[MAX_BOOKS].genre <<p_studentData[MAX_BOOKS].author<<p_studentData[MAX_BOOKS].title<<p_studentData[MAX_BOOKS].year<<endl;
         }
        
    
       }
        delete[] p_studentData;
        






    return 0; 
} 

