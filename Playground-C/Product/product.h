//
//  product.h
//  Playground-C
//
//  Created by Pavel Koyushev on 06.07.2025.
//

#ifndef product_h
#define product_h

typedef struct Product {
    int id;
    char title[50];
    double price;
    int count;
    char description[300];
    void (*print)(const struct Product*);
    void (*printDesc)(const struct Product*);
} Product;

void productInfo(const Product* self);
Product* createProduct(int id, const char* title, double price, int count, const char* description);

#endif /* product_h */
