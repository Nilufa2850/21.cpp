/*2. Write a C++ program to read and display content of a file.*/

#include<iostream>
#include<fstream>
using namespace std ;

void Filehandling(char text[])
{
    ofstream nout ;
    nout.open("f1.txt" , ios::out) ;
    nout<<text ;
    nout.close() ;
}

void ReadFromFile ()
{
    char ch ;

    ifstream fin ;                  //1.Object Create
    fin.open("f1.txt" , ios::in) ;      //2.Open a File
    
    if (! fin)                      //3.Read a file
        cout<<"File not found" ;
    else
    {
        ch = fin.get() ;
        while(! fin.eof())
        {
            cout<<ch ;
            ch = fin.get() ;
        }

        fin.close() ;               //4. Close File
    }
}

int main ()
{
    char data[] = "Nilufa Yasmin is my name ok" ;
    //Filehandling(data) ;

    ReadFromFile() ;
    return 0 ;
}
