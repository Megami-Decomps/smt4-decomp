/* battle/btlMain.c: the battle system's central state. Only the fields the readable code touches
 * are named so far. */
#ifndef BATTLE_BTLMAIN_H
#define BATTLE_BTLMAIN_H

#include "common.h"
#include "battle/BattleRosterCache.h"
#include <stddef.h>

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
    union {
        /* 0x010 */ u8 unk010[0x25C];
        struct {
            /* 0x010 */ u8 unk010BeforeCommand[0x258];
            /* 0x268 */ u32 currentCommand;
        } command;
    };
    /* 0x26C */ u32 auxiliaryMessage;
} BtlCommandMessageStateA;
typedef char BtlCommandMessageCurrentCommandOffsetCheck[
    offsetof(BtlCommandMessageStateA, command.currentCommand) == 0x268 &&
    sizeof(BtlCommandMessageStateA) == 0x270 ? 1 : -1];

struct BtlPendingCommand {
    /* 0x00 */ u32 kind;
    /* 0x04 */ s32 unitIndex;
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
};
typedef char BtlPendingCommandLayoutCheck[sizeof(BtlPendingCommand) == 0x10 &&
    offsetof(BtlPendingCommand, unitIndex) == 4 && offsetof(BtlPendingCommand, first) == 8 &&
    offsetof(BtlPendingCommand, second) == 0xC ? 1 : -1];

/* The same block in Apocalypse. */
typedef struct BtlMainStateA {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    /* 0x0004 */ u8 unk0004[0x48];
    /* 0x004C */ u32 jobB;        /* second job */
    /* 0x0050 */ u8 unk0050[0x34];
    /* 0x0084 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0085 */ u8 unk0085[3];
    /* 0x0088 */ s32 unk0088;
    union {
        /* 0x008C */ u8 unk008C[0x1E34];
        struct {
            u8 unk008C[0x80];
            /* 0x010C */ u32 statusFlags;
            /* 0x0110 */ u32 controlFlags;
            u8 unk0114[0x40];
            /* 0x0154 */ s32 mode;
        } encounter;
        struct {
            /* 0x008C */ u8 unk008C[0x1C];
            /* 0x00A8 */ u32 mode;
        } commandFilter;
    };
    /* 0x1EC0 */ s16 unk1EC0;
    /* 0x1EC2 */ u8 unk1EC2[0x12];
    union {
        /* 0x1ED4 */ u32 unk1ED4;
        /* 0x1ED4 */ BattleRosterRecordA *roster;
    };
    union {
        /* 0x1ED8 */ u8 unk1ed8[0x124];
        struct {
            u8 prefix[0x120];
            /* 0x1FF8 */ struct BattleRosterCacheEntry *entries;
        } rosterCache;
        struct {
            u32 unk1ed8;
            /* 0x1EDC */ s32 markerTimer;
        } drawCounters;
        struct {
            u8 prefix[8];
            /* 0x1EE0 */ BattleRosterCacheSnapshotA saved;
        } rosterSnapshot;
    };
    /* 0x1FFC */ BtlCombatantEntryA* entries;
    union {
        /* 0x2000 */ u8 unk2000[0x2cd0];
        /* 0x2000 */ u32 commandWords[4]; /* pending command is low/high words [2]/[3] */
        /* 0x2000 */ BtlCommandMessageStateA commandMessage;
        struct {
            u8 prefix[4];
            /* 0x2004 */ s16 selection;
        } commandEntry;
        struct {
            u8 prefix[0x2C74];
            /* 0x4C74 */ u16 pending[2];
        } completion;
        struct {
            /* 0x2000 */ u8 unk2000BeforePending[0x410];
            /* 0x2410 */ BtlPendingCommand *commands;
            /* 0x2414 */ s32 count;
        } pendingCommands;
        struct {
            /* 0x2000 */ u8 unk2000BeforeGroup[0x356];
            /* 0x2356 */ s16 group;
        } motionGroup;
        struct {
            u8 unk2000[0x25a0];
            /* 0x45A0 */ u32 words[2];
        } stateFlags;
        struct {
            u8 unk2000[0x25a0];
            /* 0x45A0 */ u64 bits;
        } stateFlags64;
        struct {
            u8 unk2000[0x25a8];
            union {
                /* 0x45A8 */ u32 words[2];
                /* 0x45A8 */ u64 bits;
            };
        } markerMasks;
        struct {
            u8 unk2000[0x25BB];
            /* 0x45BB */ u8 disabled;
        } encounterGate;
        struct {
            /* 0x2000 */ u8 unk2000BeforeSort[0x1006];
            /* 0x3006 */ s16 indices[12];
            /* 0x301E */ s16 position;   /* the slot of `indices` acting now */
        } turnOrder;
    };
    /* 0x4CD0 */ u8 unk4cd0;
    /* 0x4CD1 */ u8 unk4cd1;
    /* 0x4CD2 */ u8 unk4cd2[0x1A];
    /* 0x4CEC */ s32 specialEffect; /* effect handle for the special combatant, 0 = none */
} BtlMainStateA;
typedef char BtlMainStateARosterCacheOffsetCheck[
    offsetof(BtlMainStateA, rosterCache.entries) == 0x1FF8 ? 1 : -1];

