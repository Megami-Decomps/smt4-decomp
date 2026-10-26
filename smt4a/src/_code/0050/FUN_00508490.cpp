/* NON_MATCHING: retail pushes only lr around the call (no r4 alignment pad); same instructions otherwise. */
#include "common.h"

struct SndHandleRecord {
    u32 unk00;
    u32 value;
};

extern "C" {
SndHandleRecord *FUN_005083a0(SndHandleRecord *record, s32 mode);

u32 FUN_00508490(SndHandleRecord *record)
{
    return FUN_005083a0(record, 0x4002)->value;
}
}
