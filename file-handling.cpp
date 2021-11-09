#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    char arr[100];
    cout<<"Enter your name,gender and age : ";
    cin.getline(arr,100);   //getline is used to get name age gender together 

    ofstream myfile ("file handling.txt", ios::app);   //ofstream automatically opens the file so we don't need to open it again // ios::app is used to append new content with old content


    myfile<<arr;
    myfile.close();  //we need to close the file after use
    cout<<"file write operation performed succesfully"<<endl<<endl;

    cout<< "READING FROM FILE OPERATION started "<<endl;
    char arr1[100];
    ifstream obj("file handling.txt");
    obj.getline(arr1,100);
    cout<<"array content : "<<arr1<<endl;
    cout<< "FILE OPERATION COMPLETED "<<endl;
    obj.close();



    return 0;
}
