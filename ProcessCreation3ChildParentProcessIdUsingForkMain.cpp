#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main (){
    int id1 = fork();
    int id2 = fork();

    if(id1 > 0 && id2 > 0){
        cout << "\nChild Process ID: " << getpid() << endl;
        wait(NULL);
        cout << "\nChild Process ID with Parent ID: " << getpid() << endl;
    }

    // Parent Process
    if(id1 > 0 && id2 > 0){
        wait (NULL);
        wait(NULL);
        cout << "Parent Terminated" << endl;
    }

    else if(id1 == 0 && id2 > 0){
        sleep(2);
        wait(NULL);
        cout << "1st child Terminated" << endl;
    }
    return 0;
}