#include<iostream>
#include"arr_class.h"
using namespace std;

int main()
{
	Array arr(3);
	arr.Add_arr_random();
	arr.Show_arr();
	
	-arr;
	Array arr2=arr;
	cout << endl;
	cout << (long)arr;
	arr2.Show_arr();


	system("pause");
	return 0;
}