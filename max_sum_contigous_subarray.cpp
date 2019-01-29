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

int maxSubArray(vector <int> &arra){

    int maxCurrent, maxGlobal;
    maxCurrent = *arra.begin();
    maxGlobal = *arra.begin();
    vector<int>::iterator i;
    for(i = arra.begin()+1; i<arra.end();++i){
        printf("before, current: %d, global: %d\n", maxCurrent, maxGlobal);
        maxCurrent = max(*i , maxCurrent+ *i);
        maxGlobal = max(maxCurrent, maxGlobal);
        printf("after, current: %d, global: %d\n\n", maxCurrent, maxGlobal);
    }

    return maxGlobal;

}

int main(){
    vector<int> totalArray;
    int n, i, j;

    while(scanf("%d", &n) == 1){
        for(i=0;i<n;++i){
            scanf("%d", &j);
            totalArray.push_back(j);
        }

        int result = maxSubArray(totalArray);
        printf("Maximum sub array sum: %d\n", result);
        totalArray.clear();
    }

    return 0;
}
