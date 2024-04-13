/// challenge - print aheli 100 times Aheli 1, Aheli 2 using recursion
#include <stdio.h>

// Aheli in the backward
int counter_backward_v1 = 10;
void printing_backward_v1() {
    if (counter_backward_v1 == 0)
    {
        return;
    } else {
     printf("Aheli - %d\n", counter_backward_v1);
    counter_backward_v1--;
      printing_backward_v1();  
    }
}

// Aheli backward iteration
int counter_backward_v2 = 10;
void printing_backwards_v2(){
    while (counter_backward_v2 > 0){
      printf("Aheli - %d\n",counter_backward_v2);
      counter_backward_v2--;
    }
    
}

// Aheli in the forward
int counter_forward_v1 = 0;
void printing_forward_v1(){
    if(counter_forward_v1 == 10){
        return;
    }else{
        printf("Aheli - %d\n", counter_forward_v1);
        counter_forward_v1++;
        printing_forward_v1();
    }
}

// Aheli forward iteration
int counter_forward_v2 = 0;
void printing_forwards_v2(){
    while (counter_forward_v2 < 10){
      printf("Aheli - %d\n",counter_forward_v2);
      counter_forward_v2++;
    }
    
}

int main(){
    //printing_backward_v1();
    printf("\n\n");
    
    // printing_forward_v1();
    printf("\n\n");
    
    //printing_backwards_v2();
    printf("\n\n");
    
    printing_forwards_v2();
    return 0;
}