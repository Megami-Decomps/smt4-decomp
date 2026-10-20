#include "shard/Block57f0c4.h"

extern "C" {

s32 FUN_00224880(u32 handle);

/* Returns whether FUN_00224880 reports 2 for the record's handle at 0x680. */
u8 FUN_002a21e8(void)
{
    s32 state;

    state = FUN_00224880(DAT_0057f0c4.record->unk680);
    return state == 2;
}

} /* extern "C" */
