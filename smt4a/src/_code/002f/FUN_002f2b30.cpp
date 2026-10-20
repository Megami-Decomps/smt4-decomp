#include "sys/FlagBlock.h"

extern "C" {



int FUN_0030ed94(u8 *object);

/* True when the global flag is set, FUN_0030ed94 accepts `object` and the object's byte at 0x131 is clear. */
u32 FUN_002f2b30(u8 *object)
{
    if (g_flagBlock.flag1d != 0 && FUN_0030ed94(object) != 0 && object[0x131] == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
