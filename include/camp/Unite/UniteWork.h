/* camp/Unite/Unite.c: the fusion screen's work. */
#ifndef CAMP_UNITE_UNITEWORK_H
#define CAMP_UNITE_UNITEWORK_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "ui/UiSpriteState.h"
#include "ui/GridNavigation.h"
#include "gamedata/UnitStats.h"

class RegisteredHandle;
struct UniteCtrl;
struct ThreadStackStorage;
struct FusionRaceSelection;

/* A demon model shown in the fusion preview. */
struct UnitePreviewModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};

/* The two ids packed into a pair entry's first word. */
struct UnitePairIds {
    u32 firstId : 15;
    u32 secondId : 15;
    u32 firstType : 2;
};

struct UnitePairEntry {
    union {
        /* 0x00 */ u32 packedIds;
        UnitePairIds ids;
    };
    /* 0x04 */ u32 unk04;
};

struct UnitePairEntryIV {
    /* 0x00 */ u64 firstId : 15;
    /* 0x00 */ u64 secondId : 15;
    /* 0x00 */ u64 firstType : 2;
    /* 0x04 */ u64 secondType : 2;
    /* 0x04 */ u64 resultId : 15;
    /* 0x04 */ u64 unknown : 15;
};
typedef char UnitePairEntryIVSizeCheck[sizeof(UnitePairEntryIV) == 8 ? 1 : -1];

/* The fusion screen's work (Shin Megami Tensei IV layout, 0x95F8 bytes, allocated by the Unite
 * task and kept by g_unite). The block past 0x438 is described by the views the readable code uses. */
/* A block of the IV work that retail addresses as an object of its own (base 0x9500). */
struct UniteSubState {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u8 flag;
    /* 0x6D */ u8 unk6D[0x5B];
};

