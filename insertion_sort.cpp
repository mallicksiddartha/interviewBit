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

int main(){
    int arr[100];
    int n, i, j, pivot, hole;

    cin>>n;
    for(i=0;i<n;++i){
        cin>>arr[i];
    }

    for(j=1;j<n;++j){
        pivot = arr[j];
        hole = j;
        while(hole>0 && arr[hole-1] > pivot){
            arr[hole] = arr[hole-1];
            hole = hole - 1;
        }
        arr[hole] = pivot;
    }

    for(i=0;i<n;++i){
        printf("%d  ", arr[i]);
    }


    return 0;
}
