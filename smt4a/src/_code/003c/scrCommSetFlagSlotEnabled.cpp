#include "shard/Shard003C.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void gameFlagSlotSetEnabled(s32 id, s32 flag);

/* Script command: gameFlagSlotSetEnabled(arg0, arg1 == 1). */
u32 scrCommSetFlagSlotEnabled(void)
{
    u16 id = scrGetArg(0);
    s32 mode = scrGetArg(1);

    gameFlagSlotSetEnabled(id, mode == 1);
    return 1;
}

} /* extern "C" */
