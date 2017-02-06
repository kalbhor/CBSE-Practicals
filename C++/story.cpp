/*
Create a text file "story.txt" which contains a story and then: 
Display the contents
No. of alphabets in it
No. of lines ending with "."
*/

#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main(){
    fstream f("story.txt", ios::in | ios::out);
    
    char x;
    int count = 0;
    
    while(f){
        f.get(x);
        cout<<x;
        if(isalpha(x))
            count++;
    }
    cout<<count;
}
