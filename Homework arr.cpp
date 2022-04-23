#include "UFunction.h"

int main() {
	int n = 20;
	int* arr = create(n);
	void(* uk)(int*, int);
	out(arr, n);
	
	summa(arr, n)(arr,n);
	out(arr, n);
}