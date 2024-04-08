/*1.Write a C++ program to copy a content of file and store in other file. */
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std ;

void FileCopy (char file1[] , char file2[])
{
    char ch ;
    ofstream fout ;
    ifstream fin ;

    fin.open(file1 , ios::in) ;
    if (! fin)
        cout<<"File not found" ;

    else
    {
        fout.open(file2,ios::out) ;
        ch = fin.get() ;

        while(! fin.eof())
        {
            fout<<ch ;
            ch = fin.get() ;
        }
        fout.close() ;
    }
}
int main ()
{
    char file1[] = "3rd.cpp" ;
    char file2[] = "Abbu.cpp" ;

    FileCopy(file1,file2) ;
}
