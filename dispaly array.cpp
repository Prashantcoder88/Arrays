//displaying array

#include <iostream>

using namespace std;

int main()
{
    //declaring sales array 
    int sales[12];
    int i; //variable for access sales array index
    cout <<" enter the array values \n";
    
    for(i = 0; i < 12; i++)
    {
    //reading user input 
    cout<< "Enter value for position "<< i <<" :";
    cin>>sales[i];
    }
    
    cout<<"\n User input values \n";
    for(i=0; i<12; i++)
    {
        //Accessing sales value using for loop 
        cout << "Position : "<< i<<",sales value :" <<sales[i]<<endl;
    }
    return 0;
}