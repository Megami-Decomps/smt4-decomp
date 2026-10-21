#include "shard/Block57f0c4.h"

extern "C" {

s32 scrRunOpcodesStub(u32 handle);

/* Returns whether scrRunOpcodesStub reports 2 for the record's handle at 0x680. */
u8 FUN_002a21e8(void)
{
    s32 state;

    state = scrRunOpcodesStub(g_buttonHelp.record->unk680);
    return state == 2;
}

} /* extern "C" */
