#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main(){
    system("curl -H \"Accept: text/plain\" https://icanhazdadjoke.com/");
    sleep (5);
    return 0;
}