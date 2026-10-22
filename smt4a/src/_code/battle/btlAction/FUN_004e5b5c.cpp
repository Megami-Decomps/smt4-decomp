/* NON_MATCHING: retail keeps the random pick in r3 across btlUnitGet (same-file callee register knowledge) and holds context/count in r4/r5 the other way round. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BtlActionContext {
    /* 0x00 */ BtlMainStateA *battle;
};

extern "C" {
extern u64 DAT_00571190;

s16 FUN_004e9ae8(BtlActionContext *context, s32 *candidates, s32 count, u32 mode);
s32 lcgRandomRange(u16 limit);
u8 *btlUnitGet(BtlActionContext *context);

/* Marks one random combatant among those matching the mask as chosen in the acting unit's selection flags. */
void FUN_004e5b5c(BtlActionContext *context)
{
    s32 candidates[110];
    s32 count = 0;
    BtlMainStateA *battle = context->battle;

    for (s32 i = 0; i < 109; i++) {
        if ((battle->entries[i].flags & DAT_00571190) != 0) {
            candidates[count++] = battle->entries[i].indexView.selectionIndex;
        }
    }
    s32 pick = lcgRandomRange(FUN_004e9ae8(context, candidates, count, 0) - 1);
    btlUnitGet(context)[candidates[pick] + 0x38] = 1;
}

} /* extern "C" */
