/* NON_MATCHING: one branch target: when the actor is negative after clearing its flag, retail branches back to the
 * final block's actor test where this build jumps straight to the return. */
#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlGlobals.h"

struct BattleUnitStateWork {
    u8 unk00[0x48];
    s32 state;
    s32 timer;
    u32 flags;
    u8 unk54[0xC];
    s16 actor;
    s16 target;
    u8 unk64[0x3C];
    s32 step;
};
typedef char BattleUnitStateWorkOffsets[offsetof(BattleUnitStateWork, state) == 0x48 &&
    offsetof(BattleUnitStateWork, actor) == 0x60 && offsetof(BattleUnitStateWork, step) == 0xA0 ? 1 : -1];

extern "C" {

/* Refreshes the unit state machine and mirrors its status mask onto the actor entry. */
void FUN_0027e5e4(BattleUnitStateWork* work)
{
    BtlUnitData* data = btlFindEntryBlockByMemberId(btlGetMainState(), work->target);
    if (data == NULL) {
        return;
    }
    if (data->statusFlags & 0x180) {
        btlGetMainState(); /* retail calls it here and ignores the result */
        work->state = 3;
        work->timer = 0;
        work->step = 0;
    } else if (work->flags & 0x80) {
        work->state = 0;
        work->timer = 0;
        work->step = 0;
        if (work->actor >= 0) {
            btlGetMainState()->entries[work->actor].flagMask &= ~0x80000ULL;
        }
    }
    if (work->actor >= 0) {
        BtlEntry* entry = &btlGetMainState()->entries[work->actor];
        if (entry != NULL) {
            if (data->statusFlags & 0x3E8) {
                entry->flagMask |= 0x80000;
            } else {
                entry->flagMask &= ~0x80000ULL;
            }
        }
    }
}
}
