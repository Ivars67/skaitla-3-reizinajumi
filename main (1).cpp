#include <iostream>
#include <vector>
using namespace std;


    vector<int> first_three_multiples(int a){
    
        vector<int> result;
        
        result.push_back(a*1);
        result.push_back(a*2);
        result.push_back(a*3);
        
        return result;
    }
    
    int main(){
        
        vector<int> a;
        a = first_three_multiples(7);
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<endl<<endl;
        }
        

    }
