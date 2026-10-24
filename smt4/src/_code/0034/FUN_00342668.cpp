#include "common.h"

extern "C" {
int asdMemFreeNonNull(void *block);

/* Frees the object. */
void FUN_00342668(void *object)
{
    asdMemFreeNonNull(object);
}
}
