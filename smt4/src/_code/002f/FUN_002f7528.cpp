/* NON_MATCHING: the group value-kind test is outlined after the epilogue; entry/flag registers differ. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *start, s32 *count);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindActiveEntry(BtlState *battle);
void scrSetResult(s32 result);

// Report whether a group member or the active entry has a value of encoded kind zero or two.
u32 FUN_002f7528(void)
{
    s32 valueIndex = scrGetArg(0);
    u32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlUnitEntry *entry = &btlGetMainState()->units[index];
        u32 flags = entry->flags;
        if ((flags & 0x10) == 0 && (flags & 1) != 0 && (flags & 0x40) == 0) {
            u16 value = entry->values[valueIndex];
            if ((value & 0xFC00) == 0 || value >> 10 == 2) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL) {
            u16 value = entry->values[valueIndex];
            if ((value & 0xFC00) == 0 || value >> 10 == 2) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
