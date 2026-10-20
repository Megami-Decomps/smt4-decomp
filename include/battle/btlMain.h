/* battle/btlMain.c: the battle system's central state. Only the fields the readable code touches
 * are named so far. */
#ifndef BATTLE_BTLMAIN_H
#define BATTLE_BTLMAIN_H

#include "common.h"

#define BTL_FLAG_NO_ENCOUNT 0x80000 /* BtlMain.flags: random encounters are suppressed */

typedef struct BtlMain {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
} BtlMain;

/* The battle's state block, kept by a module global (Shin Megami Tensei IV layout). */
typedef struct BtlMainState {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    /* 0x0004 */ u8 unk0004[0x28];
    /* 0x002C */ u32 jobB;        /* second job */
    /* 0x0030 */ u8 unk0030[0x30];
    /* 0x0060 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0061 */ u8 unk0061[0x1E37];
    /* 0x1E98 */ u32 unk1E98;
} BtlMainState;

/* The same block in Apocalypse. */
typedef struct BtlMainStateA {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    /* 0x0004 */ u8 unk0004[0x48];
    /* 0x004C */ u32 jobB;        /* second job */
    /* 0x0050 */ u8 unk0050[0x34];
    /* 0x0084 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0085 */ u8 unk0085[0x1E4F];
    /* 0x1ED4 */ u32 unk1ED4;
} BtlMainStateA;

/* The module global (Apocalypse): the state block's pointer and two words beside it. */
typedef struct BtlMainGlobalsA {
    /* 0x00 */ BtlMainStateA *state;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[0x0C];
    /* 0x24 */ u32 unk24;
} BtlMainGlobalsA;

/* The same state in Apocalypse; only the flags word is named. */
typedef struct BtlMainA {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 flags;
} BtlMainA;

/* A step block the battle updates, as FUN_004d7fe4 sees it (Apocalypse). */
typedef struct BtlStep {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ u8 unk2C;
} BtlStep;

/* A battle block reached through DAT_00573808 (Apocalypse). */
typedef struct BtlAuxA {
    /* 0x0000 */ u8 unk0000[0x3050];
    /* 0x3050 */ s32 unk3050;
} BtlAuxA;

#endif
