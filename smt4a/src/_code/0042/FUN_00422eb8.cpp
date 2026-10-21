/* NON_MATCHING: retail query scheduling or inlined accessor instruction grouping differs. */
#include "common.h"
struct ValueEntry { u8 unk00[0x58]; u64 value; u8 unk60[0x10]; };
struct ValueTable { u8 unk00[8]; ValueEntry *entries; u8 unk0c[8]; u32 count; };
extern "C" ValueTable DAT_005880d0;
/* Returns the indexed 64-bit value or zero for an invalid index. */
extern "C" u64 FUN_00422eb8(s32 index)
{
    if (index < 0 || (u32)index >= DAT_005880d0.count)
        return 0;
    return DAT_005880d0.entries[index].value;
}
