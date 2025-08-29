#include <bits/stdc++.h>
using namespace std;


/* some observations

Internally, it is usually implemented as a self-balancing binary search tree (BST), like a Red-Black Tree.

       2
      / \
     1   3

each node contains = [value | left child pointer | right child pointer | parent pointer | color]

it points to the node containing 2.
*it gives the value stored in that node.
++it moves to the next element in sorted order.

*/


void solve() {

    //declaration
    set<int> s={1,2,3};


    //insertion
    s.insert(10);
    s.insert(20);
    s.insert(2);


    //traversion
    for(auto i=s.begin();i!=s.end();i++){ //type 1
        cout<<*i<< " ";
    }

    for(auto x:s){ //type 2
        cout<<x<<" ";
    }


    //deletion
    s.erase(3); // element based 

    auto it=s.find(2); //pointer based
    for(auto it!=s.end()){
        s.erase(it);
    }
    
    for(auto it = s.begin(); it != s.end(); ){ //through iteration
        if(*it == 2){
            it = s.erase(it);
        }
        else{
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