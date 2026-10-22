#include "common.h"

extern "C" void asdMemFreeNonNull(void *block);

/* Release the storage owned by the deleting virtual hook. */
extern "C" void _ZN9Obj422230D0Ev(void *object)
{
    asdMemFreeNonNull(object);
}
