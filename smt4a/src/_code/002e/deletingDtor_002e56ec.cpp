#include "common.h"

extern "C" {

void *rt_vec_delete(void *self);
void asdOperatorDeleteB(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_002e56ec(void *self)
{
    asdOperatorDeleteB(rt_vec_delete(self));
}

} /* extern "C" */
