#include <iostream>
using namespace std;
void waitingTime(int p[], int n, int b[], int wt[])
{
        int i;
        wt[0]=0;
        for(i=1;i<n;i++){
                wt[i]=b[i-1]+wt[i-1];}
}
void TurnAroundTime(int p[], int n, int b[],int wt[],int tat[])
{
        int i;
        for (i=0;i<n;i++){
                tat[i]=b[i]+wt[i];
        }
}
void AvgTime(int p[], int n, int b[]){
        int wt[n], tat[n], waittime=0,avgtime=0,i;
        waitingTime(p,n,b,wt);
        TurnAroundTime(p,n,b,wt,tat);
        cout<<"Process"<<"Burst Time"<<"Waiting Time"<<"Turn around time \n";
        for(i=0;i<n;i++){
                waittime+=wt[i];
                avgtime+=tat[i];
                cout<<" "<<i+1<<"\t\t"<<b[i]<<"\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
        }
        cout<<"\nAverage Waiting Time:"<<(float)waittime/(float)n<<"ms\n";
        cout<<"Average Turn Around Time:"<<(float)avgtime/(float)n<<"ms\n"<<endl;
}
int main(){
        int n;
        int processes[]={1,2,3,4,5};
        n=sizeof processes/sizeof processes[0];
        int bursttime[]={18,10,4,7,2};
        AvgTime(processes,n,bursttime);
}