#include <iostream>
using namespace std;

int main() {
	/* Subtraction - Get Distance
	int arr[6] = { 0,1,2,3,4,5 };
	int *ptr6 = &(arr[6]);
	int *ptr1 = &(arr[1]);
	cout << ptr6 - ptr1 << endl;
	*/
	
	/* Different methods
	char n[25] = "Pointers are funny!";
	char *name;
	name = n;

	cout << "n : " << n << endl;
	cout << "*n : " << *n << endl << endl;

	cout << "name : " << name << endl;
	cout << "*name : " <<  *name << endl << endl;

	cout << "++name : " << ++name << endl;
	cout << "n + 1 : " << n+1 << endl << endl;

	cout << "n: " << n << endl;
	cout << "name: " << name << endl << endl;

	cout << "++(*n) : " << ++(*n) << endl;
	cout << "++(*name) : " << ++(*name) << endl << endl;

	cout << "n: " << n << endl;
	cout << "name: " << name << endl << endl;

	cout << "(*n)++ : " << (*n)++ << endl;
	cout << "(*name)++ : " << (*name)++ << endl << endl;

	cout << "n : " << n << endl;
	cout << "name : " << name << endl << endl;
	*/

	int a = 20;
	int *ip = &a;
	int **ipp = &ip;
	int ***ippp = &ipp;




	cout << a << endl;
	cout << ip << " " <<  *ip << endl;
	cout << ipp << " " << *ipp << " " << **ipp << endl;
	cout << ippp << " " << *ippp << " " << **ippp << " " << ***ippp << endl;
	return 0;

}