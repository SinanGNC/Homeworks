/*Write a C++ program that reads a set of names and three parameters,
i.e. p1, p2 and p3, for each name, and store it in a structure array.
The name list will be terminated with the string end.
Then a set of query strings will be provided from the std. input.
Your program needs to compute a score related to each name using the following equation:
score=(p1+p2)*p3
Here p1 and p2 are double numbers, p3 is and integer. 
The name queries will also be end with the string end.*/



#include <string>
#include <iostream>

using namespace std;

struct MyStrings{

    string name;
    double p1;
    double p2;
    int p3;
};

int main() {
 
    MyStrings object[5000];
    
    cout << scientific;
    string s;
    string name;
    double a1;
    double a2;
    int a3;
    for(int i=0;i<5000;i++) {
        cin >> name;
          if( name != "end" ){
             cin >> a1 >> a2 >> a3;
             object[i].name = name;
             object[i].p1 = a1;
             object[i].p2 = a2;
             object[i].p3 = a3;
           }
          else
              break;
                  
     }
    string array[5000];
    int count = 0;
    int countS = 0;
    while( s != "end" ){
        cin >> s;
        if( s != "end" ){
            array[countS] = s;
            count++;
            countS++;
        }
        else
            for (int j=0; j<count; j++){
                for (int n=0; n<5000; n++){
                    if (array[j] == object[n].name)
                        cout << object[n].name << " " << (object[n].p1 + object[n].p2)*object[n].p3 << endl;
                }
            }
        }
    return 0;
}


