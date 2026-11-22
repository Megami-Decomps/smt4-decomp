/* Structs shared by the helper functions in code shard 003B. */
#ifndef SHARD_SHARD003B_H
#define SHARD_SHARD003B_H

#include "common.h"
#include <stddef.h>

#include "shard/Shard003A.h"

typedef struct Quad {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} Quad;

/* The StreetPass card's character info panel (characterInfoPanelPopulate fills it; 0xB8 bytes): its text
 * objects, the demon preview it holds and the state of each of the nine portrait textures. */
typedef struct ResSet {
    /* 0x00 */ void *title;
    /* 0x04 */ void *name;
    /* 0x08 */ void *equipmentLabels[7];
    /* 0x24 */ u16 equipmentIds[7];  /* the equipment each label shows */
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ void *description;
    /* 0x38 */ void *demonName;
    /* 0x3C */ s32 demonNameWidth;
    /* 0x40 */ void *race;
    /* 0x44 */ s32 raceWidth;
    /* 0x48 */ void *specialItemName;
    /* 0x4C */ s32 specialItemWidth;
    /* 0x50 */ void *skillLabels[8];
    /* 0x70 */ s32 skillWidths[8];
    /* 0x90 */ s16 previewId;      /* the demon whose bust-up is acquired, 0: none */
    /* 0x92 */ u8 unk92[2];
    /* 0x94 */ s32 states[9];     /* ResSetTextureState of each portrait texture (table 0x2E) */
} ResSet;

/* ResSet::states (gfxAdvanceTextureRequestQueue steps them). */
enum ResSetTextureState {
    RES_SET_TEXTURE_IDLE,
    RES_SET_TEXTURE_REQUESTED,
    RES_SET_TEXTURE_LOADING,
    RES_SET_TEXTURE_LOADED
};
enum {
    RES_SET_TEXTURE_COUNT = 9,
    RES_SET_TEXTURE_TABLE = 0x2E
};
typedef char ResSetLayoutCheck[sizeof(ResSet) == 0xB8 && offsetof(ResSet, equipmentIds) == 0x24 &&
    offsetof(ResSet, skillLabels) == 0x50 && offsetof(ResSet, previewId) == 0x90 &&
    offsetof(ResSet, states) == 0x94 ? 1 : -1];

typedef struct Rec12C {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 unk12C;
} Rec12C;

/* The two-byte input consumed by this pool implementation. */
typedef struct PoolBytePair {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
} PoolBytePair;

typedef struct StateFlag46 {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 state;
} StateFlag46;

#endif
