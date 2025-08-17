/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;
int main(){
    int a=50;
    int b=100;
    int *aptr=&a;
    int *bptr=&b;
    // Pointer addition
    cout<<"Addition "<<*aptr+*bptr<<endl;
    
    //Difference
    cout<<"Difference "<<*aptr-*bptr<<endl;
    
    return 0;
}

/*Output
Addition 150
Difference -50
*/
