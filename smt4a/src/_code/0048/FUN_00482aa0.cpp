#include "common.h"

struct Owner1D;

extern "C" {

Owner1D *owner1DDestroy(Owner1D *owner);
void asdOperatorDelete(void *block);

/* Destroys the owner and releases its allocation. */
void FUN_00482aa0(Owner1D *owner)
{
    asdOperatorDelete(owner1DDestroy(owner));
}

} /* extern "C" */
