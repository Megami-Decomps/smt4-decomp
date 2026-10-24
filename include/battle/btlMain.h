/* battle/btlMain.c: the battle system's central state. Only the fields the readable code touches
 * are named so far. */
#ifndef BATTLE_BTLMAIN_H
#define BATTLE_BTLMAIN_H

#include "common.h"
#include "battle/BattleRosterCache.h"
#include <stddef.h>

#define BTL_FLAG_NO_ENCOUNT 0x80000 /* BtlMain.flags: random encounters are suppressed */

typedef struct BtlMain {
    union {
        /* 0x000 */ u8 unk000[0x634];
        /* 0x000 */ f32 cameraPosition[3];
        struct {
            u8 unk000[0xC];
            /* 0x00C */ f32 vectors[2][3];
            /* 0x024 */ s32 value;
        } cameraEditor;
        struct {
            u8 prefix[0x2C];
            f32 scalar;
            f32 delta;
        } cameraTransition;
    };
    /* 0x634 */ u32 flags;
} BtlMain;
typedef char BtlMainCameraPositionLayoutCheck[
    offsetof(BtlMain, cameraPosition) == 0 && offsetof(BtlMain, flags) == 0x634 &&
    sizeof(BtlMain) == 0x638 ? 1 : -1];
typedef char BtlMainCameraEditorOffsetsCheck[
    offsetof(BtlMain, cameraEditor.vectors) == 0xC &&
    offsetof(BtlMain, cameraEditor.value) == 0x24 && sizeof(BtlMain) == 0x638 ? 1 : -1];
typedef char BtlMainCameraTransitionOffsetsCheck[
    offsetof(BtlMain, cameraTransition.scalar) == 0x2C &&
    offsetof(BtlMain, cameraTransition.delta) == 0x30 &&
    sizeof(BtlMain) == 0x638 ? 1 : -1];

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

struct BattleCleanupResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 id;
};
struct BattleCleanupRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 id;
    /* 0x08 */ u8 unk08[0x40];
};

struct BattleEncounterSlotA {
    s32 id;
    s16 listedId;
    s8 category;
    u8 padding[0x19];
};

