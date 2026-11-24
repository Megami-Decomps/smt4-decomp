/* NON_MATCHING: only the actor pointer and slot-stride constant swap r0/r1 in the final action-slot lookup. */
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "battle/BtlActionSlots.h"
#include "battle/BtlUiGlobal.h"

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

enum {
    BTL_SKILL_ANIMATION_WINDOW = 0x1E,
    BTL_SKILL_FOLLOWUP_COMMAND = 0x1D,
    BTL_CAMERA_ACTION_PENDING = 0x2000000
};

extern u32 g_btlEvent;                /* 0x573898 */

extern int isEntryUsable(u32 event);
extern int btlUiRefreshMenuPanel(BtlUiA *block);
extern int btlReflectCreateKind2e(int a, BtlCommand *cmd, u32 target, int b);
extern int FUN_004fde5c(int a, BtlCommand *cmd, BtlSkill *skill, int b, int c, int d);

/* Runs the actor's skill start: picks the UI state, plays the skill animation and marks the actor's record as state 0x1D. */
u32 btlStartSkillAction(BtlActorRef *ref, BtlCommand *cmd)
{
    BtlActor *actor;

    if (isEntryUsable(g_btlEvent) != 0) {
        return 0;
    }
    actor = ref->actor;
    if (actor->uiState != 13) {
        if (actor->memberCount - 1 <= 0) {
            actor->uiState = 1;
        } else {
            actor->uiState = 0;
            btlUiRefreshMenuPanel(g_btlUiBlock);
        }
    }
    if ((cmd->skill->hitFlags & 0xFF) != 0) {
        FUN_004fde5c(0, cmd, cmd->skill, 0, 0, 0);
    }
    btlReflectCreateKind2e(0x1E, cmd, cmd->target, 1);
    btlCommandExtendAnimationWindow(ref, cmd, cmd->skill->animation, 0,
                                    BTL_SKILL_ANIMATION_WINDOW, BTL_SKILL_ANIMATION_WINDOW);
    g_btlCamera->flags &= ~BTL_CAMERA_ACTION_PENDING;
    btlActionGetSlot(ref->actor->slot)->unit.command = BTL_SKILL_FOLLOWUP_COMMAND;
    return 1;
}

} /* extern "C" */
