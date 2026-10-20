#include "common.h"

extern "C" {

/* Returns the address 0x14 bytes into the object, or 0 when there is none. */
u8 *FUN_001ad5d8(u8 *object)
{
    u8 *member;

    member = NULL;
    if (object != NULL) {
        member = object + 0x14;
    }
    return member;
}

} /* extern "C" */
