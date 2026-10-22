/* NON_MATCHING: condition-array and combatant-status indexing use different base registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleCondition {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 unitIndex;
    /* 0x08 */ u8 unk08[8];
};
struct BattleConditionView {
    /* 0x0000 */ u8 unk0000[0xa8];
    /* 0x00a8 */ s32 unkA8;
    /* 0x00ac */ u8 unk00ac[0x2364];
    /* 0x2410 */ BattleCondition *conditions;
    /* 0x2414 */ s32 count;
};

extern "C" {
bool FUN_003ebca0(const BtlMainStateA *state)
{
    const BattleConditionView *work = (const BattleConditionView *)state;
    for (s32 index = 0; index < work->count; ++index) {
        const BattleCondition *condition = &work->conditions[index];
        if (work->unkA8) {
            if (condition->kind == 6) {
                return true;
            }
        } else {
            if (condition->kind != 4 ||
                !(state->entries[condition->unitIndex].statusFlags & 0x11c0)) {
                return true;
            }
        }
    }
    return false;
}
}
