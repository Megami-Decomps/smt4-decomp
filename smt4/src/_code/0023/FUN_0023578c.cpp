#include "common.h"

extern "C" {

/* Address of halfword `index` of the table at +0xA0 (16 entries), or 0 when out of range. */
int FUN_0023578c(int base, int index)
{
    int result;

    if (index < 0x10) {
        result = base + index * 2 + 0xa0;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
