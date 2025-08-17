/*Divneev Singh
24070123043
ENTC A2
*/

#include<iostream>
using namespace std;
int main(){
    int a=50;
    float b=105.2;
    double c=30.33;
    bool d=true;
    int *aptr=&a;
    float *bptr=&b;
    double *cptr=&c;
    bool *dptr=&d;
    cout<<"pointer before increment \n \n"<<"int "<<aptr<<"\n"<<"float "<<bptr<<"\n"<<"double "<<cptr<<"\n"<<"bool "<<dptr<<"\n"<<endl;
    aptr++;
    bptr++;
    cptr++;
    dptr++;
    cout<<"pointer after increment \n \n"<<"int "<<aptr<<"\n"<<"float "<<bptr<<"\n"<<"double "<<cptr<<"\n"<<"bool "<<dptr<<endl;
    return 0;
}


/*Output
pointer before increment 
 
int 0x7ffe44d904cc
float 0x7ffe44d904c8
double 0x7ffe44d904c0
bool 0x7ffe44d904bf

pointer after increment 
 
int 0x7ffe44d904d0
float 0x7ffe44d904cc
double 0x7ffe44d904c8
bool 0x7ffe44d904c0
*/
