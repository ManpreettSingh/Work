#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number of rows of the array : ";
    int n1;
    cin >> n1;
    cout << "Enter the number of colm of the array : ";
    int m1;
    cin >> m1;
    vector<vector<int> > v1(n1, vector<int>(m1));
    // INPUT :
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> v1[i][j]; // You must define the size of the 2D-vector before taking the inputs
        }
    }
    cout << "Enter the number of rows of the array : ";
    int n2;
    cin >> n2;
    cout << "Enter the number of colm of the array : ";
    int m2;
    cin >> m2;
    vector<vector<int> > v2(n2, vector<int>(m2));
    // INPUT :
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> v2[i][j]; // You must define the size of the 2D-vector before taking the inputs
        }
    }

    int arr[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            int sum=0;
            for(int k=0;k<n2;k++){
                sum+=(v1[i][k]*v2[k][j]);
            }
            arr[i][j]=sum;
        }
    }
    
    return 0;
}