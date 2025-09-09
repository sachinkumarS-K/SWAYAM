#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Number of element in array" << endl;
    int n;
    cin >> n;

    vector<int> arr(n, INT_MIN);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for (int it : st)
    {
        arr[index++] = it;
    }
    for (int i = 0; i < index; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}

int main(){
    cout << "Number of element in array"<<endl;
    int n;
    cin >> n;

    vector<int> arr(n, INT_MIN);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

   int i=0;
   for(int j=1;j<n;j++){
     if(arr[j]!=arr[i]){
         arr[++i]=arr[j];
     }
   }
   for(int j=0;j<i;j++)
    cout<<arr[j]<<" ";

    return 0;
}