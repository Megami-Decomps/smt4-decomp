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

struct BtlActionRecord;

/* The battle's state block, kept by a module global (Shin Megami Tensei IV layout). */
typedef struct BtlMainState {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    union {
        /* 0x0004 */ u8 unk0004[0x28];
        struct {
            u8 unk0004[0x18];
            /* 0x001C */ u32 job;
        } targetSelect;
    };
    /* 0x002C */ u32 jobB;        /* second job */
    /* 0x0030 */ u8 unk0030[0x30];
    /* 0x0060 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0061 */ u8 unk0061[0x1E37];
    union {
        /* 0x1E98 */ u32 unk1E98;
        /* 0x1E98 */ BtlActionRecord* actions;
    };
} BtlMainState;

struct BtlCombatantEntryA;
struct BattleRosterRecordA;

/* The command block and the auxiliary message it accompanies. */
typedef struct BtlCommandMessageStateA {
    /* 0x000 */ u32 commandWords[4];
    /* 0x010 */ u8 unk010[0x25C];
    /* 0x26C */ u32 auxiliaryMessage;
} BtlCommandMessageStateA;

/* The same block in Apocalypse. */
typedef struct BtlMainStateA {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    /* 0x0004 */ u8 unk0004[0x48];
    /* 0x004C */ u32 jobB;        /* second job */
    /* 0x0050 */ u8 unk0050[0x34];
    /* 0x0084 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0085 */ u8 unk0085[0x1E4F];
    union {
        /* 0x1ED4 */ u32 unk1ED4;
        /* 0x1ED4 */ BattleRosterRecordA *roster;
    };
    union {
        /* 0x1ED8 */ u8 unk1ed8[0x124];
        struct {
            u32 unk1ed8;
            /* 0x1EDC */ s32 markerTimer;
        } drawCounters;
    };
    /* 0x1FFC */ BtlCombatantEntryA* entries;
    union {
        /* 0x2000 */ u8 unk2000[0x2cd0];
        /* 0x2000 */ u32 commandWords[4]; /* pending command is low/high words [2]/[3] */
        /* 0x2000 */ BtlCommandMessageStateA commandMessage;
        struct {
            u8 unk2000[0x25a0];
            /* 0x45A0 */ u32 words[2];
        } stateFlags;
        struct {
            u8 unk2000[0x25a8];
            /* 0x45A8 */ u32 words[2];
        } markerMasks;
    };
    /* 0x4CD0 */ u8 unk4cd0;
    /* 0x4CD1 */ u8 unk4cd1;
} BtlMainStateA;

/* The module global (Apocalypse): the state block's pointer and two words beside it. */
typedef struct BtlMainGlobalsA {
    /* 0x00 */ BtlMainStateA *state;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[0x0C];
    /* 0x24 */ u32 unk24;
    union {
        /* 0x28 */ u8 unk28[0x38];
        struct {
            u8 unk28[0x30];
            /* 0x58 */ u64 required;
        } combatantMasks;
    };
    /* 0x60 */ u64 actorCategories[4];
} BtlMainGlobalsA;

/* The same state in Apocalypse: active combatant mask and encounter flags. */
typedef struct BtlMainA {
    union {
        /* 0x000 */ u8 unk000[0x64C];
        struct {
            /* 0x000 */ u8 unk000BeforeMask[0x130];
            /* 0x130 */ u32 words[2];
        } activeMask;
    };
    /* 0x64C */ u32 flags;
} BtlMainA;

/* A step block the battle updates, as FUN_004d7fe4 sees it (Apocalypse). */
typedef struct BtlStep {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ u8 unk2C;
} BtlStep;

/* A battle block reached through g_btlAux (Apocalypse). */
typedef struct BtlAuxA {
    /* 0x0000 */ u8 unk0000[0x3050];
    /* 0x3050 */ s32 unk3050;
} BtlAuxA;

extern "C" bool battlePartyIsDefeated(const BtlMainStateA *state);

#endif
