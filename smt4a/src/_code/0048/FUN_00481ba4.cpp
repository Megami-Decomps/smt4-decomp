#include "common.h"

extern "C" {
int asdOperatorDelete(void *block);

/* Frees the object. */
void FUN_00481ba4(void *object)
{
    asdOperatorDelete(object);
}
}
