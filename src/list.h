#include "pthread.h"
#ifndef INT_LL_H
#define INT_LL_H
// Integer Linked Lists

typedef struct node 
{
    int value;
    struct node *next;
}node_t;
typedef struct _integer_linked_list_t
{
    node_t* root;
    int length;
    pthread_mutex_t mutex;
} int_ll_t;

// Init list structure
int init_list(int_ll_t *list);

// Free list structure
int free_list(int_ll_t *list);

// Get list size
int size_list(int_ll_t *list);

// Get element at index
int index_list(int_ll_t *list, int index, int *out_value);

// Insert element at index
int insert_list(int_ll_t *list, int index, int value);

// Remove element at index
int remove_list(int_ll_t *list, int index, int *out_value);
#endif
