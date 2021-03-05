include <iostream>
using namespace std;

double avg(int arr[], int size){
   int sum = 0;
   for (int i=0; i<size; i++)
      sum += arr[i];
   return sum/size;
}
int main(){
   int arr[] = {2,3,1,6,8,10};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"average of an array using iterative method : "&l<t;avg(arr, size) << endl;
   return 0;
}
