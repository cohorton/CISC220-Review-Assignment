//
// Created by Chase Horton on 2/15/24.
//
#include <iostream>

using namespace std;

void swap(int* x, int* y) {
    /* takes in pointers to two integers and then flips the values
    of the integers. */
    int temp_ptr = *x;
    *x = *y;
    *y = temp_ptr;
}

string duplicateString(string str, int x) {
    /* takes in a string and an integer and then prints the string repeated
     * depending on the size of the int, e.g. "cat", x = 5 would return
     "catcatcat". */
    string repeated;

    if (x == 0 || x < 0) {
        return "";
    }
    for (int i = 0; i < x; ++i) {
        repeated += str;
    }

    return repeated;
}


string reverseSentence(string str) {
    string reversed;
    int x = 0;

    while(true) {
        int y = str.find(' ', x);
        if (y == -1) {
            reversed = str.substr(x) + reversed;
            break;
        } else {
            reversed = str.substr(x, y - x) + reversed;
            reversed = ' ' + reversed;
            x = y + 1;
        }
    }

    reversed += '\n';
    return reversed;


    }



string everyNchar(string str, int x) {
    string new_str;
    if (x == 0) {
        string temp = "";
        temp += str[0];
        return temp;
    }
    int length = str.length();
    for (int i = 0; i < length; i+=x) {
        new_str += str[i];
    }
    return new_str;
}

string reverseNchar(string str, int x) {
    string new_str;
    if (x == 0) {
        string temp = "";
        temp += str.back();
        return temp;
    }
    int length = str.length();
    for (int i = length - 1; i >= 0; i -= x) {
        new_str += str[i];
    }

    return new_str;

}


string divisibleString(string str, int x, int y) {
    string new_str;
    int length = str.length();
    for (int i = 0; i < length; ++i) {
        if (i % x == 0 || i % y == 0) {
            new_str += str[i];
        }
    }
    return new_str;
}

string partialRotate(char arr[], int len, int rot) {
    string new_str;
    for (int i = 0; i < rot; ++i) {
        char temp = arr[0];
        for (int j = 0; j < len-1; ++j) {
            arr[j] = arr[j+1];

        }
        arr[len-1] = temp;
    }
    for (int i = 0; i < len; i += 3) {
        new_str += arr[i];

    }
    return new_str;
}

string sumWindow(string str, int arr[] , int size, int window) {
    string new_str;
    int added = 0;

    for (int i = 0; i <= size - window; ++i) {
        added = 0;
        for (int j = i; j < i + window; ++j) {
            added += arr[j];

        }
        new_str += str[added];
    }
    return new_str;


}

string diagonalString(string str) {



}

string reverseDiagonalString(string) {

}

string transposeString(string) {

}

int gcf(int, int) {

}

string gcfDecode(string, int[], int[], int) {

}

