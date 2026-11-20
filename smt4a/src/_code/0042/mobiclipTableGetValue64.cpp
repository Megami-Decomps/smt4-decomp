/* NON_MATCHING: written like the sibling soundVoiceClearState over the same table; only the value load differs:
 * retail adds the field offset (add r0, #88; ldrd r0, [r0]) where this build folds it into ldrd [r1, #88]. */
#include "common.h"
struct ValueEntry { u8 unk00[0x58]; u64 value; u8 unk60[0x10]; };
struct ValueTable { u8 unk00[8]; ValueEntry *entries; u8 unk0c[8]; u32 count; };
extern "C" ValueTable g_soundVoicePool;
/* Returns the indexed 64-bit value or zero for an invalid index. */
extern "C" u64 mobiclipTableGetValue64(s32 index)
{
    if (index < 0) {
        return 0;
    }
    u32 count = g_soundVoicePool.count;
    if ((u32)index >= count) {
        return 0;
    }
    ValueEntry *entry = &g_soundVoicePool.entries[index];
    return entry->value;
}
