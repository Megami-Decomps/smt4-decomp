/* NON_MATCHING: register allocation: retail keeps the old and new values in r2/r3 across the calls to FUN_00245cc0/FUN_0023dcfc (they are small functions of the same source file whose register use armcc knew), the build saves them in callee-saved registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

/* A battle entry; only its array of halfword stats at +0x72 is named. */
struct BtlStatEntry {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ s16 stats[1];
};

extern "C" {

BtlStatEntry *btlMainFindEntryByListedId(BtlMainState *battle, s32 id);
s32 FUN_00245cc0(s32 stat);
s32 FUN_0023dcfc(s32 stat);

/* Changes stat `stat` of the battle entry with listed id `id` by `delta`, clamped to the stat's range (the entry is left alone when `preview` is set); returns the change. */
s32 FUN_002550d8(s32 id, s32 stat, s32 delta, s32 preview)
{
    BtlStatEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry == NULL) {
        return 0;
    }
    s32 old = entry->stats[stat];
    s32 value = old + delta;

    if (value < FUN_00245cc0(stat)) {
        value = FUN_00245cc0(stat);
    } else if (value > FUN_0023dcfc(stat)) {
        value = FUN_0023dcfc(stat);
    }
    if (preview == 0) {
        entry->stats[stat] = value;
    }
    return value - old;
}

} /* extern "C" */
