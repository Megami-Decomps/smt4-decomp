/* The big per-scene work block (state machine at 0x3048, timers at 0x12B8) shared by the 0x20xxxx-0x22xxxx scene helpers */
#ifndef SHARD_PLAYSCENE_H
#define SHARD_PLAYSCENE_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include "gamedata/UnitStats.h"
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
        /* The command menu: its plate and one sprite per listed command (up to nine; they run on past
         * this union, over timerSub). */
        struct {
            u8 prefix0000[0x20];
            /* 0x0020 */ UiSpriteState plate;
            u8 unk00AC[0x8C];
            /* 0x0138 */ UiSpriteState items[1];
        } commands;
    };
    /* 0x01C4 */ UiSpriteState timerSub;
    /* 0x0250 */ u8 unk0250[0x4EC];
    /* 0x073C */ UiSpriteState memberFrames[4];    /* the party panels' frames (0: the player) */
    /* 0x096C */ UiSpriteState timerC;             /* the guest panel's frame */
    /* 0x09F8 */ UiSpriteState memberGlows[4];     /* opacity of a panel's highlight */
    /* 0x0C28 */ UiSpriteState memberGlowMarks[4]; /* the highlight's marker (position and opacity) */
    /* 0x0E58 */ u8 unk0E58[0x460];
    /* 0x12B8 */ UiSpriteState timer;              /* slides the whole party display */
    /* 0x1344 */ UiSpriteState blockE;             /* the guest swap flash */
    /* 0x13D0 */ UiSpriteState badgeFades[4];      /* opacity of a panel's state badge */
    /* 0x1600 */ UiSpriteState badgeIcons[4];
    /* 0x1830 */ UiSpriteState badgeIconsLarge[4];
    /* 0x1A60 */ u8 unk1A60[0x690];
    /* 0x20F0 */ UiSpriteState timerFade;
    /* 0x217C */ u32 unk217C;
    /* 0x2180 */ s32 unk2180;
    /* 0x2184 */ u8 unk2184[0xEBC];
    /* 0x3040 */ struct BtlActor *guestActor;
    /* 0x3044 */ u32 unk3044;
    /* 0x3048 */ s32 state;
    /* 0x304C */ s32 mode;
    /* 0x3050 */ u32 unk3050;
    /* 0x3054 */ u32 unk3054;
    /* 0x3058 */ u8 unk3058[0x4];
    union {
        /* 0x305C */ u32 unk305C;
        /* 0x305C */ u32 commandOwner;   /* whose command menu is open: 0 the player's, 1-3 an active position's */
    };
    /* 0x3060 */ u8 unk3060;
    /* 0x3061 */ u8 unk3061[0x3];
    /* 0x3064 */ s32 unk3064;          /* -1 when target selection starts */
    /* 0x3068 */ u8 unk3068[0xA];
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
        /* The party display: index 0..3 the party panels (0: the player), 4 the guest panel. */
        struct {
            u8 unk30EC[0x320];
            /* 0x340C */ s32 modelIds[4];         /* the demon model shown in a panel (> 0) */
            u8 unk341C[0x40];
            /* 0x345C */ u8 targetEnabled[4];     /* whether the command can target a panel */
            /* 0x3460 */ s32 hpDeltas[4];         /* a pending HP change shown on the gauge */
            /* 0x3470 */ s32 mpDeltas[4];
            u8 unk3480[0x9C];
            /* 0x351C */ s32 ailmentCursors[4];   /* which of the unit's ailments tints its model */
            u8 unk352C[0x290];
            /* 0x37BC */ u8 gaugeAnimating[5];
            u8 unk37C1[7];
            /* 0x37C8 */ s32 hpAnimations[5];     /* the gauges' running change */
            /* 0x37DC */ s32 mpAnimations[5];
            /* 0x37F0 */ u32 gaugeBases[5];
            /* 0x3804 */ u8 gaugeRising[5];       /* 0: the running change is subtracted */
            /* 0x3809 */ u8 hpAnimationHeld[5];
            u8 unk380E[0x4E];
            /* 0x385C */ s32 shakeTimers[5];      /* frames left of a panel's shake */
            /* 0x3870 */ f32 shakeAmplitudes[5];
            /* 0x3884 */ s32 originX;             /* the party display's origin */
            /* 0x3888 */ s32 originY;
            u8 unk388C[0x10];
            /* 0x389C */ s8 elementShown[5];
            u8 unk38A1[3];
            /* 0x38A4 */ u32 elementPhases[5];
            /* 0x38B8 */ s32 elements[5];
            /* 0x38CC */ s8 glowShown[5];
            /* 0x38D1 */ s8 vacant[5];            /* the panel has no unit */
            /* 0x38D6 */ s16 hpShown[5];
            /* 0x38E0 */ s16 mpShown[5];
            /* 0x38EA */ s16 levels[5];
            /* 0x38F4 */ s16 unitIndices[5];      /* slot table index of a panel's unit (< 0: none) */
            u8 unk38FE[2];
            /* 0x3900 */ StatBlock units[4];      /* a battle copy of the unit (id 0: use the saved record) */
            /* 0x5110 */ u8 unk5110[0x808];
        } party;
    };
    /* 0x5918 */ u32 unk5918;
    /* 0x591C */ u8 unk591C[9];
    /* 0x5925 */ s8 slideShown[5];               /* a panel's slide-in plate */
    /* 0x592A */ u8 unk592A[2];
    /* 0x592C */ s32 slideTimers[5];
    /* 0x5940 */ u8 unk5940[0xA];
    /* 0x594A */ s8 slideDown[5];
    /* 0x594F */ u8 unk594F;
    /* 0x5950 */ u16 badges[5];                  /* a panel's state badge (5: pulsing while the unit has ailment 4) */
    /* 0x595A */ u16 badgeTimers[5];
    /* 0x5964 */ f32 badgeScales[5];
    /* 0x5978 */ s8 ailmentIconShown[5];         /* draw the icon of ailment 4 */
    /* 0x597D */ u8 unk597D[0x15];
    /* 0x5992 */ s16 ailmentIconX[5];            /* where the icon of ailment 4 was placed */
    /* 0x599C */ s16 ailmentIconY[5];
    /* 0x59A6 */ s16 badgeOffsetX[5];
    /* 0x59B0 */ s16 badgeOffsetY[5];
} PlayScene;

