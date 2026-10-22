#include "common.h"

extern "C" void *owner1DDestroy(void *object);
extern "C" void asdOperatorDelete(void *object);

/* Destroy the owned resources before releasing the owner itself. */
extern "C" void owner1DDelete(void *object)
{
    asdOperatorDelete(owner1DDestroy(object));
}
