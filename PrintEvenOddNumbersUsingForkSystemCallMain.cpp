#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int main(){
    int i, N;
    cout<<"Enter number of Elements: ";
    cin>>N;
    if (fork()==0){
        for(i=1; i<N; i++)
            if(i%2==0)
                cout<<"\neven"<<i<<"\n";
    }
    else{
        for(i=1; i<N; i++)
            if(i%2 != 0)
                cout<<"\nodd"<<i<<"\n";
    }
}