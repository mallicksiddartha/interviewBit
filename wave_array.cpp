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

vector< int > solution(vector< int > &A){
    sort(A.begin(), A.end());

    for(int i=1;i<A.size();i = i+2){
        swap(A[i-1], A[i]);
    }
//    for(int j = 0; j<A.size();++j){
//        printf("%d ", A[j]);
//    }
//    printf("\n");
    return A;
}

int main(){
    vector< int > vec1d;
    int n, i, j;

    cin>>n;

    for(i=0;i<n;++i){
        scanf("%d", &j);
        vec1d.push_back(j);
    }

    solution(vec1d);

    return 0;
}
