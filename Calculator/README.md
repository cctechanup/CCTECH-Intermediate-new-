******TEST STRATEGY*****

1.  When user enters any two numbers then first checking that given i/p is in range or not.

2.  Classified the function as per their work( such as Addition, Subtraction, Multiplication, Division).

3.  when addition goes outside the range then it will throw runtime error with custom message for unsigned integer otherwise it will do normal addition.

4.  Same will check with remaining function also

5.  For division, checking if divide by 0 or -1 INT_MIN then it will throw error with custom message or else division perform.



*****TEST CASE*****

##### Addition
1. number1 = 4294967295
   number2 = 4294967295
       o/p = Exception occurred

2. number1 = 653648
   number2 = 653684
    o/p    = Addition: 1307332

##### Subtraction
3.  number1 = -2147483649
    number2 = -2147483650
        o/p = Exception occurred

    number1 = 564151
    number2 = 55153
    o/p     = substraction : 508998  

##### Multipliation

4.  number1 = 4294967295          
    number2 = -2
        o/p = Exception occurred

5.  number1 = 5881
    number2 = 626
        o/p = Multiplication : 3681506


##### Division

6. number1 = 616
   number1 = 0
      o/p  = Exception occurred (Denominator may not be zero)

   number1 = 616
   number1 = -1
      o/p  = -616