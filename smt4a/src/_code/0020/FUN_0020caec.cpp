#include "common.h"

extern "C" {

void FUN_001835b4(s32 a, s32 b, s32 c, u32 d, u32 e, u32 f);
s32 slotRecordFindById(u32 id);
s32 FUN_002a4b28(u32 id);
s32 bitsAt60Test(s32 record, u32 flag);

/* Reports the event for `id`: kind 0x5B if its slot record exists but lacks flag 10, otherwise kind 0x5A if FUN_002a4b28 accepts the id. */
void FUN_0020caec(u32 id, u32 a, u32 b, u32 c)
{
    s32 record;

    record = slotRecordFindById(id);
    if ((record != 0) && (record = bitsAt60Test(record, 10), record == 0)) {
        FUN_001835b4(2, 0x1A, 0x5B, a, b, c);
        return;
    }
    record = FUN_002a4b28(id);
    if (record != 0) {
        FUN_001835b4(2, 0x1A, 0x5A, a, b, c);
    }
}

} /* extern "C" */
