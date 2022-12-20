// to change case of a string

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    string name;
    bool sw;
    cout<<"enter your name\n";
    cin>>name;
    cout<<"enter '1' for lower case and '0' for capitalised\n";
    cin>>sw;


    switch (sw)
    {
    case 1:
    for(int j=0; j<name.size(); ++j){
        if(name[j]>='A' && name[j]<='Z'){
            name[j] += 32;
        }
    }
        break;
    
    default:
    for(int i=0; i<name.size(); ++i){
        if(name[i]>='a' && name[i]<='z'){
            name[i] -= 32;
        }
    }
        break;
    }

    

cout<<name;


    return 0;
}
