#include<myabi.h>

void bar() {
    if(stdlib_function() != 2) {
        printf("Bar invoked the wrong ABI function.\n");
    } else {
        printf("Bar invoked the correct ABI function.\n");
    }
}
