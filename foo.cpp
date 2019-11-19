#include<myabi.h>

void foo() {
    if(stdlib_function() != 1) {
        printf("Foo invoked the wrong ABI function.\n");
    } else {
        printf("Foo invoked the correct ABI function.\n");
    }
}
