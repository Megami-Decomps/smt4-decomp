#ifndef SHARD_W5_W5MATCH2_UNITEWORK_H
#define SHARD_W5_W5MATCH2_UNITEWORK_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match3_ScrollSelection.h"

class RegisteredHandle;

/* A demon model shown in the fusion preview. */
struct UnitePreviewModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};

struct UnitePairEntry {
    /* 0x00 */ u32 packedIds;
    /* 0x04 */ u32 unk04;
};

struct UnitePairEntryIV {
    /* 0x00 */ u32 firstId : 15;
    /* 0x00 */ u32 secondId : 15;
    /* 0x00 */ u32 firstType : 2;
    /* 0x04 */ u32 secondType : 2;
    /* 0x04 */ u32 resultId : 15;
    /* 0x04 */ u32 unknown : 15;
};
typedef char UnitePairEntryIVSizeCheck[sizeof(UnitePairEntryIV) == 8 ? 1 : -1];

struct UniteWork {
    union {
        /* 0x0000 */ u8 unk0000[0x400];
        /* 0x0000 */ void *context;
        struct {
            /* 0x0000 */ u8 unk0000[0x1C8];
            /* 0x01C8 */ u8 timer[1];
        } event;
        struct {
            /* 0x0000 */ u8 unk0000[0x3FC];
            /* 0x03FC */ u32 frame;
        } transition;
        struct {
            /* 0x0000 */ u8 unk0000[0x15C];
            /* 0x015C */ f32 amount;
        } optionPulse;
    };
    /* 0x0400 */ s32 state;
    /* 0x0404 */ union {
        /* 0x0404 */ u8 unk0404[0x30];
        struct {
            /* 0x0404 */ u8 unk0404[0x1c];
            s8 mode; /* 0x420 */
            /* 0x421 */ u8 unk0421[0xB];
            /* 0x42C */ u32 scriptProcess;
            /* 0x430 */ u8 active;
            /* 0x431 */ u8 unk0431[3];
        } menu;
        struct {
            /* 0x0404 */ s32 previous;
            /* 0x0408 */ s32 saved;
        } history;
        struct {
            u8 prefix404[0x14];
            s32 cost;
        } fusionPriceIV;
    };
    /* 0x0434 */ u32 request;
    /* 0x0438 */ union {
        /* 0x0438 */ u8 unk0438[0x9018];
        struct {
            /* 0x0438 */ u8 unk0438BeforeSelection[0x8A50];
            /* 0x8E88 */ s16 selectedIndex;
        } selectionA;
        struct {
            /* 0x0438 */ u8 unk0438BeforePairs[0xf80];
            /* 0x13B8 */ UnitePairEntryIV pairs[1];
            /* 0x13C0 */ u8 unk13c0[0x5472];
            /* 0x6832 */ u16 sortedPairs[1501]; /* pair indices being sorted */
            /* 0x73EC */ u32 sortedCount;
            /* 0x73F0 */ u32 pairScores[1];     /* indexed by pair index */
        } pairSort;
        struct {
            /* 0x438 */ u8 unk0438[0x40];
            /* 0x478 */ s32 pendingRequest;
        } scriptIV;
        struct {
            /* 0x438 */ u8 unk0438[0x50];
            /* 0x488 */ s32 pendingRequest;
        } scriptA;
        struct {
            /* 0x0438 */ u8 unk0438[0x54];
            /* 0x048C */ u32 soundChannel;
            /* 0x0490 */ u8 unk0490[0x8C14];
            /* 0x90A4 */ u32 unk90A4;
            /* 0x90A8 */ u8 unk90A8[0x108];
            /* 0x91B0 */ u32 unk91B0;
        } returnState;
        struct {
            /* 0x0438 */ u8 unk0438[0x8dd4];
            RegisteredHandle *handle; /* 0x920c */
            /* 0x9210 */ u8 unk9210[0xac];
            u16 selectedId; /* 0x92bc */
        } registered;
        struct {
            /* 0x0438 */ u8 unk0438[0xf80];
            UnitePairEntry pairs[1]; /* 0x13b8 */
            /* 0x13C0 */ u8 unk13c0[0x8090];
        } pairList;
        struct {
            /* 0x0438 */ u8 unk0438[0x5e68];
            union {
                u8 ids[0x3f8]; /* 0x62a0, raw buffer view */
                u16 devilIds[508]; /* 0x62a0 */
            };
            u32 count;    /* 0x6698 */
            /* 0x669C */ u8 unk669c[0x2db4];
        } candidates;
        struct {
            /* 0x0438 */ u8 unk0438[0x19c];
            u16 demons[1201]; /* 0x5d4 */
            u16 races[65]; /* 0xf36 */
            u16 skills[501]; /* 0xfb8 */
            /* 0x13A2 */ u16 unk13a2;
            u32 demonCount; /* 0x13a4 */
            u32 raceCount; /* 0x13a8 */
            u32 skillCount; /* 0x13ac */
        } catalogA;
        struct {
            /* 0x0438 */ u8 unk0438[0x188];
            u16 demons[1201]; /* 0x5c0 */
            u16 races[56]; /* 0xf22 */
            u16 skills[501]; /* 0xf92 */
            u32 demonCount; /* 0x137c */
            u32 raceCount; /* 0x1380 */
            u32 skillCount; /* 0x1384 */
        } catalogIV;
        struct {
            /* 0x0438 */ u8 unk0438[0xF58];
            /* 0x1390 */ UnitePairEntryIV pairs[1];
        } pairListIV;
        struct {
            /* 0x0438 */ u8 unk0438BeforeScores[0x7468];
            /* 0x78A0 */ s32 scores[1];
        } pairScoresIV;
        struct {
            /* 0x0438 */ u8 unk0438BeforePairs[0xF58];
            /* 0x1390 */ UnitePairEntryIV pairs[1];
            /* 0x1398 */ u8 unk1398[0x594A];
            /* 0x6CE2 */ u16 sortedPairs[1501]; /* pair indices being sorted */
            /* 0x789C */ u32 sortedCount;
            /* 0x78A0 */ u32 pairScores[1];     /* indexed by pair index */
        } pairSortIV;
        struct {
            /* 0x0438 */ u8 unk0438[0x6844];
            /* 0x6C7C */ u8 cursor[0x64];
            /* 0x6CE0 */ u8 kind;
            /* 0x6CE1 */ u8 unk6ce1;
            /* 0x6CE2 */ u16 indices[1];
        } firstListIV;
        struct {
            /* 0x0438 */ u8 unk0438[0x8BE8];
            /* 0x9020 */ u16 indices[242];
            /* 0x9204 */ u8 cursor[1];
        } secondListIV;
        struct {
            /* 0x0438 */ u8 unk0438[0x8FF8];
            /* 0x9430 */ u8 opened;
            /* 0x9431 */ u8 ready;
        } eventFlagsIV;
        struct {
            /* 0x0438 */ u8 unk0438[0x8DD0];
            /* 0x9208 */ UnitePreviewModel *firstModel;
            /* 0x920C */ UnitePreviewModel *secondModel;
            /* 0x9210 */ void *camera;
            /* 0x9214 */ u8 cameraPose[0x48];
            /* 0x925C */ s32 resetCount;
            /* 0x9260 */ s32 frames;
        } previewA;
        struct {
            u8 unk0438BeforePortraits[0x5DDC];
            /* 0x6214 */ u8 cursor[0x64];
            /* 0x6278 */ u16 desired[500];
            /* 0x6660 */ s16 loaded[4];
            u8 unk6668[0x2C6C];
            /* 0x92D4 */ u8 alternateCursor[0x64];
        } portraitSelectionIV;
        struct {
            u8 unk0438BeforePortraits[0x5E04];
            /* 0x623C */ u8 cursor[0x64];
            /* 0x62A0 */ u16 desired[500];
            /* 0x6688 */ s16 loaded[4];
            u8 unk6690[0x2884];
            /* 0x8F14 */ u8 alternateCursor[0x64];
        } portraitSelectionA;
        struct {
            /* 0x0438 */ u8 unk0438[0x8E44];
            /* 0x927C */ u32 ids[1];
        } optionNamesA;
        struct {
            u8 prefix438[0x623C];
            union {
                u8 cursor[0x64];
                struct {
                    u8 prefix[0x34];
                    u32 words[4];
                    u16 unk44;
                    s16 id;
                } selected;
            };
        } resultSelectionIV;
        struct {
            u8 prefix438[0x8BD8];
            u32 words[4];
        } resultSnapshotIV;
        struct {
            u8 prefix438[0x9000];
            UnitePairEntryIV pairs[1];
        } resultPairsIV;
        struct {
            u8 prefix438[0x8C40];
            /* 0x9078 */ UnitePairEntry pairs[1];
        } resultPairsA;
        struct {
            u8 prefix438[0x8738];
            /* 0x8B70 */ u16 skills[24];
        } inheritanceA;
    };
    /* 0x9450 */ s8 blocked;
};

