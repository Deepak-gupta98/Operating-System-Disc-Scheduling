#include<bits/stdc++.h> 
using namespace std;
class Disk_scheduling{
     public:
    void Fcfs()
    {
  
        int n;
        int request_sequence[n];
        int head;
        int seek_sequence=0;

 
        cout<<"number of request sequence: ";
        cin>>n;

        cout<<"elements of request_sequence";
        for(int i=0;i<n;i++)
        {
            cin>>request_sequence[i];
        }

       
        cout<<"Initialize Head : ";
        cin>>head;

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                seek_sequence = abs(request_sequence[0]-head);
            }
            else
            {
                seek_sequence += abs(request_sequence[i]-request_sequence[i-1]);
            }
        
        
        }

        cout<<"total Cylinder:  ";
        cout<<seek_sequence<<endl;
    }
    
};
int main()
{
    Disk_scheduling  d1;
    d1.Fcfs();
    

    return 0;
}