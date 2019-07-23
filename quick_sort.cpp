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

int partitionIndex(int *A, int startIndex, int endIndex){
    int pivot = A[endIndex];
    int partitionIndex = startIndex;
    for(int i=startIndex;i<endIndex;++i){
        //the sorting logic, increasing or decreasing
        if(A[i] <= pivot){
            swap(A[i], A[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(A[partitionIndex], A[endIndex]);
    return partitionIndex;
}

void quickSort(int *A, int startIndex, int endIndex){
    printf("start - %d, end %d\n", startIndex, endIndex);
    if(startIndex < endIndex){
        int pIndex = partitionIndex(A, startIndex, endIndex);
        quickSort(A, startIndex, pIndex-1);
        quickSort(A, pIndex+1, endIndex);
    }
}

int main(){
    int A[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int endIndex = sizeof(A)/sizeof(A[0]);
    quickSort(A, 0, endIndex-1);
    for(int i=0;i<endIndex;++i) printf("%d  ", A[i]);
    return 0;
}
