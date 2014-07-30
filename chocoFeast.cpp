#include <iostream>
using namespace std;

int wrapperCount(int tradePrice, int wrappers){
    int newChoco = 0;
    if(wrappers >= tradePrice){
        int newWrappers = wrappers / tradePrice;
        wrappers %= tradePrice;
        wrappers += newWrappers;
        newChoco = newWrappers;
        if(wrappers >= tradePrice){
            return newChoco + wrapperCount(tradePrice, wrappers);
        }
    }

    return newChoco;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        int chocoCount = n / c;
        int wrappers = chocoCount;

        chocoCount += wrapperCount(m, wrappers);
        
        answer = chocoCount;

        cout<<answer<<endl;
    }
    return 0;
}
