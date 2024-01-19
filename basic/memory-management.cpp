//  Memory Management 

#include <cstring> 
#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	int num = 5; 
	float* ptr; 

	// Memory allocation of 
	// num number of floats 
	ptr = new float[num]; 
    cout << "ptr is: " <<  ptr << endl;
    
	for (int i = 0; i < num; ++i) { 
		*(ptr + i) = i; 
	} 

	cout << "Display the GPA of students:" << endl; 
	for (int i = 0; i < num; ++i) { 

		cout << "Student" << i + 1 << ": " << *(ptr + i) 
			<< endl; 
	} 

	// Ptr memory is released 
	delete[] ptr; 

	return 0; 
}
