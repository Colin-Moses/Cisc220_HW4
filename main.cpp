//
// Created by Colin Moses on 2/17/2024.
//

#include <iostream>
#include "functions.hpp"

using namespace std;

int main() {
    //cout << "Hello, World!" << endl;
    /* 1
    int num1 = 1;
    int num2 = 2;
    int* p1 = &num1;
    int* p2 = &num2;
    swap(p1,p2);
    cout<<num2<<endl;
    */
    /* 2
    string duped_word = duplicateString("hello",3);
    cout<<duped_word<<endl;
    */
    /* 3
    string old_phrase = "The dog looked up.";
    string new_phrase = reverseSentence(old_phrase);
    cout<<new_phrase<<endl;
    */
    /* 4
    cout<<everyNchar("abcdefghijkl",3)<<endl;
    cout<<everyNchar("abcdefg",2)<<endl;
    */
    /* 5
    cout<<reverseNchar("abcdefghijkl",3)<<endl;
    cout<<reverseNchar("abcdefghijk",3)<<endl;
    cout<<reverseNchar("abcdefg",2)<<endl;
    */
    /* 6
    cout<<divisibleString("abcdefghijkl",3,5)<<endl;
    */
    /* 7
    char letters[] = "abcdefghi";
    cout<<partialRotate(letters,9,4)<<endl;
    */
    /* 8
    int nums[]={1,0,2,3,-4};
    cout<<sumWindow("sgwdeo",nums,5,3)<<endl;
    */
    /* 9
    cout<<diagonalString("cdebaghit")<<endl;
    */
    /* 10
    cout<<reverseDiagonalString("cbavrtmov")<<endl;
    cout<<reverseDiagonalString("o")<<endl;
    cout<<reverseDiagonalString("abcd")<<endl;
    */
    /* 11
    cout<<transposeString("abcdefghi")<<endl;
    */
    // 12
    cout<<gcf(45,27)<<endl;
    cout<<gcf(22,13)<<endl;
    //
    // 13
    int nums1[]={14,15,14,85,10};
    int nums2[]={25, 9, 35, 15, 12};
    cout<<gcfDecode("ziemkgrav",nums1,nums2,5)<<endl;
    //
    return 0;
}
