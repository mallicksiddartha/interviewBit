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

vector < vector < int > > solution(vector<vector<int > > &A){
    int c, r, x = 0, i, j, sizeVec = A.size();
    vector<vector < int > > result;

    for(i=0;i<sizeVec;++i){
        r=0;
        c = i;
        result.push_back(vector<int >());
        while(c>=0){
            result[x].push_back(A[r++][c--]);
        }
        x++;
    }
    for(i=1;i<sizeVec;++i){
        r=i;
        c = sizeVec-1;
        result.push_back(vector<int >());
        while(r < sizeVec){
            result[x].push_back(A[r++][c--]);
        }
        x++;
    }

    for(i=0;i<result.size();++i){
        for(j=0;j<result[i].size();++j){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return result;
}

int main(){
    int n, r, c, x;
    vector < vector < int > > vec2d;

    cin>>n;

    for(r=0;r<n;++r){
        vec2d.push_back(vector<int >());
        for(c=0;c<n;++c){
            scanf("%d", &x);
            vec2d[r].push_back(x);
        }
    }

    solution(vec2d);


}
