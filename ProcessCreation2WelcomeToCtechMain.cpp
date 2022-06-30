#include <iostream>
#include <unistd.h>

using namespace std;

int main (){
    fork();
    fork();
    cout << "Welcome to Ctech" << endl;
    return 0;
}