#ifndef EVENT_NPCTEXTUREWORK_H
#define EVENT_NPCTEXTUREWORK_H
#include "common.h"
#include <stddef.h>
struct NpcTextureSource;
/* The Npc2d portrait job's work area (0x98 bytes), shared by the portrait creators and the update
 * npc2dPortraitUpdate. */
struct NpcTextureWork {
    /* 0x00 */ union {
        s32 phase;
        s32 npcId;
    };
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 loadStep;        /* 0 loaded, 1 load deferred while skipping, 2 parse the portrait, 3 start it */
    /* 0x10 */ s32 x;
    /* 0x14 */ s32 y;
    /* 0x18 */ f32 speed;
    /* 0x1C */ union { u32 unk1C; f32 rotation; };
    /* 0x20 */ f32 scale;
    /* 0x24 */ f32 opacity;
    /* 0x28 */ f32 fadeStep;        /* added to opacity each frame until it leaves [0, 1] */
    /* 0x2C */ f32 releaseTimer;    /* counts down to releasing the last image's texture node */
    /* 0x30 */ u8 stopWhenHidden;
    u8 unk31[7];
    /* 0x38 */ s32 screenRegion;
    /* 0x3C */ s32 textureTable;
    /* 0x40 */ s32 textureNode;
    /* 0x44 */ s32 lastImage;
    /* 0x48 */ u32 portraitHandle;  /* the cached NKDW portrait resource (BattleFrameSprite) */
    /* 0x4C */ s32 portraitId;
    /* 0x50 */ u32 variantIndex;
    /* 0x54 */ NpcTextureSource *source;
    /* 0x58 */ f32 animationFrame;
    /* 0x5C */ u8 animate;
    u8 unk5D[3];
    /* 0x60 */ s32 slideStep;       /* moves x towards 0 while the portrait is visible */
    /* 0x64 */ u8 active;
    u8 unk65[3];
    /* 0x68 */ s32 shortCycleFrame; /* counts 0-29 while active */
    /* 0x6C */ s32 longCycleFrame;  /* counts 0-149 while active */
    /* 0x70 */ u8 appearEventQueued;
    /* 0x71 */ u8 fadeOutEventQueued;
    u8 unk72[2];
    /* 0x74 */ f32 sizes[3][2];
    /* 0x8C */ f32 origin[2];
    u8 unk94[4];
};
typedef char NpcTextureWorkLayoutCheck[(sizeof(NpcTextureWork) == 0x98 && offsetof(NpcTextureWork, textureTable) == 0x3C) ? 1 : -1];
typedef char NpcTextureDisplayOffsets[
    offsetof(NpcTextureWork, stopWhenHidden) == 0x30 &&
    offsetof(NpcTextureWork, screenRegion) == 0x38 &&
    offsetof(NpcTextureWork, portraitHandle) == 0x48 &&
    offsetof(NpcTextureWork, portraitId) == 0x4C &&
    offsetof(NpcTextureWork, animate) == 0x5C ? 1 : -1];
typedef char NpcTextureWorkNpcIdOffset[offsetof(NpcTextureWork, npcId) == 0 ? 1 : -1];
typedef char NpcTextureSourceOffsets[
    offsetof(NpcTextureWork, rotation) == 0x1C &&
    offsetof(NpcTextureWork, opacity) == 0x24 &&
    offsetof(NpcTextureWork, releaseTimer) == 0x2C &&
    offsetof(NpcTextureWork, lastImage) == 0x44 &&
    offsetof(NpcTextureWork, source) == 0x54 &&
    offsetof(NpcTextureWork, animationFrame) == 0x58 &&
    offsetof(NpcTextureWork, slideStep) == 0x60 &&
    offsetof(NpcTextureWork, active) == 0x64 &&
    offsetof(NpcTextureWork, shortCycleFrame) == 0x68 &&
    offsetof(NpcTextureWork, longCycleFrame) == 0x6C &&
    offsetof(NpcTextureWork, appearEventQueued) == 0x70 &&
    offsetof(NpcTextureWork, fadeOutEventQueued) == 0x71 &&
    offsetof(NpcTextureWork, sizes) == 0x74 &&
    offsetof(NpcTextureWork, origin) == 0x8C ? 1 : -1];
typedef char NpcTextureVariantOffsetCheck[
    offsetof(NpcTextureWork, variantIndex) == 0x50 &&
    sizeof(NpcTextureWork) == 0x98 ? 1 : -1];
#endif
