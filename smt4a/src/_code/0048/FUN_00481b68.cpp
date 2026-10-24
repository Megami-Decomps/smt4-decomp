#include "common.h"

extern "C" {
void *owner1DDestroy(void *object);
int asdOperatorDelete(void *block);

/* Destroys the object's members, then frees it. */
void FUN_00481b68(void *object)
{
    asdOperatorDelete(owner1DDestroy(object));
}
}
