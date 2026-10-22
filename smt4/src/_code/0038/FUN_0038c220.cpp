#include "common.h"

extern "C" void asdMemFreeNonNull(void *block);

/* Release the storage owned by the deleting virtual hook. */
extern "C" void FUN_0038c220(void *object)
{
    asdMemFreeNonNull(object);
}
