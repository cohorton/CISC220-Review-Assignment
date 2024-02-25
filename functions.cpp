//
// Created by Chase Horton on 2/15/24.
//
#include <iostream>
#include <cmath>
using namespace std;

void swap(int* x, int* y) {
    /* takes in pointers to two integers and then flips the values
    of the integers. */
    int temp_ptr = *x;
    *x = *y;
    *y = temp_ptr;
}

string duplicateString(string input, int amt) {
    /* takes in a string (input) and an integer amount (amt) and then prints the string repeated
     * depending on whatever amount is set to, e.g. "cat", x = 5 would return "catcatcat".
     */
    string repeated;

    if (amt == 0 || amt < 0) {
        return "";
    }
    for (int i = 0; i < amt; ++i) {
        repeated += input;
    }

    return repeated;
}

string reverseSentence(string sentence) {
    //Given a sentence, puts the words in reverse order, function finds the spaces
    //in-between the words and then reverses their order.
    string reversed;
    int x = 0;

    while(true) {
        int y = sentence.find(' ', x);
        if (y == -1) {
            reversed = sentence.substr(x) + reversed;
            break;
        } else {
            reversed = sentence.substr(x, y - x) + reversed;
            reversed = ' ' + reversed;
            x = y + 1;
        }
    }

    reversed += '\n';
    return reversed;
    }

string everyNchar(string input, int nchar) {
    //Given an input string and an integer nchar, takes in the string and produces a new string
    //using every nth character from the input string.
    string nth_char;
    if (nchar == 0) {
        string temp = "";
        temp += input[0];
        return temp;
    }
    int length = input.length();
    for (int i = 0; i < length; i+=nchar) {
        nth_char += input[i];
    }
    return nth_char;
}

string reverseNchar(string str, int x) {
    //Given an input string and an integer nchar, takes in the string and produces a new string
    //using every nth character from the input string, starting from the last character of the string.
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


string divisibleString(string input, int div1, int div2) {
    string divised_str;
    int length = input.length();
    for (int i = 0; i < length; ++i) {
        if (i % div1 == 0 || i % div2 == 0) {
            divised_str += input[i];
        }
    }
    return divised_str;
}

string partialRotate(char arr[], int len, int rotate) {
    string new_str;
    for (int i = 0; i < rotate; ++i) {
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

string diagonalString(string input) {
    //takes in an input string and produces a matrix corresponding to the size of the string,
    //the characters of the string are then printed diagonally across the matrix.


    int length = input.length();
    int a_sqrt = sqrt(length);
    int len_sqrt = int(a_sqrt);

    char str_matrix[len_sqrt][len_sqrt];
    int y = 0;
    for (int i = 0; i < len_sqrt; ++i) {
        for (int j = 0; j < len_sqrt; ++j) {
            str_matrix[i][j] = input[y++];

        }
    }

    string diag_str = "";
    for (int i = 0; i < len_sqrt; ++i) {

        diag_str += str_matrix[i][i];

    }

    return diag_str;
}

string reverseDiagonalString(string) {
    //

}

string transposeString(string) {
    //

}

int gcf(int, int) {
    //

}

string gcfDecode(string, int[], int[], int) {
    //

}

