/* NON_MATCHING: register allocation only: when clearing the UI and active flags retail loads the flags word into r1 (and hoists the pool load of DAT_00435d18 between), built uses r0 */
#include "common.h"
#include "util/CalleeContracts.h"
#include "battle/btlEditor.h"

extern "C" {

typedef struct BtlMain {
    /* 0x000 */ u8 unk000[0x760];
    /* 0x760 */ s32 unk760;
} BtlMain;

/* The battle's state block; flags at 0x44A0. */
typedef struct BtlState {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BtlState;

typedef struct BtlTask {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u32 job;
    /* 0x18 */ u8 unk18[0x10];
    /* 0x28 */ s32 frames;
} BtlTask;

#define BTL_FLAG_ACTIVE 0x100000
#define BTL_FLAG_UI     0x20000000

extern BtlMain *g_btlMain;
extern void *g_btlUiBlock;
extern u32 DAT_00435d18;

extern s32 scrRunOpcodesStub(u32 job);
extern s32 FUN_00256940(BtlMain *main, BtlState *state, s32 arg);
extern void btlReflectQueueKind34(s32 a, s32 b);
extern void battleSelectButtonHelpPreset(s32 a);

extern void battleResetCounterAndFlag(u32 arg);

/* Per-frame update of a battle task: announces itself once, and when its job reports state 2 shuts
 * the battle flags down. Counts its frames up to 0xFFFF. Always returns 0. */
s32 FUN_003c7760(BtlTask *task, BtlState *state)
{
    if ((state->flags & BTL_FLAG_ACTIVE) != 0 && (task->flags & 1) == 0) {
        if (g_btlMain->unk760 >= 0 && FUN_00256940(g_btlMain, state, 1) != 0) {
            btlReflectQueueKind34(0, 0);
        }
        FUN_00256898(1, 0);
        task->flags |= 1;
    }
    if (scrRunOpcodesStub(task->job) == 2) {
        if ((state->flags & BTL_FLAG_ACTIVE) != 0) {
            battleSelectButtonHelpPreset(0);
            if ((state->flags & BTL_FLAG_UI) != 0) {
                FUN_00242914(g_btlUiBlock, 0);
                state->flags &= ~BTL_FLAG_UI;
            }
        }
        task->state = 0;
        state->flags &= ~BTL_FLAG_ACTIVE;
        battleResetCounterAndFlag(DAT_00435d18);
    }
    if (task->frames < 0xFFFF) {
        task->frames++;
    }
    return 0;
}

} /* extern "C" */
