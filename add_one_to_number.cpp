#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
vector<int> result;

vector <int> solution (vector <int> &A){
    int carry = 1, temp = 0;
    vector<int>::iterator index;
    for(index=A.end()-1;index >= A.begin();--index){
            printf("%d   ", *index);
        temp = (*index +carry) % 10;
        carry = (*index +carry) / 10;
        result.push_back(temp);
    }
    printf("\n");
    if(carry == 1)
        result.push_back(1);
    while(result.back() == 0)
        result.pop_back();
    reverse(result.begin(), result.end());
    for(index=result.end()-1;index >= result.begin();--index){
        printf("%d    ", *index);
    }
    printf("\n");

}

int main(){
    vector<int> input;
    int n, i, j;

    while((scanf("%d", &n) == 1)){
        input.clear();
        for(i=0;i<n;++i){
            scanf("%d", &j);
            input.push_back(j);
        }
        result.clear();
        solution(input);
    }

    return 0;
}
