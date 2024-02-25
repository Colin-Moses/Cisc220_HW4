//
// Created by Colin Moses on 2/17/2024.
//

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void swap(int* x, int* y){
    int temp = *y;
    *y=*x;
    *x=temp;
}

string duplicateString(string word, int num){
    if(num <= 0){
        return "";
    }
    string new_word = "";
    for(int i=0; i<num; i++){
        new_word+=word;
    }
    return new_word;
}

string reverseSentence(string phrase){
    string esarhp = "";
    while(phrase != ""){
        int i=0;
        while(phrase.find(" ",i)!=-1) { //get starting index of last word
            i++;
        }
        string last_word = phrase.substr(i);
        esarhp += last_word+" "; //add last word to new string
        if(i==0){ //check for final word
            return esarhp;
        }
        phrase.replace(i-1,last_word.length()+1,""); //remove last word from initial string
    }
    return esarhp;
}

string everyNchar(string word, int num){
    string new_word="";
    for(int i=0; i<word.length(); i++){
        if(i%num==0) {
            new_word += word[i];
        }
    }
    return new_word;
}

string reverseNchar(string phrase, int num){
    string rev_phrase="";
    for(int i=0; i<phrase.length(); i++){
        if(i%num==0) {
            rev_phrase += phrase[phrase.length() - i - 1];
        }
    }
    return rev_phrase;
}

string divisibleString(string phrase, int div1, int div2){
    string new_phrase = "";
    for(int i=0; i<phrase.length(); i++){
        if(i%div1==0 || i%div2==0){
            new_phrase+=phrase[i];
        }
    }
    return new_phrase;
}

string partialRotate(char lett[], int length, int shift){
    for (int i = 0; i < shift; ++i) {
        char lett_first = lett[0];
        for (int j = 0; j < length-1; ++j) {
            lett[j]=lett[j+1];
        }
        lett[length-1]=lett_first;
    }
    string split="";
    for (int i = 0; i < length; ++i) {
        if(i%3==0){
            split+=lett[i];
        }
    }
    return split;
}

string sumWindow(string word, int nums[], int numsSize, int windSize){
    int sums[numsSize-windSize];
    for(int i=0; i<numsSize-windSize+1;i++){
        sums[i]=0;
        for (int j = i; j < windSize+i; ++j) {
            sums[i]+=nums[j];
        }
    }
    string new_word="";
    for (int i = 0; i < numsSize-windSize+1; ++i) {
        new_word+=word[sums[i]];
    }
    return new_word;
}

string diagonalString(string word){
    string cheat_str = "";
    for(int i=0;i<word.length();i++){
        if(i%(int)(sqrt(word.length())+1)==0){
            cheat_str+=word[i];
        }
    }
    return cheat_str;
}

string reverseDiagonalString(string word){
    if(word.length()<=1){
        return word;
    }
    string cheat_str = "";
    for(int i=1;i<word.length()-1;i++){
        if(i%(int)(sqrt(word.length())-1)==0){
            cheat_str+=word[i];
        }
    }
    return cheat_str;
}

string transposeString(string word) {
    int len = sqrt(word.length());
    string arr[len][len];
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            arr[i][j] = word[i * len + j];
        }
    }
    string new_word="";
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            new_word+=arr[j][i];
        }
    }
    return new_word;
}

int gcf(int num1, int num2){
    if(num2 == 0){
        return num1;
    }
    return gcf(num2, num1 % num2);
}

string gcfDecode(string word, int arr1[], int arr2[], int arr_len){
    string decoded="";
    for (int i = 0; i < arr_len; ++i) {
        int gcf_index=gcf(arr1[i],arr2[i]);
        decoded+=word[gcf_index];
    }
    return decoded;
}