/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;

int main(){
    int arr_len;
    cout<<"Enter length of array: ";
    cin>>arr_len;
    int arr[arr_len];
    int *arrptr=&arr[arr_len-1];
    cout<<"Enter array elements: "<<endl;
    for (int i=0; i<=arr_len-1; i++){
        cin>>arr[i];
    }
    cout<<"Entered Array: ";
    for (int i=0; i<=arr_len-1; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<"Reversed Array: ";
    for (int i=0; i<=arr_len-1; i++){
        cout<<*arrptr<<"\t";
        arrptr--;
    }
    
    return 0;
}

/*Output
Enter length of array: 8
Enter array elements: 
1
2
3
4
5
6
7
8
Entered Array: 1	2	3	4	5	6	7	8	
Reversed Array:8	7	6	5	4	3	2	1	
*/
