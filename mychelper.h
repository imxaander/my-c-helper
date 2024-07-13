#ifndef MYCHELPER
#define MYCHELPER

void swap_int(int* a, int* b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

#endif