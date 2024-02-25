//Chase Horton

#include <iostream>
#include "functions.hpp"
using namespace std;


int main() {

    /*tests for the swap function.

    cout << "Swap Test 1:" << endl;

    int x = 4, y = 5;
    cout << "Values of x and y: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "New Values of x and y: x = " << x << ", y = " << y << endl;
    // expected result : "New Values of x and y: x = 5, y = 4"

    cout << "Swap Test 2:" << endl;

    x = 6;
    y = -20;
    cout << "Values of x and y: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "New Values of x and y: x = " << x << ", y = " << y << endl;
    //expected result : "New Values of x and y: x = -20, y = 6"
    cout << "Swap Test 3:" << endl;

    x = 0;
    y = 3;
    cout << "Values of x and y: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "New Values of x and y: x = " << x << ", y = " << y << endl;
     //expected result : "New Values of x and y: x = 3, y = 0"
    */



    /*tests for the duplicateString function.

    cout << "Duplicate String Test 1:" << endl;

    string str1 = "dog";
    x = 4;
    string new_str1 = duplicateString(str1, x);

    cout << new_str1 << endl;
    // expected result : "dogdogdogdog"


    cout << "Duplicate String Test 2:" << endl;

    y = 7;
    string str2 = "bat";

    string new_str2 = duplicateString(str2, y);

    cout << new_str2 << endl;
    // expected result : "batbatbatbatbatbatbat"


    cout << "Duplicate String Test 3:" << endl;

    int z = -1;
    string str3 = "house";

    string new_str3 = duplicateString(str3, z);

    cout << new_str3 << endl;
    // expected result : ""


    cout << "Duplicate String Test 4:" << endl;

    int w = 0;
    string str4 = "mouse";

    string new_str4 = duplicateString(str4, w);

    cout << new_str4 << endl;
    // expected result : ""
    */



    /*tests for the reverseSentence function.

    cout << "Reverse Sentence Test 1:" << endl;

    string str1 = "Hello there.";
    string new_str1 = reverseSentence(str1);
    cout << new_str1 << endl;
    //expected : there. Hello

    cout << "Reverse Sentence Test 2:" << endl;

    string str3 = "The dog looked up.";
    string new_str3 = reverseSentence(str3);
    cout << new_str3 << endl;
    // expected : up. looked dog The
    */



    /*tests for the everyNChar function.

    cout << "Every Nth Character Test 1:" << endl;

    string str1 = "Hello there.";
    string new_str1 = everyNchar(str1, 2);
    cout << new_str1 << endl;
      // expected : Hlotee

    cout << "Every Nth Character Test 2:" << endl;

    string str2 = "Beach";
    string new_str2 = everyNchar(str2, 0);
    cout << new_str2 << endl;
      // expected : B

    cout << "Every Nth Character Test 3:" << endl;

    string str3 = "Merry-go-round";
    string new_str3 = everyNchar(str3, 3);
    cout << new_str3 << endl;
     // expected : Mrgrn
    */



    /*tests for reverseNChar function.

    cout << "Reverse Every Nth Character Test 1:" << endl;

    string str1 = "Hello there.";
    string new_str1 = reverseNchar(str1, 2);
    cout << new_str1 << endl;
     // expected : .rh le

    cout << "Reverse Every Nth Character Test 1:" << endl;

    string str2 = "Beach";
    string new_str2 = reverseNchar(str2, 0);
    cout << new_str2 << endl;
     // expected : h

    cout << "Reverse Every Nth Character Test 1:" << endl;

    string str3 = "Merry-go-round";
    string new_str3 = reverseNchar(str3, 3);
    cout << new_str3 << endl;
     // expected : dooye
     */



    /*tests for divisibleString function.

    cout << "Divisible String Test 1:" << endl;

    string str1 = "apbcdOe*fg";
    int x = 2, y = 3;
    string new_str1 = divisibleString(str1, x, y);
    cout << new_str1 << endl;
    // expected : "abcdefg"

    cout << "Divisible String Test 2:" << endl;

    string str2 = "apbcdOe*fg";
    int z = 2, w = 4;
    string new_str2 = divisibleString(str2, z, w);
    cout << new_str2 << endl;
    // expected : "abdef"

    cout << "Divisible String Test 3:" << endl;

    string str3 = "Trader Joe's";
    int u = 0, v = 4;
    string new_str3 = divisibleString(str3, u, v);
    cout << new_str3 << endl;
    // expected : Teo
    */



    /*tests for the partialRotate function.

    cout << "Partial Rotate Test 1:" << endl;

    char array1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    int x = sizeof(array1);
    int y = 4;
    string new_str1 = partialRotate(array1, x, y);
    cout << new_str1 << endl;
    //expected : "ehb"

    cout << "Partial Rotate Test 2:" << endl;

    char array2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    x = sizeof(array2);
    y = 3;
    string new_str2 = partialRotate(array2, x, y);
    cout << new_str2 << endl;
    //expected : "dga"

    cout << "Partial Rotate Test 3:" << endl;

    char array3[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    x = sizeof(array3);
    y = 0;
    string new_str3 = partialRotate(array3, x, y);
    cout << new_str3 << endl;
    //expected : "adg"
    */



    /*tests for sumWindow function.

    cout << "Sum Window Test 1:" << endl;
    string str1 = "sgwdeo";
    int arr1[] = {1, 0, 2, 3, -4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int window1 = 3;
    string new_str1 = sumWindow(str1, arr1, size1, window1);
    cout << new_str1 << endl;
    //expected : "dog"

    cout << "Sum Window Test 2:" << endl;
    string str2 = "seapsyFrisuaego";
    int arr2[] = {1, 5, 0, 2, 3, -4, 8};
    int size2 = sizeof(arr2) / sizeof(arr1[0]);
    int window2 = 3;
    string new_str2 = sumWindow(str2, arr2, size2, window2);
    cout << new_str2 << endl;
    //expected : "Fryer"

    */

    //tests for diagonalString function.

    cout << "Diagonal String Test 1:" << endl;
    string str1 = "cdebaghit";
    string new_str1 = diagonalString(str1);
    cout << new_str1 << endl;
    //expected : "c
    //              a
    //                t"

}
