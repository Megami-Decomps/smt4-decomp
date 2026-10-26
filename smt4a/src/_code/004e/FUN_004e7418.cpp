/* NON_MATCHING: instruction scheduling of the final record address only (retail loads the g_btlAction record base before the camera flag update, the build loads the constant 0x495 and the stored 0x1D earlier). */
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BattleTiming.h"

extern "C" {

typedef struct BtlActor {
    /* 0x0000 */ u8 unk0000[0xA4];
    /* 0x00A4 */ s32 slot;
    /* 0x00A8 */ s32 uiState;
    /* 0x00AC */ u8 unk00AC[0x1F56];
    /* 0x2002 */ s16 memberCount;
} BtlActor;

typedef struct BtlActorRef {
    /* 0x00 */ BtlActor *actor;
} BtlActorRef;

typedef struct BtlSkill {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
    /* 0x6C */ u32 hitFlags;
} BtlSkill;

typedef struct BtlCommand {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 target;
    /* 0x24 */ BtlSkill *skill;
} BtlCommand;

struct BtlActorScriptState {
    u8 unk00[9];
    u8 state;
};


typedef struct BtlCameraBlock {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 flags;
} BtlCameraBlock;

extern BtlActionGlobals g_btlAction;  /* 0x571138 */
extern BtlCameraBlock *g_btlCamera;   /* 0x571508 */
extern u32 g_btlEvent;                /* 0x573898 */
extern u32 g_btlUiBlock;              /* 0x57a9c8 */

extern int isEntryUsable(u32 event);
extern int FUN_004ab734(u32 block);
extern int btlReflectCreateKind2e(int a, BtlCommand *cmd, u32 target, int b);
extern int FUN_004fde5c(int a, BtlCommand *cmd, BtlSkill *skill, int b, int c, int d);

/* Runs the actor's skill start: picks the UI state, plays the skill animation and marks the actor's record as state 0x1D. */
u32 FUN_004e7418(BtlActorRef *ref, BtlCommand *cmd)
{
    BtlActor *actor;
    BtlActorScriptState *record;

    if (isEntryUsable(g_btlEvent) != 0) {
        return 0;
    }
    actor = ref->actor;
    if (actor->uiState != 13) {
        if (actor->memberCount - 1 <= 0) {
            actor->uiState = 1;
        } else {
            actor->uiState = 0;
            FUN_004ab734(g_btlUiBlock);
        }
    }
    if ((cmd->skill->hitFlags & 0xFF) != 0) {
        FUN_004fde5c(0, cmd, cmd->skill, 0, 0, 0);
    }
    btlReflectCreateKind2e(0x1E, cmd, cmd->target, 1);
    btlCommandExtendAnimationWindow(ref, cmd, cmd->skill->animation, 0, 0x1E, 0x1E);
    g_btlCamera->flags &= ~0x2000000;
    u32 *records = static_cast<u32 *>(g_btlAction.data);
    s32 slot = ref->actor->slot;
    record = reinterpret_cast<BtlActorScriptState *>(records + slot * 0x495);
    record->state = 0x1D;
    return 1;
}

} /* extern "C" */
