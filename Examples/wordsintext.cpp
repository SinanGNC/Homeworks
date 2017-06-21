/*In this assignment you will write a C++ program that reads a vocabulary, i.e. a set of words,
from the std. input and (1) counts the number of occurrence of each word in the vocabulary,
(2) prints out the words in the vocabulary in ascending order. The vocabulary size will not exceed 1000.
For example, if the vocabulary includes:
>Mehmet ayse MeHmet Ayse ayse MehMET barni mehmet
Your program will print to the std. output the following text:
Vocabulary Size = 3 ayse 3
barni 1
mehmet 4
Notice that, all words in the vocabulary should be treated case insensitively;
and the words must be printed in small letters.*/

-----------------------------------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <map>
using namespace std;

void sort(string[],int);

int main() {
    map<string, int> wordCounts;
    string s;
    string array[1000];
    int i = 0;

    while (cin >> s) {
       
        for (int k=0; k < s.length(); k++){
            s[k] = tolower(s[k]);
        }
        array[i] = s;
        i++;
        ++wordCounts[s];
    }
    sort(array,i);  // sort (according to alphabet)
    
   // Duplicate string elimination
    int k=0;                                        // Duplicate string elimination
    int l=0;                                        // Duplicate string elimination
    for (int n=0; n<600; n++) {
        if (array[l] == array[l+1] ) {
            l++;
        }
        else{                                       // Duplicate string elimination
            array[k] = array[l];
            l++;
            k++;                                    // Duplicate string elimination
        }
    }
    
    cout << "Vocabulary Size = " << k << endl;
    
    for (int j=0; j<k; j++) {
        
        cout << array[j] << " " << wordCounts[array[j]] << endl ;     // prints to the screen
    }
    return 0;
}

void sort(string array[] , int size){
    string temp;
    int i, j;
    
    for (i=1; i<size; i++)
    {
        for (j=0; j<size-i; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array [j];
                array [j] = array [j+1];
                array [j+1] = temp;
            }
        }
    }
}
