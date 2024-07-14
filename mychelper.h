#ifndef MYCHELPER
#define MYCHELPER

void swap_int(int* a, int* b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void print_int_array_contents(int* a, int b){
    for(int i = 0; i < b; i++){
        printf("%i", *(a+i));
    }
}
#endif