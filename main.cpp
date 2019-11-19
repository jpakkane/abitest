#include<bar.h>
#include<foo.h>
#include<iostream>

int main(void) {
    std::cout << "Starting to call functions.\n";
    foo();
    bar();
    std::cout << "Function calls are done.\n";
    return 0;
}
