*****TestCases*****

1. int arr[] = {-2, -1, 1, 9, 2, 3};
    assert(findClosestNumber(arr, sizeof(arr) / sizeof(int)) == 1);

 2.   int arr1[] = {};
    assert(findClosestNumber(arr1, sizeof(arr1) / sizeof(int)) == 0);
	print Empty

 3. int arr2[] = {9};
    assert(findClosestNumber(arr2, sizeof(arr2) / sizeof(int)) == 1);





flow:
1. In main, declaring one static array 
2. calling findClosestNumber() function having parameters array and length of array and compare with random value.
3. In findClosestNumber() declaring two int variables one assigned with 0 and another with first element of array
   then we compare with the currValue variable with the square of closestValue variable and assigning the index variable of array to the closestValue variable
4. After completing all iterations we returning the closest value.
 