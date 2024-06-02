// #include <bits/stdc++.h>
// using namespace std;
// vector<int> nextGreaterElement(vector<int> &arr)
// {
//     vector <int> ans(arr.size(),arr.size());
//     stack <int> st;
//     st.push(0);
//     for(int i=1;i<arr.size();i++){
//         while(!st.empty() and arr[st.top()]<arr[i]){
//             ans[st.top()]=arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     return ans;
// }
// vector<int> prevGreaterElement(vector<int> &arr)
// {
//     int n=arr.size();
//     reverse(arr.begin(),arr.end());
//     vector <int> ans(arr.size(),-1);
//     stack <int> st;
//     st.push(0);
//     for(int i=1;i<arr.size();i++){
//         while(!st.empty() and arr[st.top()]<arr[i]){
//             ans[st.top()]=arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     reverse(arr.begin(),arr.end());
//     reverse(ans.begin(),ans.end());
//     return ans;
// }
// int main()
// {
//     vector<int> arr{4, 6, 3, 1, 0, 9, 5, 6, 7, 3, 2};
//     vector<int> ans = nextGreaterElement(arr);
//     vector<int> ans1 = prevGreaterElement(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout<<endl;
//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     cout << ans1[i] << " ";
//     // }
//     return 0;
// }