/* NON_MATCHING: control flow, loads and index arithmetic now match retail; register numbering differs (retail keeps the kind in r4 and pushes r7/r8 for an extra live value). */
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
        s32 kind = work->conditions[index].kind;
        if (work->unkA8) {
            if (kind != 6) {
                continue;
            }
            return true;
        } else {
            if (kind != 4 ||
                !(state->entries[work->conditions[index].unitIndex].statusFlags & 0x11c0)) {
                return true;
            }
        }
    }
    return false;
}
}
