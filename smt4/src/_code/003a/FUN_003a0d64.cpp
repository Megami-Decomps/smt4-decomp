/* NON_MATCHING: readable rebuild of the place window start-up; retail keeps the constant 2 in r1 for the two window stores, scales the record index with a shifted add chain and shares the exit, which armcc here allocates differently. */
#include "common.h"

/* A place-window scene (only the fields the start-up touches). */
struct PlaceScene {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 state;
    /* 0x00008 */ s32 substate;
    /* 0x0000C */ u8 unk0000C[8];
    /* 0x00014 */ u8 placeKind;
    /* 0x00015 */ u8 unk00015[3];
    /* 0x00018 */ s32 placeKey;
    /* 0x0001C */ u8 unk0001C[0x144];
    /* 0x00160 */ void *windowPool;
    /* 0x00164 */ s32 windowSize;
    /* 0x00168 */ u8 *windowA;
    /* 0x0016C */ u8 *windowB;
    /* 0x00170 */ u8 unk00170[0x15BD0];
    /* 0x15D40 */ u32 jobA;
    /* 0x15D44 */ u32 jobB;
};

/* A record of data table 0x17/1 (0x68 bytes). */
struct PlaceRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 key;
    /* 0x24 */ u16 kind;
    /* 0x26 */ u8 unk26[0x42];
};

extern "C" {
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
s32 jobIsValid(u32 job);
s32 eventTexJobSlotsDone(u32 job);
u8 *FUN_00297060(void *pool, s32 size);
void FUN_002a03d8(s32 a, s32 b);
void FUN_0029e648(s32 a, s32 b);
void messageTargetSetValue(s32 value, s32 arg);
PlaceRecord *dataTable17Sub1GetRecord(u32 *ignored, u32 index);
s32 dataTable17Sub1GetCount(u32 *ignored);
void placeWinStartText(void);
s32 FUN_0028e9d0(u32 flag);
void FUN_003a4210(PlaceScene *scene);
void buttonHelpSetPreset(s32 preset);
void FUN_0029ee6c(s32 slot, u32 color);

/* Whether any flag of the place's two flag ranges is set. */
static bool placeFlagsAnySet()
{
    for (u32 flag = 0x3B7; flag <= 0x47E; flag++) {
        if (FUN_0028e9d0(flag))
            return true;
    }
    for (u32 flag = 0x47F; flag <= 0x79E; flag++) {
        if (FUN_0028e9d0(flag))
            return true;
    }
    return false;
}

/* Waits for the place window's textures and jobs, then builds its two windows, starts the place's
 * text and switches to state 1 when any of the place flags is set (state 3 when none is). */
void FUN_003a0d64(PlaceScene *scene)
{
    if (scene->windowPool == NULL || scene->windowSize == 0)
        return;
    if (!asdTMTexTableNodeIsLoaded(0x2B, 0))
        return;
    if (jobIsValid(scene->jobA) && !eventTexJobSlotsDone(scene->jobA))
        return;
    if (jobIsValid(scene->jobB) && !eventTexJobSlotsDone(scene->jobB))
        return;

    scene->windowA = FUN_00297060(scene->windowPool, scene->windowSize);
    *(u32 *)(scene->windowA + 0x108) = 2;
    scene->windowB = FUN_00297060(scene->windowPool, scene->windowSize);
    *(u32 *)(scene->windowB + 0x108) = 2;
    FUN_002a03d8(0, 10);
    FUN_002a03d8(1, 10);
    FUN_0029e648(1, 0);
    messageTargetSetValue(0, 0);

    u32 kind = scene->placeKind;
    s32 key = scene->placeKey;
    s32 found = -1;
    u32 ignored;
    PlaceRecord *records = dataTable17Sub1GetRecord(&ignored, 0);
    for (s32 i = 0; i < dataTable17Sub1GetCount(&ignored); i++) {
        if (records[i].kind == kind && records[i].key == key) {
            found = i;
            break;
        }
    }
    u32 ignoredSecond;
    dataTable17Sub1GetRecord(&ignoredSecond, found);
    placeWinStartText();

    if (placeFlagsAnySet()) {
        scene->state = 1;
        scene->substate = 0;
        FUN_003a4210(scene);
        buttonHelpSetPreset(0x75);
        FUN_0029ee6c(0, 0x323232FF);
    } else {
        scene->state = 3;
        scene->substate = 0;
    }
}

} /* extern "C" */
