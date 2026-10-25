/* NON_MATCHING: stat-condition chain compiles with swapped compare operands and a different argument-register allocation (retail: second in fp, third in sl; shared miss tail). */
#include "common.h"
#include "battle/btlHelp.h"

extern "C" {
extern u32 FUN_0023dcfc(u32 kind);
extern s32 FUN_00245cc0(u32 stat);
}

/* A battle entry; its id selects the stat row. */
struct BtlStatOwner {
    u8 unk00[8];
    s16 entryId; // 0x08
};

/* Whether `stat` meets the condition: -7 zero, -6 negative, -5 positive, 0 never, > 0 at its cap, < 0 at its floor. */
static __inline bool statMeetsCondition(s16 value, s32 condition, u32 stat)
{
    if (condition == -7) {
        return value == 0;
    }
    if (condition == -6) {
        return value >= 0;
    }
    if (condition == -5) {
        return value <= 0;
    }
    if (condition > 0) {
        s16 cap = (s16)FUN_0023dcfc(stat);
        return value >= cap;
    }
    if (condition >= 0) {
        return false;
    }
    s16 floor = (s16)FUN_00245cc0(stat);
    return floor >= value;
}

extern "C" {
/* Bit mask of the stats (8, 0x10, 0x20) whose condition is missed; true when none is. */
u8 FUN_0033f8ec(BtlStatOwner *owner, s32 first, s32 second, s32 third, s32 strict)
{
    u32 checked = 0;
    if (first != 0) {
        checked = 8;
    }
    if (second != 0) {
        checked |= 0x10;
    }
    if (third != 0) {
        checked |= 0x20;
    }
    if (strict != 0) {
        checked |= 0x38;
    }
    u32 missed = 0;
    if (checked & 8) {
        s16 value = (s16)battleGetEntryHalfword(owner->entryId, 7);
        if (!statMeetsCondition(value, first, 7) && (strict == 0 || value != 0)) {
            missed = 8;
        }
    }
    if (checked & 0x10) {
        s16 value = (s16)battleGetEntryHalfword(owner->entryId, 10);
        if (!statMeetsCondition(value, second, 10) && (strict == 0 || value != 0)) {
            missed |= 0x10;
        }
    }
    if (checked & 0x20) {
        s16 value = (s16)battleGetEntryHalfword(owner->entryId, 11);
        if (!statMeetsCondition(value, third, 11) && (strict == 0 || value != 0)) {
            missed |= 0x20;
        }
    }
    return missed == 0;
}
}
