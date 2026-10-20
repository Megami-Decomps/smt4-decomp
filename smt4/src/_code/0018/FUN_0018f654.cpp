#include "common.h"

extern "C" {

/* Adjusts a possibly-NULL pointer by 8 bytes (to the embedded base object), keeping NULL. */
u8 *FUN_0018f654(u8 *obj)
{
    if (obj != NULL) {
        obj = obj + 8;
    }
    return obj;
}

} /* extern "C" */
