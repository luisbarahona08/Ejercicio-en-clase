#include <stdio.h>
int main(){
int arr[]= {2,4,6,8,10};
int *p;
p = &arr[0];
//impresion de arreglo con punteros
for (int i=0; i <5; i++){
    printf("arr[%d] = %d", i, arr[i]);
    p = &arr[i];
    printf ("%d\n ", *p);
}

}