#include<iostream>
using namespace std;

int arraySum(int[], int);

int main()
{
int sum = 0;

int myArray[] = { 1, 2, 3, 4, 5, 6, 7};


for(int i = 0; i < 7; i++)
cout << " " << myArray[i];

sum = arraySum(myArray, 7);

cout<<endl<<" The sum of the array elements is: "<<sum<<endl;

return 0;
}

int arraySum(int arr[], int count){
static int index=0;
static int sum=0;

sum += arr[index];

if(index==count-1){
return sum;
}
else{
index++;    
arraySum(arr, count);
}
   
}
