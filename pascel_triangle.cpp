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

vector< vector <int> > solution(int n){
    vector< vector <int> > vec2d;
    int i, j;
    for(i=0;i<n;++i){
        vec2d.push_back(vector<int>());
        for(j=0;j<=i;++j){
            vec2d[i].push_back(1);
        }
    }
    for(i=2;i<n;++i){
        for(j=1;j<i;++j){
            vec2d[i][j] = vec2d[i-1][j] + vec2d[i-1][j-1];
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<=i;++j){
            printf("%d ", vec2d[i][j]);
        }
        printf("\n");
    }
    return vec2d;
}

int main(){
    int n;

    cin>>n;

    solution(n);

}