typedef char PlaySceneOffsets[offsetof(PlayScene, slotCount) == 0x3072 && offsetof(PlayScene, unk307F) == 0x307F &&
    offsetof(PlayScene, parts) == 0x3088 && offsetof(PlayScene, unk5918) == 0x5918 ? 1 : -1];
typedef char PlaySceneTargetingOffsets[
    offsetof(PlayScene, targeting.selector) == 0x33A8 &&
    offsetof(PlayScene, targeting.targets) == 0x3460 &&
    offsetof(PlayScene, targeting.fallback) == 0x3504 &&
    sizeof(PlayScene) == 0x59BC ? 1 : -1];
typedef char PlaySceneSpriteOffsets[
    offsetof(PlayScene, timerSub) == 0x1C4 && offsetof(PlayScene, timerC) == 0x96C &&
    offsetof(PlayScene, timer) == 0x12B8 && offsetof(PlayScene, blockE) == 0x1344 &&
    offsetof(PlayScene, timerFade) == 0x20F0 && offsetof(PlayScene, unk217C) == 0x217C ? 1 : -1];
typedef char PlaySceneMemberSpriteOffsets[
    offsetof(PlayScene, memberFrames) == 0x73C && offsetof(PlayScene, memberGlows) == 0x9F8 &&
    offsetof(PlayScene, memberGlowMarks) == 0xC28 && offsetof(PlayScene, badgeFades) == 0x13D0 &&
    offsetof(PlayScene, badgeIcons) == 0x1600 && offsetof(PlayScene, badgeIconsLarge) == 0x1830 &&
    offsetof(PlayScene, guestActor) == 0x3040 ? 1 : -1];
typedef char PlayScenePartyOffsets[
    offsetof(PlayScene, party.modelIds) == 0x340C && offsetof(PlayScene, party.hpDeltas) == 0x3460 &&
    offsetof(PlayScene, party.targetEnabled) == 0x345C && offsetof(PlayScene, party.mpDeltas) == 0x3470 &&
    offsetof(PlayScene, party.ailmentCursors) == 0x351C && offsetof(PlayScene, party.gaugeAnimating) == 0x37BC &&
    offsetof(PlayScene, party.hpAnimations) == 0x37C8 && offsetof(PlayScene, party.gaugeRising) == 0x3804 &&
    offsetof(PlayScene, party.shakeTimers) == 0x385C && offsetof(PlayScene, party.originX) == 0x3884 &&
    offsetof(PlayScene, party.elementShown) == 0x389C && offsetof(PlayScene, party.glowShown) == 0x38CC &&
    offsetof(PlayScene, party.unitIndices) == 0x38F4 && offsetof(PlayScene, party.units) == 0x3900 &&
    offsetof(PlayScene, slideShown) == 0x5925 && offsetof(PlayScene, slideTimers) == 0x592C &&
    offsetof(PlayScene, badges) == 0x5950 && offsetof(PlayScene, ailmentIconShown) == 0x5978 &&
    offsetof(PlayScene, badgeOffsetY) == 0x59B0 ? 1 : -1];
typedef char PlaySceneCommandSpriteOffsets[
    offsetof(PlayScene, commands.plate) == 0x20 && offsetof(PlayScene, commands.items) == 0x138 &&
    offsetof(PlayScene, commandOwner) == 0x305C && sizeof(PlayScene) == 0x59BC ? 1 : -1];
typedef char PlaySceneIntroAnimationOffsets[
    offsetof(PlayScene, intro.animation) == 0xAC &&
    offsetof(PlayScene, intro.animation.alpha) == 0xCC &&
    sizeof(PlayScene) == 0x59BC ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00206270(PlayScene *scene);

#ifdef __cplusplus
}
#endif

#endif