struct UniteWork {
    union {
        /* 0x0000 */ u8 unk0000[0x400];
        /* 0x0000 */ void *context;
        /* the screen's animated sprites: the result panel and the option list read the same four */
        struct {
            /* 0x0000 */ UniteCtrl *ctrl;      /* the fusion rules (gamedata/unite/UniteCtrl.cpp) */
            /* 0x0004 */ UiResourceParameters resources; /* the animation tables every sprite below plays */
            /* 0x0024 */ UiSpriteState fade;   /* its opacity fades the result panel in, the cursor row's highlight */
            /* 0x00B0 */ UiSpriteState slide;  /* its position scrolls the result highlight, the cursor row's shine */
            /* 0x013C */ UiSpriteState pulse;  /* its opacity pulses the result panel's cursor */
            /* 0x01C8 */ UiSpriteState open;   /* finished once the option list has opened */
            /* 0x0254 */ UiSpriteState listOffset; /* where the demon lists' scroll bar sits in the panel */
            /* 0x02E0 */ UiSpriteState unk02E0;
            /* 0x036C */ UiSpriteState unk036C;
            /* 0x03F8 */ u32 process;          /* the "Unite Calc" process; the draw task is its child */
        } sprites;
        struct {
            /* 0x0000 */ u8 unk0000[0x1C8];
            /* 0x01C8 */ u8 timer[1];
        } event;
        struct {
            /* 0x0000 */ u8 unk0000[0x3FC];
            /* 0x03FC */ u32 frame;
        } transition;
    };
    /* 0x0400 */ s32 state;
    /* 0x0404 */ union {
        /* 0x0404 */ u8 unk0404[0x30];
        struct {
            /* 0x0404 */ u8 unk0404[0x18];
            /* 0x41C */ u32 openedSeconds;     /* the play time when the screen opened */
            s8 mode; /* 0x420 */
            /* 0x421 */ u8 unk0421[3];
            /* 0x424 */ void *messageFile;     /* unite/unite.mbm */
            /* 0x428 */ void *scriptFile;      /* unite/unite.bf */
            /* 0x42C */ u32 scriptProcess;
            /* 0x430 */ u8 active;
            /* 0x431 */ u8 unk0431[3];
        } menu;
        struct {
            /* 0x0404 */ s32 previous;
            /* 0x0408 */ s32 saved;
            /* 0x040C */ s32 returnTo;
        } history;
        struct {
            u8 prefix404[0x14];
            s32 cost;
        } fusionPriceIV;
    };
    /* 0x0434 */ s32 request;
    /* 0x0438 */ union {
        /* 0x0438 */ u8 unk0438[0x9018];
        struct {
            /* 0x438 */ u8 unk0438[0x40];
            /* 0x478 */ s32 pendingRequest;
            /* 0x47C */ u32 soundChannel;
        } scriptIV;
        struct {
            /* 0x438 */ s16 rowRegions[29];     /* touch regions of the visible list rows */
            /* 0x472 */ s16 scrollUpRegion;
            /* 0x474 */ s16 scrollDownRegion;
            /* 0x476 */ s16 scrollThumbRegion;
        } touchIV;
        struct {
            /* 0x0438 */ u8 unk0438[0xB0];
            /* 0x04E8 */ ScrollSelection sourceList;
            /* 0x054C */ ScrollSelection partnerList;
        } selectionListsIV;
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
            /* 0x0438 */ u8 unk0438[0x6840];
            /* 0x6C78 */ s32 unk6C78;
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
            /* 0x0438 */ u8 unk0438[0x8F02];
            /* 0x933A */ u16 selectedCount;
        } selectionIV;
        struct {
            /* 0x0438 */ u8 unk0438[0x8FF8];
            /* 0x9430 */ u8 opened;
            /* 0x9431 */ s8 ready;
        } eventFlagsIV;
        struct {
            u8 unk0438BeforePortraits[0x5DDC];
            /* 0x6214 */ u8 cursor[0x64];
            /* 0x6278 */ u16 desired[500];
            /* 0x6660 */ s16 loaded[4];
            /* 0x6668 */ u8 unk6668[8];
            /* 0x6670 */ u32 candidateCount;
            /* 0x6674 */ u8 unk6674[0x2C60];
            /* 0x92D4 */ u8 alternateCursor[0x64];
        } portraitSelectionIV;
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
                /* 0x6674 */ StatBlock unit;   /* the result as it was shown, restored when the fusion fails */
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
    };
    /* 0x9450 */ s8 blocked;
    /* 0x9451 */ u8 unk9451[3];
    /* 0x9454 */ u8 unk9454[4];
    /* 0x9458 */ u32 resultIndex;          /* the created unit's index (FUN_0029c0c0) */
    /* 0x945C */ u32 resultLevel;          /* the created unit's level */
    /* 0x9460 */ s32 unk9460;
    /* 0x9464 */ u32 unk9464;
    union {
        /* 0x9468 */ u8 unk9468[0x170];
        struct {
            /* 0x9468 */ u16 ids[76];           /* table 0x24 records the option list shows */
            /* 0x9500 */ u8 unk9500[8];
            /* 0x9508 */ GridNavigation list;
        } optionListIV;
        struct {
            /* 0x9468 */ u8 unk9468[0x98];
            /* 0x9500 */ UniteSubState sub;
            /* 0x95C8 */ void *previewSound;
            /* 0x95CC */ struct AsdMdlObject *previewModel;
            /* 0x95D0 */ void *camera;         /* camp/jakyou_all.bccam */
        } preview;
    };
    /* 0x95D8 */ s32 unk95D8;
    /* 0x95DC */ s32 unk95DC;
    /* 0x95E0 */ u8 stopRequested;         /* ends the catalog thread */
    /* 0x95E1 */ u8 unk95E1[3];
    /* 0x95E4 */ ThreadStackStorage *stack; /* the catalog thread's stack mapping */
    /* 0x95E8 */ u8 thread[8];             /* the catalog thread (FUN_001de340) */
    /* 0x95F0 */ void *stackMemory;        /* the 0x1000 bytes the stack maps */
    /* 0x95F4 */ u8 searchingFrame;        /* 0..39, turns the "searching" grid */
    /* 0x95F5 */ u8 unk95F5[3];
};

/* The fusion screen's work (Apocalypse layout, 0x92C0 bytes, kept by g_unite). The first 0x438 bytes
 * are laid out as in Shin Megami Tensei IV. */
