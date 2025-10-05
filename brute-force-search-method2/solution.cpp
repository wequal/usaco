#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    int i,n,m;
    int max_income=0;
    int sale_price;
    int income;
    cin>>n>>m;
    vector<int> price(m);
    for(i=0;i<m;i++){
        cin>>price[i];
    }
    sort(price.begin(),price.end());

    for(i=0;i<m;i++){
        
        income = price[i]*min(m-i, n);
        
        //max_income=max(income,max_income);
        if(income>max_income){
            max_income=income;
            sale_price=price[i];
        }
   //     cout<<sale_price<<" "<<max_income<<endl;
    }
   // cout<<sale_price<<" "<<max_income<<endl;

    return 0;
}
