#ifndef _VECTOR_H 
#define _VECTOR_H 

#include <stdio.h> 

#define SUCCESS             1 
#define INDEX_OUT_OF_RANGE  2
#define VECTOR_EMPTY        3 

typedef struct vector vector_t; 
typedef int data_t; 
typedef int status_t; 
typedef long long ssize_t; 
typedef ssize_t index_t; 

struct vector{
    data_t* arr; 
    ssize_t N; 
}; 

/* Vector Interface Functions */
vector_t* create_vector(ssize_t N); 
status_t get(vector_t* p_vec, index_t index, data_t* p_data); 
status_t set(vector_t* p_vec, index_t index, data_t new_val); 
status_t push_back(vector_t* p_vec, data_t new_val); 
status_t pop_back(vector_t* p_vec, data_t* p_poped_val); 
status_t sort(vector_t* p_vec); // Use quick sort 
index_t search(vector_t* p_vec, data_t search_element); 
ssize_t size(vector_t* p_vec); 

void show(vector_t* p_vec, const char* msg); 
status_t destroy_vector(vector_t** pp_vec); 

/* vector Auxillary Functions */
static void quick_sort(data_t* arr, index_t p, index_t r); 
static index_t partition(data_t* arr, index_t p, index_t r); 

/* General Purpose Auxillary Functions */
static void* xcalloc(size_t nr_elements, size_t size_per_element); 

#endif /* _VECTOR_H */