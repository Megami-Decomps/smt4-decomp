#include "common.h"

extern "C" {

void asdOperatorDelete(void *block);

/* Releases the object's allocation. */
void FUN_00481dd4(void *object)
{
    asdOperatorDelete(object);
}

} /* extern "C" */
