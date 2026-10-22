#ifndef SHARD_W5_W5MATCH2_UNITEWORK_H
#define SHARD_W5_W5MATCH2_UNITEWORK_H

#include "common.h"
#include <stddef.h>

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
    };
    /* 0x0434 */ u32 request;
    /* 0x0438 */ union {
        /* 0x0438 */ u8 unk0438[0x9018];
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
            /* 0x0438 */ u8 unk0438[0xF58];
            /* 0x1390 */ UnitePairEntryIV pairs[1];
        } pairListIV;
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
    };
    /* 0x9450 */ u8 blocked;
};

struct UniteWorkIV {
    /* 0x0000 */ UniteWork common;
    /* 0x9454 */ u8 unk9454[0x10];
    /* 0x9464 */ u32 unk9464;
    /* 0x9468 */ u8 unk9468[0x170];
    /* 0x95D8 */ s32 unk95D8;
};

struct UniteDescriptionEntry {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ char text[1];
};
typedef char UniteWorkSizeCheck[sizeof(UniteWork) == 0x9454 ? 1 : -1];
typedef char UniteWorkIVPairsOffsetCheck[offsetof(UniteWork, pairListIV.pairs) == 0x1390 ? 1 : -1];
typedef char UniteWorkIVFirstCursorOffsetCheck[offsetof(UniteWork, firstListIV.cursor) == 0x6C7C ? 1 : -1];
typedef char UniteWorkIVSecondCursorOffsetCheck[offsetof(UniteWork, secondListIV.cursor) == 0x9204 ? 1 : -1];
typedef char UniteWorkPreviewOffsetCheck[offsetof(UniteWork, previewA.firstModel) == 0x9208 && offsetof(UniteWork, previewA.cameraPose) == 0x9214 && offsetof(UniteWork, previewA.frames) == 0x9260 ? 1 : -1];
typedef char UniteWorkIVFlagsOffsetCheck[offsetof(UniteWork, eventFlagsIV.ready) == 0x9431 ? 1 : -1];

typedef char UniteRequestOffsets[offsetof(UniteWork, menu.scriptProcess) == 0x42C && offsetof(UniteWork, menu.active) == 0x430 && offsetof(UniteWork, scriptIV.pendingRequest) == 0x478 && offsetof(UniteWork, scriptA.pendingRequest) == 0x488 && offsetof(UniteWorkIV, unk9464) == 0x9464 && offsetof(UniteWorkIV, unk95D8) == 0x95D8 && sizeof(UniteWorkIV) == 0x95DC ? 1 : -1];
typedef char UniteWorkReturnStateOffsets[offsetof(UniteWork, returnState.soundChannel) == 0x48C && offsetof(UniteWork, returnState.unk90A4) == 0x90A4 && offsetof(UniteWork, returnState.unk91B0) == 0x91B0 ? 1 : -1];

#endif
