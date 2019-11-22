#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>right,left;
    int size;
    int request_sequence[size];
    int seek_elements=0;
    int head;

    cout<<"size of request sequence: ";
    cin>>size;

    cout<<"elements of request sequence: ";
    for(int i=0;i<size;i++)
    {
        cin>>request_sequence[i];
       
    }
    cout<<"head is: ";
    cin>>head;

    for(int i=0;i<size;i++)
    {
        if(head < request_sequence[i])
            right.push_back(request_sequence[i]);
        else
        {
            left.push_back(request_sequence[i]);
        }
        
    }
    seek_elements=(*max_element(right.begin(),right.end()) - head) + (*max_element(right.begin(),right.end()) - *min_element(left.begin(),left.end())) + (*max_element(left.begin(),left.end()) - *min_element(left.begin(),left.end()));
    cout<<"Total Cylinder: "<<seek_elements<<endl;
    
    return 0;
}