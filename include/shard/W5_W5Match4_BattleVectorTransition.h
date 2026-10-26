#ifndef SHARD_W5_W5MATCH4_BATTLEVECTORTRANSITION_H
#define SHARD_W5_W5MATCH4_BATTLEVECTORTRANSITION_H

#include "common.h"
#include <stddef.h>

struct BattleVector3 { f32 x, y, z; };

/* Copies through pointers: armcc then reloads the globals that surround the copy, and moves the vector with vldmia/vstmia. */
static __inline void battleVectorCopy(BattleVector3 *destination, const BattleVector3 *source)
{
    *destination = *source;
}

struct BattleVectorTransition {
    union {
        /* 0x000 */ u8 unk000[0x5ac];
        struct {
            u8 unk000Position[0x68];
            /* 0x068 */ BattleVector3 position;
        } positionData;
        struct {
            u8 unk000Reference[0x58C];
            /* 0x58C */ BattleVector3 position;
        } reference;
    };
    /* 0x5ac */ BattleVector3 destination;
    /* 0x5b8 */ u8 unk5b8[0xc];
    /* 0x5c4 */ BattleVector3 alternateDestination;
    union {
        /* 0x5d0 */ u8 unk5d0[0x64];
        struct {
            u8 unk5d0Elapsed[0x20];
            /* 0x5f0 */ BattleVector3 alternateElapsed;
        } elapsedData;
    };
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x94];
    /* 0x6cc */ BattleVector3 elapsed;
    /* 0x6d8 */ s32 target;
    union {
        /* 0x6dc */ u8 unk6dc[0x4];
        /* 0x6dc */ s32 frame;
    };
    /* 0x6e0 */ s32 mode;
    /* 0x6e4 */ BattleVector3 current;
    /* 0x6f0 */ s32 alternateTarget;
    /* 0x6f4 */ s32 alternateFrame;
    /* 0x6f8 */ s32 alternateMode;
    union {
        /* 0x6fc */ u8 unk6fc[0x48];
        struct {
            /* 0x6fc */ BattleVector3 start;
            /* 0x708 */ BattleVector3 end;
            /* 0x714 */ u32 duration;
            /* 0x718 */ u32 frame;
            /* 0x71c */ u32 mode;
            /* 0x720 */ s32 horizontalOffset;
            /* 0x724 */ s32 depthOffset;
        } path;
        struct {
            /* 0x6FC */ u8 unk6FC[0x3C];
            /* 0x738 */ BattleVector3 current;
        } axis;
    };
    /* 0x744 */ BattleVector3 axisDestination;
    /* 0x750 */ s32 axisTarget;
    /* 0x754 */ s32 axisFrame;
    /* 0x758 */ s32 axisMode;
    union {
        /* 0x75c */ u8 unk75c[0x14];
        struct {
            u8 unk75cOffset[8];
            /* 0x764 */ BattleVector3 originOffset;
        } originData;
    };
    /* 0x770 */ BattleVector3 axisElapsed;
    union {
        /* 0x77c */ u8 unk77c[0x6c];
        struct {
            /* 0x77c */ BattleVector3 start;
            /* 0x788 */ BattleVector3 end;
        } anchors;
    };
    /* 0x7e8 */ BattleVector3 secondaryElapsed;
    /* 0x7f4 */ u8 unk7f4[0x18];
    /* 0x80c */ s32 secondaryTarget;
    /* 0x810 */ s32 secondaryFrame;
    /* 0x814 */ s32 secondaryMode;
};
typedef char BattleVectorReferenceOffsetCheck[
    offsetof(BattleVectorTransition, reference.position) == 0x58C &&
    sizeof(BattleVectorTransition) == 0x818 ? 1 : -1];

typedef char BattleVectorPathOffsetsCheck[sizeof(BattleVectorTransition) == 0x818 &&
    offsetof(BattleVectorTransition, path.start) == 0x6fc &&
    offsetof(BattleVectorTransition, path.end) == 0x708 &&
    offsetof(BattleVectorTransition, path.duration) == 0x714 &&
    offsetof(BattleVectorTransition, path.frame) == 0x718 &&
    offsetof(BattleVectorTransition, path.mode) == 0x71c &&
    offsetof(BattleVectorTransition, path.horizontalOffset) == 0x720 &&
    offsetof(BattleVectorTransition, path.depthOffset) == 0x724 &&
    offsetof(BattleVectorTransition, anchors.start) == 0x77c &&
    offsetof(BattleVectorTransition, anchors.end) == 0x788 ? 1 : -1];
typedef char BattleVectorAxisOffsetCheck[offsetof(BattleVectorTransition, axis.current) == 0x738 &&
    sizeof(BattleVectorTransition) == 0x818 ? 1 : -1];

#endif
