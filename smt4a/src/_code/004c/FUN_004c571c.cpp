/* NON_MATCHING: register allocation: retail keeps the old and new values in r2/r3 across the calls to FUN_004c53fc/btlGetPropertyMaximum (small functions of the same source file whose register use armcc knew); the build saves them in callee-saved registers. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* A battle entry; only its array of word properties at +0x74 is named. */
struct BtlPropertyEntry {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 properties[1];
};

extern "C" {

BtlPropertyEntry *FUN_003f0e20(BtlMainStateA *battle, u32 id);
s32 btlGetPropertyMaximum(s32 property);
s32 FUN_004c53fc(s32 property);

/* Changes property `property` of the battle entry `id` by `delta`, clamped to its range (left alone when `preview` is set); returns the change. */
s32 FUN_004c571c(u32 id, s32 property, s32 delta, s32 preview)
{
    BtlPropertyEntry *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry == NULL) {
        return 0;
    }
    s32 old = entry->properties[property];
    s32 value = old + delta;

    if (value < FUN_004c53fc(property)) {
        value = FUN_004c53fc(property);
    } else if (value > btlGetPropertyMaximum(property)) {
        value = btlGetPropertyMaximum(property);
    }
    if (preview == 0) {
        entry->properties[property] = value;
    }
    return value - old;
}

} /* extern "C" */