struct UniteWorkA {
    union {
        /* 0x0000 */ u8 unk0000[0x400];
        /* 0x0000 */ void *context;
        /* the screen's animated sprites, as in IV */
        struct {
            /* 0x0000 */ FusionRaceSelection *ctrl; /* the fusion rules (gamedata/unite/UniteCtrl.cpp) */
            /* 0x0004 */ UiResourceParameters resources; /* the animation tables every sprite below plays */
            /* 0x0024 */ UiSpriteState fade;
            /* 0x00B0 */ UiSpriteState slide;
            /* 0x013C */ UiSpriteState pulse;
            /* 0x01C8 */ UiSpriteState open;
            /* 0x0254 */ UiSpriteState listOffset;
            /* 0x02E0 */ UiSpriteState unk02E0;
            /* 0x036C */ UiSpriteState unk036C;
            /* 0x03F8 */ u32 process;          /* the "Unite Calc" process; the draw task is its child */
        } sprites;
        struct {
            /* 0x0000 */ u8 unk0000[0x1C8];
            /* 0x01C8 */ u8 timer[1];
        } event;
        struct {
            /* 0x0000 */ u8 unk0000[0x3FC];
            /* 0x03FC */ u32 frame;
        } transition;
        struct {
            /* 0x0000 */ u8 unk0000[0x13C];
            /* 0x013C */ u8 speedObject[0x20]; /* the vec2 object whose speed is amount (vec2GetSpeed reads +0x20) */
            /* 0x015C */ f32 amount;
        } optionPulse;
    };
    /* 0x0400 */ s32 state;
    /* 0x0404 */ union {
        /* 0x0404 */ u8 unk0404[0x30];
        struct {
            /* 0x0404 */ u8 unk0404[0x18];
            /* 0x41C */ u32 openedSeconds;     /* the play time when the screen opened */
            s8 mode; /* 0x420 */
            /* 0x421 */ u8 unk0421[3];
            /* 0x424 */ void *messageFile;     /* unite/unite.mbm */
            /* 0x428 */ void *scriptFile;      /* unite/unite.bf */
            /* 0x42C */ u32 scriptProcess;
            /* 0x430 */ u8 active;
            /* 0x431 */ u8 unk0431[3];
        } menu;
        struct {
            /* 0x0404 */ s32 previous;
            /* 0x0408 */ s32 saved;
            /* 0x040C */ s32 returnTo;
        } history;
    };
    /* 0x0434 */ s32 request;
    /* 0x0438 */ union {
        /* 0x0438 */ u8 unk0438[0x8E88];
        struct {
            /* 0x0438 */ u8 unk0438[0x3A];
            /* 0x0472 */ s16 scrollUpRegion;
            /* 0x0474 */ s16 scrollDownRegion;
            /* 0x0476 */ s16 scrollThumbRegion;
            /* 0x0478 */ u8 unk0478[0x84];
            /* 0x04FC */ ScrollSelection sourceList;
            /* 0x0560 */ ScrollSelection partnerList;
        } selectionLists;
        struct {
            /* 0x0438 */ u8 unk0438BeforeSelection[0x8A50];
            /* 0x8E88 */ s16 selectedIndex;
        } selectionA;
        struct {
            /* 0x0438 */ u8 unk0438BeforePairs[0xf80];
            /* 0x13B8 */ UnitePairEntryIV pairs[1];
            /* 0x13C0 */ u8 unk13c0[0x5408];
            /* 0x67C8 */ s32 unk67C8;
            /* 0x67CC */ ScrollSelection pairList;
            /* 0x6830 */ s8 pairKind;
            /* 0x6831 */ u8 unk6831;
            /* 0x6832 */ u16 sortedPairs[1501]; /* pair indices being sorted */
            /* 0x73EC */ u32 sortedCount;
            /* 0x73F0 */ u32 pairScores[1];     /* indexed by pair index */
        } pairSort;
        struct {
            /* 0x438 */ u8 unk0438[0x50];
            /* 0x488 */ s32 pendingRequest;
        } scriptA;
        struct {
            /* 0x0438 */ u8 unk0438[0x54];
            /* 0x048C */ u32 soundChannel;
            /* 0x0490 */ u8 unk0490[0x8BE1];
            /* 0x9071 */ s8 helpAvailable;
            /* 0x9072 */ u8 unk9072[0x1E];
            /* 0x9090 */ u8 busy;
            /* 0x9091 */ u8 unk9091[0x13];
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
        } pairList;
        struct {
            /* 0x0438 */ u8 unk0438[0x5e68];
            union {
                u8 ids[0x3f8]; /* 0x62a0, raw buffer view */
                u16 devilIds[508]; /* 0x62a0 */
            };
            u32 count;    /* 0x6698 */
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
            /* 0x0438 */ u8 unk0438[0x8DD0];
            /* 0x9208 */ UnitePreviewModel *firstModel;
            /* 0x920C */ UnitePreviewModel *secondModel;
            /* 0x9210 */ void *camera;
            /* 0x9214 */ u8 cameraPose[0x48];
            /* 0x925C */ s32 resetCount;
            /* 0x9260 */ s32 frames;
        } previewA;
        struct {
            u8 unk0438BeforePortraits[0x5E04];
            /* 0x623C */ u8 cursor[0x64];
            /* 0x62A0 */ u16 desired[500];
            /* 0x6688 */ s16 loaded[4];
            u8 unk6690[0x2884];
            /* 0x8F14 */ u8 alternateCursor[0x64];
        } portraitSelectionA;
        struct {
            /* 0x0438 */ u8 unk0438[0x8B42];
            /* 0x8F7A */ u16 selectedCount;
        } selectionCountA;
        struct {
            /* 0x0438 */ u8 unk0438[0x8E40];
            /* 0x9278 */ u8 highlightFrame;
            /* 0x9279 */ u8 unk9279[3];
            /* 0x927C */ u32 ids[1];
        } optionNamesA;
        struct {
            u8 prefix438[0x8C40];
            /* 0x9078 */ UnitePairEntry pairs[1];
        } resultPairsA;
        struct {
            u8 prefix438[0x8738];
            /* 0x8B70 */ u16 skills[24];
        } inheritanceA;
        struct {
            /* 0x438 */ s16 rowRegions[29];     /* touch regions of the visible list rows, as in IV */
            /* 0x472 */ s16 scrollUpRegion;
            /* 0x474 */ s16 scrollDownRegion;
            /* 0x476 */ s16 scrollThumbRegion;
        } touchA;
        /* what uniteCreate sets up past the lists: the special recipes and the catalog thread */
        struct {
            /* 0x0438 */ u8 unk0438[0x8B44];
            /* 0x8F7C */ u16 specialRecipes[146]; /* filled by fusionListAvailableSpecialRecipes (extent not known) */
            /* 0x90A0 */ s32 unk90A0;
            /* 0x90A4 */ s32 unk90A4;          /* histogramFindHighestSupportedValue() when the screen opens */
            /* 0x90A8 */ u8 unk90A8[0x1BC];
            /* 0x9264 */ u8 stopRequested;     /* ends the catalog thread */
            /* 0x9265 */ u8 unk9265[3];
            /* 0x9268 */ ThreadStackStorage *stack; /* the catalog thread's stack mapping */
            /* 0x926C */ u8 thread[8];         /* the catalog thread (FUN_0028625c) */
            /* 0x9274 */ void *stackMemory;    /* the 0x1000 bytes the stack maps */
            /* 0x9278 */ u8 unk9278[0x44];
            /* 0x92BC */ u16 unlockOption;     /* flag id of SearchTable's kind-15 row, 0 = none */
            /* 0x92BE */ u16 unk92BE;
        } catalogThreadA;
    };
};
typedef char UniteWorkACreateOffsets[
    offsetof(UniteWorkA, touchA.scrollUpRegion) == 0x472 && offsetof(UniteWorkA, sprites.resources) == 0x4 && offsetof(UniteWorkA, sprites.process) == 0x3F8 &&
    offsetof(UniteWorkA, menu.openedSeconds) == 0x41C && offsetof(UniteWorkA, menu.messageFile) == 0x424 &&
    offsetof(UniteWorkA, menu.scriptProcess) == 0x42C && offsetof(UniteWorkA, catalogThreadA.specialRecipes) == 0x8F7C &&
    offsetof(UniteWorkA, catalogThreadA.unk90A0) == 0x90A0 && offsetof(UniteWorkA, catalogThreadA.stopRequested) == 0x9264 &&
    offsetof(UniteWorkA, catalogThreadA.stack) == 0x9268 && offsetof(UniteWorkA, catalogThreadA.stackMemory) == 0x9274 &&
    offsetof(UniteWorkA, catalogThreadA.unlockOption) == 0x92BC && sizeof(UniteWorkA) == 0x92C0 ? 1 : -1];

