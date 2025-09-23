//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    float age;
    cout<<"Enter age: ";
    cin>>age;
   
    try{
        if(age<18){
            throw age;
        }
        else {
            cout<<"You are eligible to vote."<<endl;
        }
    }
    catch (float age){
        cout<<"ERROR: Persons below 18 are not allowe to vote "<<endl;
    }
}
/* output
Enter age: 18
You are eligible to vote.

Enter age: 15
ERROR: Persons below 18 are not allowe to vote
*/
