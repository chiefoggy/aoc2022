#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
    int temp, store, ans;
    string str;
    ifstream numFile("data.txt");
    for (int i = 0; i < 2400; i++){
        getline(numFile, str);
        if (str == ""){
            if (store > ans) ans = store;
            store = 0;
        }
        else{
            temp = stoi(str);
            store += temp;
        } 
    }
    cout << ans;
}
