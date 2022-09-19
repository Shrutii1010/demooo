// Array declaration by specifying size
// int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user specified size
// int n = 10;
// int arr2[n];
// int arr[] = { 10, 20, 30, 40 }
//  int arr[6] = { 10, 20, 30, 40 }

// #include <stdio.h>

// int main()
// {
// 	int arr[5];
// 	arr[0] = 5;
// 	arr[2] = -10;
// 	arr[3 / 2] = 2; // this is same as arr[1] = 2
// 	arr[3] = arr[0];

// 	printf("%d %d %d %d", arr[0],
// 		arr[1], arr[2], arr[3]);

// 	return 0;
// }
// output== 5 2 -10 5

// C program to demonstrate that
// array elements are stored
// contiguous locations

// #include <stdio.h>
// int main()
// {
// 	// an array of 10 integers.
// 	// If arr[0] is stored at
// 	// address x, then arr[1] is
// 	// stored at x + sizeof(int)
// 	// arr[2] is stored at x +
// 	// sizeof(int) + sizeof(int)
// 	// and so on.
// 	int arr[5], i;

// 	printf("Size of integer in this compiler is %lu\n",
// 		sizeof(int));

// 	for (i = 0; i < 5; i++)
// 		// The use of '&' before a variable name, yields
// 		// address of variable.
// 		printf("Address arr[%d] is %p\n", i, &arr[i]);

// 	return 0;
// }

// // in cpp
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[6]={11,12,13,14,15,16};
// 	// Way -1
// 	for(int i=0;i<6;i++)
// 		cout<<arr[i]<<" ";

// cout<<endl;
// 	// Way 2
// 	cout<<"By Other Method:"<<endl;
// 	for(int i=0;i<6;i++)
// 		cout<<i[arr]<<" ";

// 	cout<<endl;

// 	return 0;
// }

// // Contributed by Akshay Pawar ( Username - akshaypawar4)
