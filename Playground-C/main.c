//
//  main.c
//  Playground-C
//
//  Created by Pavel Koyushev on 06.07.2025.
//

#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int main(int argc, const char * argv[]) {
    
    printf("Hello, World C-programming!\n\n");
    
    Product* p1 = createProduct(1, "Apple", 0.25, 10, "This is a fruit");
    
    p1->print(p1);
    printf("\n");
    p1->printDesc(p1);
    printf("\n\n");
    
    free(p1);
    
    return 0;
}
