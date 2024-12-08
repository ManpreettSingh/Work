#include <bits/stdc++.h>
using namespace std;

int main() {
    int sadle=INT_MIN;
    int arr1[5][5]={{0, 0, 0, 7, 0},
                    {1, 0, 0, 0, 0},
                    {0, 0, 0, 0, 6},
                    {0, 0, 0, 0, 0},
                    {0, 4, 0, 0, 0}};

    int m1=5;
    int spar1[100][3]={0};
    int n1=0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            if(arr1[i][j]){
                spar1[n1][0]=i;
                spar1[n1][1]=j;
                spar1[n1][2]=arr1[i][j];
                n1++;
            }
        }  
    }
    int arr2[5][5]={{0, 0, 0, 3, 9},
                    {0, 0, 2, 0, 0},
                    {0, 0, 0, 0, 0},
                    {0, 7, 0, 0, 0},
                    {3, 0, 0, 0, 0}};

    int m2=5;
    int spar2[100][3]={0};
    int n2=0;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            if(arr2[i][j]){
                spar2[n2][0]=i;
                spar2[n2][1]=j;
                spar2[n2][2]=arr2[i][j];
                n2++;
            }
        }  
    }
    int ans[200][3];
    int i=0,j=0,k=0;
    while(i<n1 || j<n2){
        if(i<n1 and j<n2 and spar1[i][0]==spar2[j][0] && spar1[i][1]==spar2[j][1]){
            ans[k][0]=spar1[i][0];
            ans[k][1]=spar1[i][1];
            ans[k][2]=spar1[i][2]+spar2[j][2];
            i++,j++,k++;
        }
        else if(j>n2) {
            ans[k][0]=spar1[i][0];
            ans[k][1]=spar1[i][1];
            ans[k][2]=spar1[i][2];
            i++,k++;
        }
        else if(i>n1){
            ans[k][0]=spar2[j][0];
            ans[k][1]=spar2[j][1];
            ans[k][2]=spar2[j][2];
            j++,k++;
        }
        else if(spar1[i][0]==spar2[j][0] and spar1[i][1]<spar2[j][1]){
            ans[k][0]=spar1[i][0];
            ans[k][1]=spar1[i][1];
            ans[k][2]=spar1[i][2];
            i++,k++;
        }
        else if(spar1[i][0]==spar2[j][0] and spar1[i][1]>spar2[j][1]){
            ans[k][0]=spar2[j][0];
            ans[k][1]=spar2[j][1];
            ans[k][2]=spar2[j][2];
            j++,k++;
        }
        else if(spar1[i][0]<spar2[j][0]){
            ans[k][0]=spar1[i][0];
            ans[k][1]=spar1[i][1];
            ans[k][2]=spar1[i][2];
            i++,k++;
        }
        else{
            ans[k][0]=spar2[j][0];
            ans[k][1]=spar2[j][1];
            ans[k][2]=spar2[j][2];
            j++,k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<< ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<" "<<endl;
    }

}
