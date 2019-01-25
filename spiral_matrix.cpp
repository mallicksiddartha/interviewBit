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
int arr[100][100];

bool boolArr[100][100];

int solution[200];
int index;

void dfs(int row, int column, int upperLimit, bool moveLeft, bool moveRight, bool moveUp, bool moveDown){
    solution[index++] = arr[row][column];
    boolArr[row][column] = true;
    bool moveDirection;

    printf("row %d, column %d\n", row, column);
    if(moveLeft == true){
        moveDirection = (column+1 < upperLimit && boolArr[row][column+1] == false);
        if(moveDirection == true) return dfs(row, column+1, upperLimit, true, false, false, false);
        else return dfs(row+1, column, upperLimit, false, false, false, true);
    }
    if(moveDown == true){
        moveDirection = (row+1 < upperLimit && boolArr[row+1][column] == false);
        if(moveDirection == true) return dfs(row+1, column, upperLimit, false, false, false, true);
        else return dfs(row, column-1, upperLimit, false, true, false, false);
    }
    if(moveRight == true){
        moveDirection = (column-1 > -1 && boolArr[row][column-1] == false);
        if(moveDirection == true) return dfs(row, column-1, upperLimit, false, true, false, false);
        else return dfs(row-1, column, upperLimit, false, false, true, false);
    }
    if(moveUp == true){
        moveDirection = (row-1 > -1 && boolArr[row-1][column] == false);
        if(moveDirection == true) return dfs(row-1, column, upperLimit, false, false, true, false);
        else return dfs(row, column+1, upperLimit, true, false, false, false);
    }
}

int main(){

    int n, m, i, j, border;

    cin>>m;
    cin>>n;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    memset(boolArr, false, sizeof(boolArr));
    index = 0;
    /*border = 0;
    while(border < n || border < m){
        for(j=border; j<n-border; ++j){
            solution[index++] = arr[border][j];
        }
        for(i=border+1;i<m-border; ++i){
            solution[index++] = arr[i][n-border-1];
        }
        for(j=n-border-2;j>=border;--j){
            solution[index++] = arr[n-border-1][j];
        }
        for(i=m-border-2;i>border;--i){
            solution[index++] = arr[i][border];
        }

        border++;
    }*/


    int t=0, l = 0, r = n-1, d = m-1;
    int direction = 0; // 0 means left to right, 1 means top to bottom, 2 means right to left, 3 means bottom to top
    while(t <= d && l<=r){
        if(direction == 0){
            for(i=l;i<=r;++i){
                solution[index++] = arr[t][i];
            }
            t++;
            direction = 1;
        } else if(direction == 1){
            for(i=t;i<=d;++i){
                solution[index++] = arr[i][r];
            }
            r--;
            direction = 2;
        } else if(direction == 2){
            for(i=r;i>=l;--i){
                solution[index++] = arr[d][i];
            }
            d--;
            direction = 3;

        } else if (direction == 3){
            for(i=d;i>=t;--i){
                solution[index++] = arr[i][l];
            }
            l++;
            direction = 0;
        }
    }

    for(int x=0; x<index;++x){
        printf("%d   ", solution[x]);
    }
    return 0;
}
