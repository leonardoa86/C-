#include <iostream>

using namespace std;

void swap(int *n1, int *n2);
void bubblesort(int arr[], int size);
int main() {

  int arr[] = {10,15,2,5,4,7};
  int n = sizeof(arr)/sizeof(arr[0]); //size of the array
  bubblesort(arr,n);

//Display array
  cout << "Sorting Array" <<endl;
  for(int i = 0; i < n ; i++){
    cout << "\narray[ " << i << " ] = " << arr[ i ];
  }

  cout << endl;
  
  return 0;
}
void swap(int *n1, int *n2){
    int swap = *n1;
    *n1 = *n2;
    *n2 = swap;
}
void bubblesort(int arr[], int size){
bool t_f = true;
while(t_f){
  t_f = false;
  for(int i = 0; i < size-1 ; i++){
    if(arr[i] > arr[i+1]){ // use < to sort in descending order
      //swap numbers
      swap(&arr[i],&arr[i+1]);
      t_f = true;
      }
    }
  }
}