/* The same block in Apocalypse. */
typedef struct BtlMainStateA {
    /* 0x0000 */ u32 job;         /* job that runs the battle */
    union {
        /* 0x0004 */ u8 unk0004[0x48];
        struct {
            u8 prefix[4];
            /* 0x0008 */ u32 job;
        } encounterTask;
        struct {
            u8 prefix[0x3C];
            /* 0x0040 */ u32 job;
        } auxiliaryTask;
        struct {
            u8 prefix[0x38];
            /* 0x003C */ u32 job;    /* btlTargetSelect calculation task */
        } targetSelect;
    };
    /* 0x004C */ u32 jobB;        /* second job */
    union {
        /* 0x0050 */ u8 unk0050[0x34];
        struct {
            u8 unk0050BeforeDrawJob[0x28];
            /* 0x0078 */ u32 drawJob;
            /* 0x007C */ u32 editorJob;
            /* 0x0080 */ u32 menuJob;
        } uiJobs;
        struct {
            u8 prefix[0x08];
            /* 0x0058 */ u32 effectJob; /* btlUnit calculation task */
        } effectTasks;
    };
    /* 0x0084 */ u8 freeOnEnd;    /* 0 = keep the block after the job ends */
    /* 0x0085 */ u8 unk0085[3];
    /* 0x0088 */ s32 unk0088;
    union {
        /* 0x008C */ u8 unk008C[0x1E34];
        /* 0x008C */ u32 phase;
        struct {
            u8 unk008C[0x80];
            /* 0x010C */ u32 statusFlags;
            /* 0x0110 */ u32 controlFlags;
            u8 unk0114[0x40];
            /* 0x0154 */ s32 mode;
        } encounter;
        struct {
            u8 prefix[0x60];
            /* 0x00EC */ s32 id;
        } encounterSelection;
        struct {
            u8 prefix[0x3A4];
            /* 0x0430 */ BattleEncounterSlotA entries[50];
        } encounterSlots;
        struct {
            /* 0x008C */ u8 unk008C[0x1C];
            /* 0x00A8 */ u32 mode;
        } commandFilter;
        struct {
            /* 0x008C */ u8 unk008C[0x18];
            /* 0x00A4 */ u32 currentSlot;
        } unitRecord;
        struct {
            u8 prefix[0x64];
            s32 secondaryId; /* 0xF0 */
            u8 unk0F4[0x54];
            u16 chance; /* 0x148 */
            u16 id; /* 0x14A */
            u16 alternateChance; /* 0x14C */
            u16 alternateId; /* 0x14E */
            u8 unk150[0x30];
            u32 group; /* 0x180 */
            u32 variant; /* 0x184 */
        } reinforcement;
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
        struct {
            /* 0x1ED8 */ u8 unk1ED8;
            /* 0x1ED9 */ u8 count;
        } flaggedRoster;
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
            u8 prefix[0x2C70];
            /* 0x4C70 */ s16 counts[2];
        } targetCapacity;
        struct {
            /* 0x2000 */ u8 unk2000BeforePending[0x410];
            /* 0x2410 */ BtlPendingCommand *commands;
            /* 0x2414 */ s32 count;
        } pendingCommands;
        struct {
            /* 0x2000 */ u8 prefix[0x418];
            /* 0x2418 */ BattleRetainedRosterEntry entries[109];
        } retainedRoster;
        struct {
            /* 0x2000 */ u8 unk2000BeforeGroup[0x356];
            /* 0x2356 */ s16 group;
        } motionGroup;
        struct {
            /* 0x2000 */ u8 unk2000BeforeBustupIndex[0x364];
            /* 0x2364 */ s32 bustupIndex;
        } negotiation;
        struct {
            /* 0x2000 */ u8 unk2000BeforeHelp[0x268];
            /* 0x2268 */ u32 context;
        } helpMessages;
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
            u8 prefix[0x25B8];
            /* 0x45B8 */ u8 blocked;
        } voiceGate;
        struct {
            /* 0x2000 */ u8 unk2000BeforeSort[0x1006];
            /* 0x3006 */ s16 indices[12];
            /* 0x301E */ s16 position;   /* the slot of `indices` acting now */
        } turnOrder;
        struct {
            /* 0x2000 */ u8 unk2000BeforeEnvironment[0x2BC];
            /* 0x22BC */ u32 *owner;
            /* 0x22C0 */ u8 unk22C0[0xC];
            /* 0x22CC */ u8 loaded;
            /* 0x22CD */ u8 ready;
        } environmentModel;
        struct {
            /* 0x2000 */ u8 prefix[0x340];
            /* 0x2340 */ u8 enabled[4];
            /* 0x2344 */ s16 actorOffsets[4];
        } reflectedSlots;
        struct {
            /* 0x2000 */ u8 unk2000BeforeResources[0x16C];
            /* 0x216C */ BattleCleanupResource* resources[42];
            /* 0x2214 */ s16 retainedIds[42];
            /* 0x2268 */ u8 unk2268[0xDD0];
            /* 0x3038 */ void* buffer;
            /* 0x303C */ u8 unk303C[0x640];
            /* 0x367C */ BattleCleanupRecord records[50];
        } resourceCleanup;
        struct {
            /* 0x2000 */ u8 unk2000BeforeRetirement[0x2554];
            /* 0x4554 */ s32 index;
            /* 0x4558 */ BattleCleanupResource *resource;
        } retiredUnit;
        struct {
            u8 prefix[0x1030];
            u32 state; /* 0x3030 */
        } reinforcementState;
        struct {
            u8 prefix[0x25B9];
            u8 chanceBonus; /* 0x45B9 */
        } reinforcementChance;
    };
    /* 0x4CD0 */ u8 unk4cd0;
    /* 0x4CD1 */ u8 unk4cd1;
    /* 0x4CD2 */ u8 unk4cd2[0x1A];
    /* 0x4CEC */ s32 specialEffect; /* effect handle for the special combatant, 0 = none */
} BtlMainStateA;
typedef char BtlMainStateAUiDrawJobOffsetCheck[
    offsetof(BtlMainStateA, uiJobs.drawJob) == 0x78 && sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAAuxiliaryTaskOffsetCheck[
    offsetof(BtlMainStateA, auxiliaryTask.job) == 0x40 ? 1 : -1];
typedef char BtlMainStateAEnvironmentModelOffsetCheck[
    offsetof(BtlMainStateA, environmentModel.owner) == 0x22BC &&
    offsetof(BtlMainStateA, environmentModel.loaded) == 0x22CC &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAReflectedSlotOffsetCheck[
    offsetof(BtlMainStateA, environmentModel.ready) == 0x22CD &&
    offsetof(BtlMainStateA, reflectedSlots.enabled) == 0x2340 &&
    offsetof(BtlMainStateA, reflectedSlots.actorOffsets) == 0x2344 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateARetainedRosterOffsetCheck[
    offsetof(BtlMainStateA, retainedRoster.entries) == 0x2418 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
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
typedef char BtlMainStateAEncounterSlotsOffsetCheck[
    sizeof(BattleEncounterSlotA) == 0x20 && offsetof(BattleEncounterSlotA, category) == 6 &&
    offsetof(BtlMainStateA, encounterSelection.id) == 0xEC &&
    offsetof(BtlMainStateA, encounterSlots.entries) == 0x430 && sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAEncounterTaskOffsetCheck[
    offsetof(BtlMainStateA, encounterTask.job) == 8 && sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateACompletionOffsetCheck[
    offsetof(BtlMainStateA, commandEntry.selection) == 0x2004 &&
    offsetof(BtlMainStateA, completion.pending) == 0x4C74 ? 1 : -1];
typedef char BtlMainStateAPendingCommandOffsetsCheck[
    offsetof(BtlMainStateA, commandFilter.mode) == 0xA8 &&
    offsetof(BtlMainStateA, pendingCommands.commands) == 0x2410 &&
    offsetof(BtlMainStateA, pendingCommands.count) == 0x2414 &&
    offsetof(BtlMainStateA, markerMasks.bits) == 0x45A8 ? 1 : -1];
typedef char BtlMainStateACurrentSlotOffsetCheck[
    offsetof(BtlMainStateA, unitRecord.currentSlot) == 0xA4 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAEditorJobOffsetCheck[
    offsetof(BtlMainStateA, uiJobs.editorJob) == 0x7C &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateANegotiationOffsetsCheck[
    offsetof(BtlMainStateA, uiJobs.menuJob) == 0x80 &&
    offsetof(BtlMainStateA, negotiation.bustupIndex) == 0x2364 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAResourceCleanupOffsetCheck[
    offsetof(BtlMainStateA, resourceCleanup.resources) == 0x216C &&
    offsetof(BtlMainStateA, resourceCleanup.retainedIds) == 0x2214 &&
    offsetof(BtlMainStateA, resourceCleanup.buffer) == 0x3038 &&
    offsetof(BtlMainStateA, resourceCleanup.records) == 0x367C &&
    sizeof(BattleCleanupRecord) == 0x48 && sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateARetiredUnitOffsets[
    offsetof(BtlMainStateA, retiredUnit.index) == 0x4554 &&
    offsetof(BtlMainStateA, retiredUnit.resource) == 0x4558 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];
typedef char BtlMainStateAHelpContextOffsetCheck[
    offsetof(BtlMainStateA, helpMessages.context) == 0x2268 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];

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
        struct {
            /* 0x090 */ u8 unk090BeforeTransition[0x78];
            /* 0x108 */ u64 mask;
        } transition;
        struct {
            u8 prefix[0x70];
            /* 0x100 */ u64 blocked;
        } voiceBlocking;
        struct {
            u8 prefix[0x40];
            /* 0x0D0 */ u64 mask;
        } partyTarget;
        struct {
            u8 prefix[0xA0];
            /* 0x130 */ u64 mask;
        } fixedScore;
    };
    /* 0x138 */ u64 suppressionMask;
    union {
        /* 0x140 */ u8 unk140[0x88];
        struct {
            /* 0x140 */ u8 unk140BeforeQueue[0x78];
            /* 0x1B8 */ u64 queuedSkillMask;
        } skillQueue;
        struct {
            /* 0x140 */ u8 unk140BeforeSelectionGate[0x50];
            /* 0x190 */ u32 words[2];
        } selectionGate;
        struct {
            u8 prefix[0x28];
            /* 0x168 */ u64 attempted;
        } voiceState;
        struct {
            u8 prefix[0x68];
            /* 0x1A8 */ u64 mask;
        } randomTarget;
        struct {
            u8 prefix[0x80];
            /* 0x1C0 */ u64 mask;
        } fullRoster;
    };
    /* 0x1C8 */ u64 suppressDefeat;
} BtlMainGlobalsA;
typedef char BtlMainGlobalsASizeCheck[sizeof(BtlMainGlobalsA) == 0x1D0 ? 1 : -1];
typedef char BtlMainPhaseTransitionOffsetsCheck[
    offsetof(BtlMainStateA, phase) == 0x8C &&
    offsetof(BtlMainGlobalsA, transition.mask) == 0x108 &&
    sizeof(BtlMainStateA) == 0x4CF0 && sizeof(BtlMainGlobalsA) == 0x1D0 ? 1 : -1];
typedef char BtlMainSelectionMaskOffsetCheck[offsetof(BtlMainGlobalsA, selectionMask) == 0x88 ? 1 : -1];
typedef char BtlMainSuppressionMaskOffsetCheck[offsetof(BtlMainGlobalsA, suppressionMask) == 0x138 ? 1 : -1];
typedef char BtlMainSuppressDefeatOffsetCheck[offsetof(BtlMainGlobalsA, suppressDefeat) == 0x1C8 ? 1 : -1];
typedef char BtlMainTurnOrderMaskOffsetCheck[offsetof(BtlMainGlobalsA, turnOrderMasks.excluded) == 0xA8 ? 1 : -1];
typedef char BtlMainCompatibilityMaskOffsetCheck[
    offsetof(BtlMainGlobalsA, compatibility.excluded) == 0xB8 ? 1 : -1];
typedef char BtlMainQueuedSkillMaskOffsetCheck[offsetof(BtlMainGlobalsA, skillQueue.queuedSkillMask) == 0x1B8 ? 1 : -1];
typedef char BtlMainSelectionGateOffsetCheck[
    offsetof(BtlMainGlobalsA, selectionGate.words) == 0x190 &&
    sizeof(BtlMainGlobalsA) == 0x1D0 ? 1 : -1];
typedef char BtlMainVoiceStateOffsetsCheck[
    offsetof(BtlMainStateA, voiceGate.blocked) == 0x45B8 &&
    offsetof(BtlMainGlobalsA, voiceBlocking.blocked) == 0x100 &&
    offsetof(BtlMainGlobalsA, voiceState.attempted) == 0x168 &&
    sizeof(BtlMainStateA) == 0x4CF0 && sizeof(BtlMainGlobalsA) == 0x1D0 ? 1 : -1];
typedef char BtlMainTargetCapacityOffsetCheck[
    offsetof(BtlMainStateA, targetCapacity.counts) == 0x4C70 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];

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
    union {
        /* 0x04 */ u8 unk04[0x28];
        struct {
            /* 0x04 */ u8 unk04BeforeCounters[8];
            /* 0x0C */ u32 unk0C;
            /* 0x10 */ u32 unk10;
        } counters;
        struct {
            /* 0x04 */ u8 unk04[0x10];
            /* 0x14 */ u32 scriptEntry;
            /* 0x18 */ u8 unk18[8];
            /* 0x20 */ s32 selectedIndex;
            /* 0x24 */ u32 kind;
            /* 0x28 */ u32 pendingChanges;
        } completion;
    };
    /* 0x2C */ u8 unk2C;
} BtlStep;
typedef char BtlStepCounterOffsetsCheck[
    sizeof(BtlStep) == 0x30 && offsetof(BtlStep, counters.unk0C) == 0xC &&
    offsetof(BtlStep, counters.unk10) == 0x10 ? 1 : -1];
typedef char BtlStepCompletionOffsetsCheck[
    offsetof(BtlStep, completion.scriptEntry) == 0x14 &&
    offsetof(BtlStep, completion.selectedIndex) == 0x20 &&
    offsetof(BtlStep, completion.kind) == 0x24 &&
    offsetof(BtlStep, completion.pendingChanges) == 0x28 &&
    sizeof(BtlStep) == 0x30 ? 1 : -1];
typedef char BtlMainStateAFlaggedRosterCountOffsetCheck[
    offsetof(BtlMainStateA, flaggedRoster.count) == 0x1ED9 ? 1 : -1];

/* A battle block reached through g_btlAux (Apocalypse). */
typedef struct BtlAuxA {
    /* 0x0000 */ u8 unk0000[0x3050];
    /* 0x3050 */ s32 unk3050;
} BtlAuxA;

extern "C" bool battlePartyIsDefeated(const BtlMainStateA *state);
typedef char BtlMainReinforcementOffsets[
    offsetof(BtlMainStateA, reinforcement.secondaryId) == 0xF0 &&
    offsetof(BtlMainStateA, reinforcement.chance) == 0x148 &&
    offsetof(BtlMainStateA, reinforcement.id) == 0x14A &&
    offsetof(BtlMainStateA, reinforcement.alternateChance) == 0x14C &&
    offsetof(BtlMainStateA, reinforcement.alternateId) == 0x14E &&
    offsetof(BtlMainStateA, reinforcement.group) == 0x180 &&
    offsetof(BtlMainStateA, reinforcement.variant) == 0x184 &&
    offsetof(BtlMainStateA, reinforcementState.state) == 0x3030 &&
    offsetof(BtlMainStateA, reinforcementChance.chanceBonus) == 0x45B9 &&
    sizeof(BtlMainStateA) == 0x4CF0 ? 1 : -1];

#endif
