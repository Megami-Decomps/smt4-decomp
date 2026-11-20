#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

s32 slotRecordFindById(u32 id);
s32 compendiumEntryIsRegistered(u32 id);
s32 bitsAt60Test(s32 record, u32 flag);

/* Reports the event for `id`: kind 0x5B if its slot record exists but lacks flag 10, otherwise kind 0x5A if compendiumEntryIsRegistered accepts the id. */
void FUN_0020caec(u32 id, u32 a, u32 b, u32 c)
{
    s32 record;

    record = slotRecordFindById(id);
    if ((record != 0) && (record = bitsAt60Test(record, 10), record == 0)) {
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x5B, a, b, c);
        return;
    }
    record = compendiumEntryIsRegistered(id);
    if (record != 0) {
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x5A, a, b, c);
    }
}

} /* extern "C" */
