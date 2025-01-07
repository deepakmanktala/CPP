#include <iostream>

using namespace std;




int main()
{
	int arrayarray[5] = {1,2,3,4,5};
	
	int array_b[] = {1,22,33,44,555};
	
	int arr_zero_initialized[100] = {11,22,33,44,55,5555,666};
	
	int bi_dimension_arr [5][10] = {{1,2,3,4,5,6,7,8,9,10}, {10,20,30,40,50, 60, 10,20,30,40}, {1,2,3,4,5,6,7,8,9,10}, {10,20,30,40,10,20,30,40,50,60},{1,2,3,4,5,6,7,8,9,10 }};

	
	for (unsigned x = 0 ; x < (sizeof(arrayarray)/sizeof(arrayarray[0])) ; x++)
	{
		{
			// count++ ;
			//cout << sizeof(arrayarray) << endl;
			cout << arrayarray[x] << endl;
		}
	}
	
	
	for (unsigned x = 0 ; x < (sizeof(array_b)/sizeof(array_b[0])) ; x++)
	{
		{
			// count++ ;
			//cout << sizeof(arrayarray) << endl;
			cout << array_b[x] << endl;
		}
	}
	
	
	for (unsigned x = 0 ; x < (sizeof(arr_zero_initialized)/sizeof(arr_zero_initialized[0])) ; x++)
	{
		{
			// count++ ;
			//cout << sizeof(arrayarray) << endl;
			cout << arr_zero_initialized[x] << endl;
		}
	}
	
	
	
	 // Print elements of bi_dimension_arr (correctly access 2D array)
    for (unsigned i = 0; i < 5; i++) // Loop over rows
    {
        for (unsigned j = 0; j < 10; j++) // Loop over columns
        {
            cout << "bi_dimension_arr[" << i << "][" << j << "] = " << bi_dimension_arr[i][j] << endl;
        }
    }
	
	
	
	
	int y = 0;
	for (unsigned x = 0 ; x < (sizeof(bi_dimension_arr)/sizeof(bi_dimension_arr[0][0])) ; x++)
	{
		{
			
			y = x;
			// count++ ;
			//cout << sizeof(arrayarray) << endl;
			cout <<  "I am the bi dimensional output of an array" << bi_dimension_arr[x][y] << endl;
		}
	}
	
	arr_zero_initialized [3] = 33333;
	array_b [3] = 33333;
	arrayarray [3] = 33333;
	
	cout << arr_zero_initialized[3] << "  "  << array_b[3] << "    "  << arrayarray[3] << "   " << endl;
	cout << arrayarray[1]	<< endl;
	// cout << x << endl;


}