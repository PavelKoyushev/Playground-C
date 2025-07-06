//
//  Product.c
//  Playground-C
//
//  Created by Pavel Koyushev on 06.07.2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "product.h"

void productInfo(const Product* self) {
    printf("Product info:\nid: %d \n", self->id);
    printf("title: %s \n", self->title);
    printf("price: %.2f $ \n", self->price);
    printf("stock: %d pcs \n", self->count);
}

void productDesc(const Product* self) {
    printf("Product description: \"%s\", $%.2f, %d pcs, \"%s\"", self->title, self->price, self->count, self->description);
}

Product* createProduct(int id, const char* title, double price, int count, const char* description) {
    
    Product* product = (Product*)malloc(sizeof(Product));
    if (!product) {
        fprintf(stderr, "Memory allocation error!\n");
        return NULL;
    }
    
    product->id = id;
    strncpy(product->title, title, sizeof(product->title) - 1);
    product->price = price;
    product->count = count;
    strncpy(product->description, description, sizeof(product->description) - 1);
    
    product->print = productInfo;
    product->printDesc = productDesc;
    
    return product;
}
