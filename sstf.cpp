#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    int size;
    int request_sequence;
    int seek_elements=0;
    int head;

    cout<<"size of request sequence";
    cin>>size;

    cout<<"elements of request sequence";
    for(int i=0;i<size;i++)
    {
        cin>>request_sequence;
        v1.push_back(request_sequence);
    }
    cout<<"head is: ";
    cin>>head;

    seek_elements = (head - *min_element(v1.begin(),v1.end()))   + (*max_element(v1.begin(),v1.end()) - *min_element(v1.begin(),v1.end()));

 
    cout<<"Total Cylinder: "<<seek_elements<<endl;
    return 0;
}