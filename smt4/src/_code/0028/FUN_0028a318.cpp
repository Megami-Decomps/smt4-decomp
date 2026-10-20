#include "shard/Scene43dcf0.h"

extern "C" {

extern u32 FUN_00295618(void);

u32 FUN_0028a318(void)
{
    u8 state;
    u32 result;

    if (DAT_0043dcf0 != NULL) {
        if (DAT_0043dcf0->unk1C != 0x17) {
            return 0;
        }
        state = DAT_0043dcf0->state;
        if ((state != 1 && state != 6) && ((state != 7 && state != 13) && state != 12)) {
            result = FUN_00295618();
            return result;
        }
    }
    return 1;
}

} /* extern "C" */
