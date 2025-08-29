#include <bits/stdc++.h>
using namespace std;


/* some observations

about map:
A map is a key–value pair container,Keys are unique and sorted
Implemented using Red-Black Tree (balanced BST).

Time Complexity:
    Insertion: O(log n)
    Search: O(log n)
    Deletion: O(log n)

*/


void solve() {

    //declaration
    map<int, string> mp = {{1, "Apple"},{2, "Banana"},{3, "Mango"}};


    //insertion
    mp.insert({5, "orange"});
    mp.insert({16, "grape"});
    mp[9] = "lemmon";


    //traversion
    for (auto it = mp.begin(); it != mp.end(); ++it) { //it → iterator → use "->"
        cout << it->first << " " << it->second << endl;
    }

    for (auto &x : mp) { //x → pair reference → use "."
        cout << x.first << " " << x.second << endl;
    }



    //deletion
    mp.erase(3); // delete key 3 with its value  

    auto it = mp.find(2);
    if (it != mp.end()){
        mp.erase(it);
    }

    for (auto it = mp.begin(); it != mp.end(); ) {
        if (it->first == 2){     // condition to delete
            it = mp.erase(it);     // erase returns next valid iterator
        }else{
            ++it;
        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    return 0;
}