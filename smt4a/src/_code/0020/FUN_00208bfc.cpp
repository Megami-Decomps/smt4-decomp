#include "common.h"

extern "C" {

/* Returns the address 8 bytes into the object, or NULL when there is none. */
u8 *FUN_00208bfc(u8 *object)
{
    if (object != NULL) {
        object = object + 8;
    }
    return object;
}

} /* extern "C" */
