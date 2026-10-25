/* The big per-scene work block (state machine at 0x3048, timers at 0x12B8) shared by the 0x20xxxx-0x22xxxx scene helpers */
#ifndef SHARD_PLAYSCENE_H
#define SHARD_PLAYSCENE_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

/* A 100-byte part of the scene (see objectPartRunUnlessLocked). */
typedef struct PlayScenePart {
    /* 0x00 */ u8 unk00[0x64];
} PlayScenePart;

typedef struct PlayScene {
    union {
        /* 0x0000 */ u8 unk0000[0x1C4];
        struct {
            u8 prefix0000[0xAC];
            /* 0x00AC */ UiSpriteState animation;
        } intro;
    };
    /* 0x01C4 */ u8 timerSub[1];
    /* 0x01C5 */ u8 unk01C5[0x7A7];
    /* 0x096C */ u8 timerC[1];
    /* 0x096D */ u8 unk096D[0x94B];
    /* 0x12B8 */ u8 timer[1];
    /* 0x12B9 */ u8 unk12B9[0x8B];
    /* 0x1344 */ u8 blockE[1];
    /* 0x1345 */ u8 unk1345[0xDAB];
    /* 0x20F0 */ u8 timerFade[1];
    /* 0x20F1 */ u8 unk20F1[0x8B];
    /* 0x217C */ u32 unk217C;
    /* 0x2180 */ s32 unk2180;
    /* 0x2184 */ u8 unk2184[0xEC0];
    /* 0x3044 */ u32 unk3044;
    /* 0x3048 */ s32 state;
    /* 0x304C */ s32 mode;
    /* 0x3050 */ u32 unk3050;
    /* 0x3054 */ u32 unk3054;
    /* 0x3058 */ u8 unk3058[0x4];
    /* 0x305C */ u32 unk305C;
    /* 0x3060 */ u8 unk3060;
    /* 0x3061 */ u8 unk3061[0x11];
    /* 0x3072 */ s16 slotCount;        /* number of slots[] that are in use (>= 0) */
    /* 0x3074 */ s16 slots[4];
    /* 0x307C */ u8 unk307C[0x3];
    /* 0x307F */ u8 unk307F;
    /* 0x3080 */ u8 unk3080;
    /* 0x3081 */ u8 unk3081;
    /* 0x3082 */ u8 unk3082;
    /* 0x3083 */ u8 unk3083[0x1];
    /* 0x3084 */ u8 unk3084;
    /* 0x3085 */ u8 unk3085[0x3];
    /* 0x3088 */ PlayScenePart parts[1]; /* indexed by unk305C */
    union {
        /* 0x30EC */ u8 unk30EC[0x282C];
        struct {
            u8 unk30EC[0x2BC];
            /* 0x33A8 */ PlayScenePart selector;
            u8 unk340C[0x54];
            /* 0x3460 */ s32 targets[41];
            /* 0x3504 */ s32 fallback;
        } targeting;
    };
    /* 0x5918 */ u32 unk5918;
} PlayScene;

typedef char PlaySceneOffsets[offsetof(PlayScene, slotCount) == 0x3072 && offsetof(PlayScene, unk307F) == 0x307F &&
    offsetof(PlayScene, parts) == 0x3088 && offsetof(PlayScene, unk5918) == 0x5918 ? 1 : -1];
typedef char PlaySceneTargetingOffsets[
    offsetof(PlayScene, targeting.selector) == 0x33A8 &&
    offsetof(PlayScene, targeting.targets) == 0x3460 &&
    offsetof(PlayScene, targeting.fallback) == 0x3504 &&
    sizeof(PlayScene) == 0x591C ? 1 : -1];
typedef char PlaySceneIntroAnimationOffsets[
    offsetof(PlayScene, intro.animation) == 0xAC &&
    offsetof(PlayScene, intro.animation.unk20) == 0xCC &&
    sizeof(PlayScene) == 0x591C ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00206270(PlayScene *scene);

#ifdef __cplusplus
}
#endif

#endif
