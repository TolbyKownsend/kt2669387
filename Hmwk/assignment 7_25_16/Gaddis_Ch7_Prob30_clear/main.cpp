/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <vector>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    vector <int> values(100);
    
    cout<<"the values vector has   "
        << values.size() << "   elements.\n";
    cout<< "i will  call the clear member function ...\n";
    values.clear();
    cout<<"now, the vaues vector has   "
        << values.size()<<"   elements.\n";
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}