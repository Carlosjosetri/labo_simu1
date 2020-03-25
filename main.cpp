#include <iostream>
  #include "math_tools.h"
#include "display_tools.h"
#include <stdlib.h>



int main() {
    Matrix m{ { 2, 2, 3 },
              { 4, 5, 6 },
              { 7, 8, 9} };
    Matrix I;
    if(determinant(m)==0){
        return EXIT_FAILURE;
    }else{ inverse(m,I);
        showMatrix(I);
    }

    return 0;
}