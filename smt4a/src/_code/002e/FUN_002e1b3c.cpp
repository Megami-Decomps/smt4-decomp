#include "shard/Block57f0c4.h"

extern "C" {

s32 FUN_00275f44(u32 handle, u32 request);

/* Returns whether FUN_00275f44 accepts `request` for the record's handle at 0x680. */
u8 FUN_002e1b3c(u32 request)
{
    s32 accepted;

    accepted = FUN_00275f44(DAT_0057f0c4.record->unk680, request);
    return accepted != 0;
}

} /* extern "C" */