struct UniteWorkIV {
    /* 0x0000 */ UniteWork common;
    /* 0x9454 */ u8 unk9454[0x10];
    /* 0x9464 */ u32 unk9464;
    union {
        /* 0x9468 */ u8 unk9468[0x170];
        struct {
            /* 0x9468 */ u8 unk9468[0x160];
            /* 0x95C8 */ void *previewSound;
            /* 0x95CC */ struct AsdMdlObject *previewModel;
        } preview;
    };
    /* 0x95D8 */ s32 unk95D8;
};

typedef char UniteWorkBlockedOffsetCheck[
    offsetof(UniteWork, blocked) == 0x9450 && sizeof(UniteWork) == 0x9454 ? 1 : -1];

struct UniteDescriptionEntry {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ char text[1];
};
typedef char UniteWorkSizeCheck[sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkPairSortOffsetCheck[offsetof(UniteWork, pairSort.pairs) == 0x13B8 && offsetof(UniteWork, pairSort.sortedPairs) == 0x6832 && offsetof(UniteWork, pairSort.sortedCount) == 0x73EC && offsetof(UniteWork, pairSort.pairScores) == 0x73F0 ? 1 : -1];
typedef char UniteWorkIVPairsOffsetCheck[offsetof(UniteWork, pairListIV.pairs) == 0x1390 ? 1 : -1];
typedef char UniteWorkPairSortIVOffsetCheck[offsetof(UniteWork, pairSortIV.pairs) == 0x1390 && offsetof(UniteWork, pairSortIV.sortedPairs) == 0x6CE2 && offsetof(UniteWork, pairSortIV.sortedCount) == 0x789C && offsetof(UniteWork, pairSortIV.pairScores) == 0x78A0 ? 1 : -1];
typedef char UniteWorkIVScoresOffsetCheck[offsetof(UniteWork, pairScoresIV.scores) == 0x78a0 ? 1 : -1];
typedef char UniteWorkIVFirstCursorOffsetCheck[offsetof(UniteWork, firstListIV.cursor) == 0x6C7C ? 1 : -1];
typedef char UniteWorkIVSecondCursorOffsetCheck[offsetof(UniteWork, secondListIV.cursor) == 0x9204 ? 1 : -1];
typedef char UniteWorkPreviewOffsetCheck[offsetof(UniteWork, previewA.firstModel) == 0x9208 && offsetof(UniteWork, previewA.cameraPose) == 0x9214 && offsetof(UniteWork, previewA.frames) == 0x9260 ? 1 : -1];
typedef char UniteWorkIVFlagsOffsetCheck[offsetof(UniteWork, eventFlagsIV.ready) == 0x9431 ? 1 : -1];

typedef char UniteRequestOffsets[offsetof(UniteWork, menu.scriptProcess) == 0x42C && offsetof(UniteWork, menu.active) == 0x430 && offsetof(UniteWork, scriptIV.pendingRequest) == 0x478 && offsetof(UniteWork, scriptA.pendingRequest) == 0x488 && offsetof(UniteWorkIV, unk9464) == 0x9464 && offsetof(UniteWorkIV, unk95D8) == 0x95D8 && sizeof(UniteWorkIV) == 0x95DC ? 1 : -1];
typedef char UniteWorkReturnStateOffsets[offsetof(UniteWork, returnState.soundChannel) == 0x48C && offsetof(UniteWork, returnState.unk90A4) == 0x90A4 && offsetof(UniteWork, returnState.unk91B0) == 0x91B0 ? 1 : -1];
typedef char UniteWorkIVPreviewOffsets[offsetof(UniteWorkIV, preview.previewSound) == 0x95C8 && offsetof(UniteWorkIV, preview.previewModel) == 0x95CC ? 1 : -1];

typedef char UniteWorkSelectionAOffsetCheck[
    offsetof(UniteWork, unk0438) == 0x438 &&
    offsetof(UniteWork, selectionA.selectedIndex) == 0x8E88 &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkPortraitSelectionOffsetsCheck[
    offsetof(UniteWork, portraitSelectionIV.cursor) == 0x6214 &&
    offsetof(UniteWork, portraitSelectionIV.desired) == 0x6278 &&
    offsetof(UniteWork, portraitSelectionIV.loaded) == 0x6660 &&
    offsetof(UniteWork, portraitSelectionIV.alternateCursor) == 0x92D4 &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkPortraitSelectionAOffsetsCheck[
    offsetof(UniteWork, portraitSelectionA.cursor) == 0x623C &&
    offsetof(UniteWork, portraitSelectionA.desired) == 0x62A0 &&
    offsetof(UniteWork, portraitSelectionA.loaded) == 0x6688 &&
    offsetof(UniteWork, portraitSelectionA.alternateCursor) == 0x8F14 &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];

typedef char UniteWorkOptionDrawOffsetsCheck[
    offsetof(UniteWork, optionPulse.amount) == 0x15C &&
    offsetof(UniteWork, optionNamesA.ids) == 0x927C &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkResultSelectionIVOffsetsCheck[
    offsetof(UniteWork, fusionPriceIV.cost) == 0x418 &&
    offsetof(UniteWork, resultSelectionIV.cursor) == 0x6674 &&
    offsetof(UniteWork, resultSelectionIV.selected.words) == 0x66A8 &&
    offsetof(UniteWork, resultSelectionIV.selected.id) == 0x66BA &&
    offsetof(UniteWork, resultSnapshotIV.words) == 0x9010 &&
    offsetof(UniteWork, resultPairsIV.pairs) == 0x9438 &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkCatalogIVOffsets[
    offsetof(UniteWork, catalogIV.demons) == 0x5c0 &&
    offsetof(UniteWork, catalogIV.races) == 0xf22 &&
    offsetof(UniteWork, catalogIV.skills) == 0xf92 &&
    offsetof(UniteWork, catalogIV.demonCount) == 0x137c &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkResultBuildAOffsets[
    offsetof(UniteWork, resultPairsA.pairs) == 0x9078 &&
    offsetof(UniteWork, inheritanceA.skills) == 0x8B70 &&
    sizeof(UniteWork) == 0x9454 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 FUN_0029e93c(const void *object);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u16 dataTableGetEntry0102Value(u32 index);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0029c4ac(u8 value);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

s32 getUnlockedSlotCount(void *arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_0028f670(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00288844(u32 a, u32 b, u32 c);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_0029ac94(void);

#ifdef __cplusplus
}
#endif

#endif