typedef char BtlMainStateARosterSnapshotOffsetCheck[
    offsetof(BtlMainStateA, rosterSnapshot.saved) == 0x1EE0 ? 1 : -1];
typedef char BtlMainStateASpecialEffectOffsetCheck[
    offsetof(BtlMainStateA, specialEffect) == 0x4CEC && offsetof(BtlMainStateA, unk0088) == 0x88 &&
    offsetof(BtlMainStateA, entries) == 0x1FFC && offsetof(BtlMainStateA, turnOrder.position) == 0x301E &&
    offsetof(BtlMainStateA, unk1EC0) == 0x1EC0 && offsetof(BtlMainStateA, motionGroup.group) == 0x2356 &&
    offsetof(BtlMainStateA, stateFlags64.bits) == 0x45A0 ? 1 : -1];
typedef char BtlMainStateAEncounterOffsetCheck[
    offsetof(BtlMainStateA, encounter.statusFlags) == 0x10C &&
    offsetof(BtlMainStateA, encounter.controlFlags) == 0x110 &&
    offsetof(BtlMainStateA, encounter.mode) == 0x154 &&
    offsetof(BtlMainStateA, encounterGate.disabled) == 0x45BB &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateACompletionOffsetCheck[
    offsetof(BtlMainStateA, commandEntry.selection) == 0x2004 &&
    offsetof(BtlMainStateA, completion.pending) == 0x4C74 ? 1 : -1];
typedef char BtlMainStateAPendingCommandOffsetsCheck[
    offsetof(BtlMainStateA, commandFilter.mode) == 0xA8 &&
    offsetof(BtlMainStateA, pendingCommands.commands) == 0x2410 &&
    offsetof(BtlMainStateA, pendingCommands.count) == 0x2414 &&
    offsetof(BtlMainStateA, markerMasks.bits) == 0x45A8 ? 1 : -1];

/* Party entries share a 300-byte stride; the checked sub-object begins at 0x68. */
typedef struct BtlPartySubA {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 unk62;
} BtlPartySubA;

typedef struct BtlPartyEntryA {
    /* 0x000 */ u8 unk000[0x68];
    /* 0x068 */ BtlPartySubA sub;
    /* 0x0CC */ u8 unk0CC[0x60];
} BtlPartyEntryA;

typedef struct BtlPartyBlockA {
    /* 0x0000 */ u8 unk0000[0x1CA3];
    /* 0x1CA3 */ u8 count;
} BtlPartyBlockA;

/* Known prefix of the Apocalypse module global, including combatant and survival masks. */
typedef struct BtlMainGlobalsA {
    /* 0x00 */ BtlMainStateA *state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ BtlPartyBlockA *party;
    /* 0x10 */ void *shared1;
    union {
        /* 0x14 */ u32 unk14;
        /* 0x14 */ void *partySubject;
    };
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
    /* 0x80 */ u64 exclusionMask;
    /* 0x88 */ u64 selectionMask;
    union {
        /* 0x090 */ u8 unk090[0xA8];
        struct {
            /* 0x090 */ u8 unk090BeforeTurnOrder[0x18];
            /* 0x0A8 */ u64 excluded;
        } turnOrderMasks;
        struct {
            /* 0x090 */ u8 unk090[0x28];
            /* 0x0B8 */ u64 excluded;
        } compatibility;
    };
    /* 0x138 */ u64 suppressionMask;
    union {
        /* 0x140 */ u8 unk140[0x88];
        struct {
            /* 0x140 */ u8 unk140BeforeQueue[0x78];
            /* 0x1B8 */ u64 queuedSkillMask;
        } skillQueue;
    };
    /* 0x1C8 */ u64 suppressDefeat;
} BtlMainGlobalsA;
typedef char BtlMainGlobalsASizeCheck[sizeof(BtlMainGlobalsA) == 0x1D0 ? 1 : -1];
typedef char BtlMainSelectionMaskOffsetCheck[offsetof(BtlMainGlobalsA, selectionMask) == 0x88 ? 1 : -1];
typedef char BtlMainSuppressionMaskOffsetCheck[offsetof(BtlMainGlobalsA, suppressionMask) == 0x138 ? 1 : -1];
typedef char BtlMainSuppressDefeatOffsetCheck[offsetof(BtlMainGlobalsA, suppressDefeat) == 0x1C8 ? 1 : -1];
typedef char BtlMainTurnOrderMaskOffsetCheck[offsetof(BtlMainGlobalsA, turnOrderMasks.excluded) == 0xA8 ? 1 : -1];
typedef char BtlMainCompatibilityMaskOffsetCheck[
    offsetof(BtlMainGlobalsA, compatibility.excluded) == 0xB8 ? 1 : -1];
typedef char BtlMainQueuedSkillMaskOffsetCheck[offsetof(BtlMainGlobalsA, skillQueue.queuedSkillMask) == 0x1B8 ? 1 : -1];

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
