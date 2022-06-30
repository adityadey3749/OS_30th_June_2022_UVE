#include <iostream>
#include <unistd.h>

using namespace std;

int main (){
    int pid;
    pid = fork();
    if(pid == 0){
        cout << "\nChild Process ID: " << getpid() << endl;
        cout << "\nChild Process ID with Parent ID: " << getpid() << endl;
    }
    return 0;
}