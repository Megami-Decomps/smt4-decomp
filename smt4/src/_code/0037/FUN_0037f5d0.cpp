#include "common.h"

extern "C" {

extern u16 DAT_004ea494[];

/* Address of halfword `index` (0-15 in the object at +0xCC, 16-31 in the global table), or 0. */
int FUN_0037f5d0(int obj, int index)
{
    int address;

    if (index < 0x10) {
        address = obj + index * 2 + 0xcc;
    } else if (index < 0x20) {
        address = (int)&DAT_004ea494[index - 0x10];
    } else {
        address = 0;
    }
    return address;
}

} /* extern "C" */
