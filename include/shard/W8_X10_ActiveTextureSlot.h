#ifndef SHARD_W8_X10_ACTIVE_TEXTURE_SLOT_H
#define SHARD_W8_X10_ACTIVE_TEXTURE_SLOT_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

#define ACTIVE_TEXTURE_SLOT_PARTICLES 64

/* The record g_activeTextureSlot points at: a texture and 64 particles drawn with it. */
typedef struct ActiveTextureSlot {
    /* 0x000 */ AsdTexture *texture;
    /* 0x004 */ u32 particleState[ACTIVE_TEXTURE_SLOT_PARTICLES];
    /* 0x104 */ f32 particlePosition[ACTIVE_TEXTURE_SLOT_PARTICLES][3];
} ActiveTextureSlot;

typedef char ActiveTextureSlotSizeCheck[sizeof(ActiveTextureSlot) == 0x404 ? 1 : -1];

#endif
