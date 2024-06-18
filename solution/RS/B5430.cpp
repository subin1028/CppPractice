#include <bits/stdc++.h>
using namespace std;

int cnt;

void makeDeque(string& array, deque<int>& DQ){
    string num = "";
    for(int i = 0; i < array.length(); i++){
        if (isdigit(array[i])){
            num += array[i];
            // DQ.push_back(array[i]-'0');
        }
        else if ((num != "") && (array[i] == ',' || array[i] == ']')) {DQ.push_back(stoi(num)); num = ""; }
    }
}

void printDeque(deque<int>& DQ, char dirt, bool emp){
    if (emp == true){
        cout << "error" << endl;
    }
    else {
        cout << "[";
    if (dirt == 'B'){
        for(int idx = 0; idx < DQ.size(); idx++){
            cout << DQ[idx];
            if(idx < DQ.size()-1) cout << ",";
        }
    }
    else {
        for(int idx = DQ.size()-1; idx > -1; idx--){
            cout << DQ[idx];
            if(idx != 0) cout << ",";
        }
    }
    
    cout << "]" << endl;}
}

int main(void){
    cin >> cnt;
    string cmd;
    int dsize;
    string array;

    for(int i = 0; i < cnt; i++){
        deque<int> DQ;
        char dirt = 'B';
        bool emp = false;
        cin >> cmd;
        cin >> dsize;
        cin >> array;
        makeDeque(array, DQ);
        
        for(char c : cmd){
            if (c == 'R'){
                dirt = (dirt == 'B')? 'F' : 'B';
            }
            
            else if(c == 'D' && !(DQ.empty())){
                if (dirt == 'B') DQ.pop_front();
                else DQ.pop_back();
            }
            
            else if (c == 'D' && (DQ.empty())) emp = true;
        }
        
        printDeque(DQ, dirt, emp);
    }

}