#include "common.h"

extern "C" {

extern u8 *DAT_005c1bfc;

/* Returns the address 0x80 bytes into the object at DAT_005c1bfc, or NULL when there is none. */
u8 *FUN_001a0d58(void)
{
    u8 *address;

    address = DAT_005c1bfc;
    if (DAT_005c1bfc != NULL) {
        address = DAT_005c1bfc + 0x80;
    }
    return address;
}

} /* extern "C" */
