#include <iostream>


using namespace std;

int main() {
	int n ;
  cout<<"enter number of elements"<<endl;
  cin>>n;
  int numbers[n];
  
  for (int i = 0; i <n; i++) 
  {
  	cout<<"enter element at pos :"<<i+1<<endl;
  	cin>>numbers[i];}
  

  // Bubble sort the vector.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        swap(numbers[j], numbers[j + 1]);
      }
    }
  }

  // Print the sorted vector.
  for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
