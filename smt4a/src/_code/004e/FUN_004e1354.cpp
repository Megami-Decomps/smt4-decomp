/* NON_MATCHING: register allocation/scheduling only: retail loads the actor's 64-bit flags with one ldm and orders the script-record address computation differently */
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BattleTiming.h"

extern "C" {

struct BtlActor {
    /* 0x0000 */ u8 unk0000[0xA4];
    /* 0x00A4 */ s32 slot;
    /* 0x00A8 */ s32 uiState;
    /* 0x00AC */ u8 unk00AC[0x10C - 0xAC];
    /* 0x010C */ u32 flags10C;
    /* 0x0110 */ u8 unk0110[0x1ED4 - 0x110];
    /* 0x1ED4 */ u32 unk1ED4;
    /* 0x1ED8 */ u8 unk1ED8[0x45A0 - 0x1ED8];
    /* 0x45A0 */ u64 flags;
};

struct BtlActorRef {
    /* 0x00 */ BtlActor *actor;
};

struct BtlSkill {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
};

struct BtlCommand {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x20];
    /* 0x024 */ BtlSkill *skill;
    /* 0x028 */ u8 unk028[0x56C - 0x28];
    /* 0x56C */ s32 frame;
    /* 0x570 */ u8 unk570[0x1230 - 0x570];
    /* 0x1230 */ u32 phase;
};

/* The per-actor script record stride is 0x495 words; state is its tag byte. */
struct BtlScriptRecord {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 state;
};

extern BtlActionGlobals g_btlAction; /* 0x571138 */
extern u32 g_btlAux;   /* 0x573808 */
extern u32 g_btlEvent; /* 0x573898 */
extern u32 g_btlActionReflect; /* 0x5712f0 */

s32 chainCountIdUnflagged(u32 chain, BtlCommand *command);
s32 isEntryUsable(u32 event);
s32 FUN_004e753c(BtlActorRef *ref, BtlCommand *command, s32 mode);
void FUN_004e81bc(BtlActorRef *ref, BtlCommand *command, s32 mode);
void FUN_004f8f08(u32 block);
void FUN_004fbeac(s32, BtlCommand *, s32, s32, s32);
void FUN_004fe764(s32, BtlCommand *, u32, s32, s32);

static __inline BtlScriptRecord *btlScriptRecordGet(BtlActorRef *ref)
{
    return (BtlScriptRecord *)((u32 *)g_btlAction.data + ref->actor->slot * 0x495);
}

/* Steps the actor's skill start: runs the pre/post handlers and marks the actor's script record state. */
u32 FUN_004e1354(BtlActorRef *ref, BtlCommand *command)
{
    BtlActor *actor = ref->actor;
    s32 handled;

    if (!(actor->flags & g_btlAction.interruptMask) && (actor->flags10C & 0x40000) && !(command->flags & 0x2000)) {
        if (chainCountIdUnflagged(g_btlActionReflect, command) != 0) {
            return 0;
        }
        btlScriptRecordGet(ref)->state = 1;
        FUN_004f8f08(g_btlAux);
        return 1;
    }
    if (actor->uiState != 4) {
        FUN_004e81bc(ref, command, 0);
        handled = FUN_004e753c(ref, command, 0);
        if (command->frame == 0x20) {
            FUN_004fe764(0, command, ref->actor->unk1ED4, 9, 0xb);
        }
        if (command->frame == 0x25) {
            FUN_004fbeac(0, command, 0, 2, 0);
        }
        command->frame++;
        if (chainCountIdUnflagged(g_btlActionReflect, command) > 0) {
            return 0;
        }
        if (handled != 0) {
            command->phase = 0;
            btlScriptRecordGet(ref)->state = 0x1d;
            command->flags &= ~0x2000;
            return 1;
        }
        if (ref->actor->uiState != 4) {
            return 0;
        }
    }
    if (isEntryUsable(g_btlEvent) == 0) {
        FUN_004e81bc(ref, command, 1);
        handled = FUN_004e753c(ref, command, 1);
        command->frame++;
        if (chainCountIdUnflagged(g_btlActionReflect, command) <= 0 && handled != 0) {
            command->phase = 0x1e;
            btlCommandExtendAnimationWindow(ref, command, command->skill->animation, 0, 0x11, 0x11);
            btlScriptRecordGet(ref)->state = 0x1d;
            command->flags &= ~0x2000;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
