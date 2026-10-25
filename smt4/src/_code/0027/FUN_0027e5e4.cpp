/* NON_MATCHING: retail retains an unused pure getter call; FSM and flag-register scheduling also differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "shard/W4_W4Match2_BtlUnits.h"

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
BtlUnitData* FUN_0027da30(BtlMainState* battle, s32 index);

// Refresh the unit state machine and mirror its status mask onto the actor entry.
void FUN_0027e5e4(BattleUnitStateWork* work)
{
    BtlUnitData* data = FUN_0027da30(btlGetMainState(), work->target);
    if (data == NULL) {
        return;
    }
    if (data->unk0FA & 0x180) {
        work->state = 3;
        work->timer = 0;
        work->step = 0;
    } else if (work->flags & 0x80) {
        work->state = 0;
        work->timer = 0;
        work->step = 0;
        if (work->actor >= 0) {
            reinterpret_cast<BtlState*>(btlGetMainState())->units[work->actor].flags &= ~0x80000;
        }
    }
    if (work->actor >= 0) {
        BtlUnitEntry* entry = &reinterpret_cast<BtlState*>(btlGetMainState())->units[work->actor];
        if (entry != NULL) {
            if (data->unk0FA & 0x3E8) {
                entry->flags |= 0x80000;
            } else {
                entry->flags &= ~0x80000;
            }
        }
    }
}
}
