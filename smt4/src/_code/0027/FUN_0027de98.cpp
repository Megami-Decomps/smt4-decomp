/* NON_MATCHING: The action kind loads inside each mode branch instead of before it, changing saved registers and list addressing. */
#include "shard/W4_W4Match2_BtlUnits.h"

namespace {
struct BattleListedAction {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 unitIndex;
    /* 0x08 */ u8 unk08[8];
};
struct BattleActionListState {
    /* 0x0000 */ u8 unk0000[0x88];
    /* 0x0088 */ s32 mode;
    /* 0x008C */ u8 unk008C[0x1F34];
    /* 0x1FC0 */ BtlEntry *units;
    /* 0x1FC4 */ u8 unk1FC4[0x34C];
    /* 0x2310 */ BattleListedAction *actions;
    /* 0x2314 */ s32 count;
};
}
extern "C" {
/* Tests queued action kinds and, in the first mode, their units' required flag group. */
u32 FUN_0027de98(BattleActionListState *state)
{
    if (state->count > 0) {
        s32 index = 0;
        do {
            BattleListedAction *action = &state->actions[index];
            if (state->mode == 0) {
                if (action->kind != 4) {
                    return 1;
                }
                if ((state->units[action->unitIndex].groupMask & 0x1C0) == 0) {
                    return 1;
                }
            } else if (action->kind == 5) {
                return 1;
            }
            ++index;
        } while (index < state->count);
    }
    return 0;
}
}
