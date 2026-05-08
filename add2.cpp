#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
 // Your logic here	
	return a+b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    int num1,num2;
    cin>>num1>>num2;
    // cin >> t; // Uncomment if there are multiple test cases
    while(t--) {
       cout<<solve(num1,num2)<<endl;
    }
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}