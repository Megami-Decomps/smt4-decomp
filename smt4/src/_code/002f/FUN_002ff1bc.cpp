#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

namespace {


}

extern "C" {
s32 scrGetArg(u32 index);
s32 scrSetResult(s32 result);

// Report whether any eligible battle entry has category four in the selected field.
u32 FUN_002ff1bc(void)
{
    const s32 fieldIndex = scrGetArg(0);

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        BtlEntry* entry = &btlGetMainState()->entries[entryIndex];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 &&
            (entry->values[fieldIndex] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}

} // extern "C"
