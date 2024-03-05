// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<char> v;
vector<string> s; 
int main() {
    //BASICS-------------------------------------
    // vector<int> v;
    // v.emplace_back(1);
    // v.emplace_back(4);
    // v.push_back(3);
    // vector<int> c(v);
    // cout << v[2];
    // cout << c[2];
    
    //PRINTING VECTOR ELEMENT-------------------------------
    // vector<char> v;
    // char inp;
    // for(int i = 1; i <= 5; i++){
    //     cin >> inp;
    //     v.emplace_back(inp);
    // }
    v.emplace_back('a');
    v.emplace_back('b');
    v.emplace_back('c');
    v.emplace_back('d');
    v.emplace_back('e');
    s.emplace_back("prem");
     s.emplace_back("uma");
      s.emplace_back("jjhunu");
       s.emplace_back("babu");
    
for(vector<char>::iterator it=v.begin(); it!=v.end();it++){
    cout <<*(it) << " ";
}cout << '\n';
for(vector<string>::iterator st=s.begin(); st!=s.end();st++){
    cout <<*(st) << " ";
}cout << '\n';




// for(auto it = v.begin(); it!=v.end();it++){
//     cout << *(it) << " ";
// }

// for(auto it : v){
//     cout << it <<" ";
// }

//     vector<char>::iterator it = v.begin();
//     for(int i = 1; i <= 2; i++){
//         cout << *(it) << " ";
//         it++;
//     }

// DELETE-----------------------------------------------
// v.erase(v.begin());
// v.erase(v.begin()+1);
// v.erase(v.begin(),v.end());

// INSERT----------------------------------------------
v.insert(v.begin(),'v');
v.insert(v.end(),'t');
v.insert(v.begin()+1, 2, '9');

for(vector<char>::iterator it=v.begin(); it!=v.end();it++){
    cout <<*(it) << " ";
}
v.clear();

for(vector<char>::iterator it=v.begin(); it!=v.end();it++){
    cout <<*(it) << " ";
}cout << '\n';
for(vector<string>::iterator st=s.begin(); st!=s.end();st++){
    cout <<*(st) << " ";
}cout << '\n';

    return 0;
}