typedef char UniteWorkADrawOffsets[
    offsetof(UniteWorkA, sprites.open) == 0x1C8 && offsetof(UniteWorkA, sprites.listOffset) == 0x254 &&
    offsetof(UniteWorkA, history.returnTo) == 0x40C && offsetof(UniteWorkA, selectionLists.scrollUpRegion) == 0x472 &&
    offsetof(UniteWorkA, selectionLists.sourceList) == 0x4FC && offsetof(UniteWorkA, selectionLists.partnerList) == 0x560 &&
    offsetof(UniteWorkA, returnState.helpAvailable) == 0x9071 && offsetof(UniteWorkA, returnState.busy) == 0x9090 &&
    offsetof(UniteWorkA, optionNamesA.highlightFrame) == 0x9278 && sizeof(UniteWorkA) == 0x92C0 ? 1 : -1];

typedef char UniteWorkBlockedOffsetCheck[
    offsetof(UniteWork, blocked) == 0x9450 && sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkDrawOffsets[
    offsetof(UniteWork, sprites.listOffset) == 0x254 && offsetof(UniteWork, history.returnTo) == 0x40C &&
    offsetof(UniteWork, selectionListsIV.sourceList) == 0x4E8 && offsetof(UniteWork, selectionListsIV.partnerList) == 0x54C &&
    offsetof(UniteWork, searchingFrame) == 0x95F4 ? 1 : -1];

struct UniteDescriptionEntry {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ char text[1];
};
typedef char UniteWorkSizeCheck[sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkCreateOffsets[
    offsetof(UniteWork, sprites.resources) == 0x4 && offsetof(UniteWork, sprites.unk02E0) == 0x2E0 &&
    offsetof(UniteWork, sprites.unk036C) == 0x36C && offsetof(UniteWork, sprites.process) == 0x3F8 &&
    offsetof(UniteWork, menu.openedSeconds) == 0x41C && offsetof(UniteWork, menu.messageFile) == 0x424 &&
    offsetof(UniteWork, menu.scriptFile) == 0x428 && offsetof(UniteWork, unk9460) == 0x9460 &&
    offsetof(UniteWork, preview.camera) == 0x95D0 && offsetof(UniteWork, unk95DC) == 0x95DC &&
    offsetof(UniteWork, stopRequested) == 0x95E0 && offsetof(UniteWork, stack) == 0x95E4 &&
    offsetof(UniteWork, thread) == 0x95E8 && offsetof(UniteWork, stackMemory) == 0x95F0 ? 1 : -1];
typedef char UniteWorkOptionListIVOffsets[
    offsetof(UniteWork, sprites.fade) == 0x24 && offsetof(UniteWork, sprites.slide) == 0xB0 &&
    offsetof(UniteWork, sprites.pulse) == 0x13C && offsetof(UniteWork, sprites.open) == 0x1C8 && offsetof(UniteWork, touchIV.scrollUpRegion) == 0x472 &&
    offsetof(UniteWork, touchIV.scrollThumbRegion) == 0x476 && offsetof(UniteWork, optionListIV.ids) == 0x9468 &&
    offsetof(UniteWork, optionListIV.list) == 0x9508 ? 1 : -1];
typedef char UniteWorkPairSortOffsetCheck[offsetof(UniteWorkA, pairSort.pairs) == 0x13B8 && offsetof(UniteWorkA, pairSort.sortedPairs) == 0x6832 && offsetof(UniteWorkA, pairSort.sortedCount) == 0x73EC && offsetof(UniteWorkA, pairSort.pairScores) == 0x73F0 ? 1 : -1];
typedef char UniteWorkIVResultOffsetCheck[offsetof(UniteWork, resultSelectionIV.unit) == 0x6674 &&
    offsetof(UniteWork, resultIndex) == 0x9458 && offsetof(UniteWork, resultLevel) == 0x945C &&
    offsetof(UniteWork, unk9464) == 0x9464 ? 1 : -1];
typedef char UniteWorkIVPairsOffsetCheck[offsetof(UniteWork, pairListIV.pairs) == 0x1390 ? 1 : -1];
typedef char UniteWorkPairSortIVOffsetCheck[offsetof(UniteWork, pairSortIV.pairs) == 0x1390 && offsetof(UniteWork, pairSortIV.sortedPairs) == 0x6CE2 && offsetof(UniteWork, pairSortIV.sortedCount) == 0x789C && offsetof(UniteWork, pairSortIV.pairScores) == 0x78A0 ? 1 : -1];
typedef char UniteWorkIVScoresOffsetCheck[offsetof(UniteWork, pairScoresIV.scores) == 0x78a0 ? 1 : -1];
typedef char UniteWorkIVFirstCursorOffsetCheck[offsetof(UniteWork, firstListIV.cursor) == 0x6C7C ? 1 : -1];
typedef char UniteWorkIVSecondCursorOffsetCheck[offsetof(UniteWork, secondListIV.cursor) == 0x9204 ? 1 : -1];
typedef char UniteWorkPreviewOffsetCheck[offsetof(UniteWorkA, previewA.firstModel) == 0x9208 && offsetof(UniteWorkA, previewA.cameraPose) == 0x9214 && offsetof(UniteWorkA, previewA.frames) == 0x9260 ? 1 : -1];
typedef char UniteWorkIVFlagsOffsetCheck[offsetof(UniteWork, eventFlagsIV.ready) == 0x9431 ? 1 : -1];

typedef char UniteRequestOffsets[offsetof(UniteWork, menu.scriptProcess) == 0x42C && offsetof(UniteWork, menu.active) == 0x430 && offsetof(UniteWork, scriptIV.pendingRequest) == 0x478 && offsetof(UniteWorkA, scriptA.pendingRequest) == 0x488 && offsetof(UniteWork, unk9464) == 0x9464 && offsetof(UniteWork, unk95D8) == 0x95D8 && sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkReturnStateOffsets[offsetof(UniteWorkA, returnState.soundChannel) == 0x48C && offsetof(UniteWorkA, returnState.unk90A4) == 0x90A4 && offsetof(UniteWorkA, returnState.unk91B0) == 0x91B0 ? 1 : -1];
typedef char UniteWorkIVSelectionOffsets[offsetof(UniteWork, selectionIV.selectedCount) == 0x933A && offsetof(UniteWork, preview.sub) == 0x9500 && offsetof(UniteWork, firstListIV.unk6C78) == 0x6C78 ? 1 : -1];
typedef char UniteWorkIVPreviewOffsets[offsetof(UniteWork, preview.previewSound) == 0x95C8 && offsetof(UniteWork, preview.previewModel) == 0x95CC ? 1 : -1];

typedef char UniteWorkSelectionAOffsetCheck[
    offsetof(UniteWork, unk0438) == 0x438 &&
    offsetof(UniteWorkA, selectionA.selectedIndex) == 0x8E88 &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkPortraitSelectionOffsetsCheck[
    offsetof(UniteWork, portraitSelectionIV.cursor) == 0x6214 &&
    offsetof(UniteWork, portraitSelectionIV.desired) == 0x6278 &&
    offsetof(UniteWork, portraitSelectionIV.loaded) == 0x6660 &&
    offsetof(UniteWork, portraitSelectionIV.candidateCount) == 0x6670 &&
    offsetof(UniteWork, portraitSelectionIV.alternateCursor) == 0x92D4 &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkPortraitSelectionAOffsetsCheck[
    offsetof(UniteWorkA, portraitSelectionA.cursor) == 0x623C &&
    offsetof(UniteWorkA, portraitSelectionA.desired) == 0x62A0 &&
    offsetof(UniteWorkA, portraitSelectionA.loaded) == 0x6688 &&
    offsetof(UniteWorkA, portraitSelectionA.alternateCursor) == 0x8F14 &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];

typedef char UniteWorkOptionDrawOffsetsCheck[
    offsetof(UniteWorkA, optionPulse.amount) == 0x15C &&
    offsetof(UniteWorkA, optionNamesA.ids) == 0x927C &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkResultSelectionIVOffsetsCheck[
    offsetof(UniteWork, fusionPriceIV.cost) == 0x418 &&
    offsetof(UniteWork, resultSelectionIV.cursor) == 0x6674 &&
    offsetof(UniteWork, resultSelectionIV.selected.words) == 0x66A8 &&
    offsetof(UniteWork, resultSelectionIV.selected.id) == 0x66BA &&
    offsetof(UniteWork, resultSnapshotIV.words) == 0x9010 &&
    offsetof(UniteWork, resultPairsIV.pairs) == 0x9438 &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkCatalogIVOffsets[
    offsetof(UniteWork, catalogIV.demons) == 0x5c0 &&
    offsetof(UniteWork, catalogIV.races) == 0xf22 &&
    offsetof(UniteWork, catalogIV.skills) == 0xf92 &&
    offsetof(UniteWork, catalogIV.demonCount) == 0x137c &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];
typedef char UniteWorkResultBuildAOffsets[
    offsetof(UniteWorkA, resultPairsA.pairs) == 0x9078 &&
    offsetof(UniteWorkA, inheritanceA.skills) == 0x8B70 &&
    sizeof(UniteWork) == 0x95F8 ? 1 : -1];

typedef char UniteWorkASizeCheck[sizeof(UniteWorkA) == 0x92C0 && offsetof(UniteWorkA, pairSort.pairList) == 0x67CC && offsetof(UniteWorkA, selectionCountA.selectedCount) == 0x8F7A && offsetof(UniteWorkA, registered.handle) == 0x920C ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 resourceRunEmbeddedOperationIfUnblocked(const void *object);
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
