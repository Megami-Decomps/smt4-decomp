#include "common.h"

extern "C" {

/* Mask for category `id`: 0x3E0 for 0x13/0x14, 1000 for 0x16, otherwise 1 << id. */
int categoryMaskFromId(u32 id)
{
    int mask;

    if (id == 0x13 || id == 0x14) {
        mask = 0x3e0;
    } else if (id != 0x16) {
        mask = 1 << (id & 0xff);
    } else {
        mask = 1000;
    }
    return mask;
}

} /* extern "C" */
