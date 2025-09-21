//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    float n1,n2,ans;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
   
    try{
        if(n2==0){
            throw n2;
        }
        else {
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch (float num){
        cout<<"ERROR: Division by "<<num<<endl;
    }
}
/* output
Enter number 1: 5
Enter number 2: 0

ERROR: Division by 0


Enter number 1: 10
Enter number 2: 5
Answer = 2
*/
