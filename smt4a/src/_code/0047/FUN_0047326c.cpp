#include "common.h"

extern "C" void asdOperatorDelete(void *object);

/* There are no members to destroy before releasing this object. */
extern "C" void FUN_0047326c(void *object)
{
    asdOperatorDelete(object);
}
