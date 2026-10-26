/* NON_MATCHING: the group value-kind test is outlined after the epilogue; entry/flag registers differ. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "util/SlotRangeSelect.h"
#include "util/btlScriptResolveGroupArg.h"

extern "C" {
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

static inline bool valueKindIsZeroOrTwo(u16 value)
{
    return (value & 0xFC00) == 0 || value >> 10 == 2;
}

// Report whether a group member or the active entry has a value of encoded kind zero or two.
u32 FUN_002f7528(void)
{
    s32 valueIndex = scrGetArg(0);
    u32 group = (u32)btlScriptResolveGroupArg(scrGetArg(1));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if ((flags & 0x10) == 0 && (flags & 1) != 0 && (flags & 0x40) == 0 &&
            valueKindIsZeroOrTwo(entry->values[valueIndex])) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && valueKindIsZeroOrTwo(entry->values[valueIndex])) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
