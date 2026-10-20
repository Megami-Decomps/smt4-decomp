#include "common.h"

extern "C" {

int FUN_002aa568(u8 *name, u32 key);

extern int DAT_00433278;
extern u8 DAT_00478000[][0x148];

/* Index of the first entry whose name (at +1) matches `key`, or 0xFF. */
u32 FUN_0024a808(u32 key)
{
    u32 i = 0;

    if ((int)i < DAT_00433278) {
        do {
            if (FUN_002aa568(&DAT_00478000[i & 0xff][1], key) == 0) {
                return i & 0xff;
            }
            i++;
        } while ((int)i < DAT_00433278);
    }
    return 0xff;
}

} /* extern "C" */
