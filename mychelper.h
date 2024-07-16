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


//--------------------VECTORS----------------------------
struct Vector2d{
    double x, y;
};

typedef struct Vector2d Vector2d;
void print_vector2d(Vector2d* a){
    printf("%f, %f\n", a->x, a->y);
}
Vector2d add_vector2d(Vector2d* a, Vector2d* b){
    Vector2d c = {a->x + b->x, a->y + b->y};
    return c;
}
double dot_product_vector2d(Vector2d* a, Vector2d* b){
    return (double)(a->x * b->x) + (a->y * b->y);
}

#endif