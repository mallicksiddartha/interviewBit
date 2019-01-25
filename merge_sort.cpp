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

void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return;

	mid = n/2;
	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = A[i];
	for(i = mid;i<n;i++) R[i-mid] = A[i];
printf("**L** ");
	for(i = 0;i < mid;i++) printf("%d ",L[i]);
	printf("**R** ");
for(i = 0;i < n-mid;i++) printf("%d ",R[i]);
printf("\n ");
	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(A,L,mid,R,n-mid);
        free(L);
        free(R);
}

int main() {
	/* Code to test the MergeSort function. */

	int i, numberOfElements;
	int A[] = {6,2,3,1,9,10,15,13,12,17};

	numberOfElements = sizeof(A)/sizeof(A[0]);

	MergeSort(A,numberOfElements);

	for(i = 0;i < numberOfElements;i++) printf("%d ",A[i]);
	return 0;
}
