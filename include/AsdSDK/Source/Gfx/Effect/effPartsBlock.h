/* AsdSDK/Source/Gfx/Effect/effParts.cpp: the 0x2c-byte block that carries an effect part's data.
 *
 * A block holds two data blobs (A and B). A blob's data lives either inside the same file image
 * (`data` is then an offset from the start of the block, 0 for none) or in a heap copy the block
 * owns (`owned` set, `data` the address). */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTSBLOCK_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTSBLOCK_H

#include "common.h"

typedef struct EffBlock {
    /* 0x00 */ u32 id;
    union {
        /* 0x04 */ u32 flags;
        /* 0x04 */ u16 kind;
    };
    /* 0x08 */ u32 unk08;
    union {
        /* 0x0C */ u32 unk0c;
        /* 0x0C */ u16 tagA;
    };
    /* 0x10 */ void *dataA;   /* address when ownedA is set, else offset from the block (0: none) */
    /* 0x14 */ s32 sizeA;
    /* 0x18 */ void *ownedA; /* heap allocation holding the data, if it is a copy */
    union {
        /* 0x1C */ u32 unk1c;
        /* 0x1C */ u16 tagB;
    };
    /* 0x20 */ void *dataB;
    /* 0x24 */ s32 sizeB;
    /* 0x28 */ void *ownedB;
} EffBlock;

/* One entry of the per-kind handler table (g_handlerTable, 0x44 bytes each): what a block's
 * `unk08` data object is made and copied with. */
typedef struct EffBlockHandler {
    /* 0x00 */ void *(*create)(EffBlock *src);   /* builds the data object for a block like `src` */
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ void *(*clone)(void *data);       /* copies a data object */
    /* 0x18 */ u8 unk18[0x2c];
} EffBlockHandler;

/* Blob A's data address, or NULL if it has none. */
static __inline void *effBlockDataA(EffBlock *block)
{
    if (block->ownedA != NULL) {
        return block->dataA;
    }
    if (block->dataA != NULL) {
        return (u8 *)block + (u32)block->dataA;
    }
    return NULL;
}

/* Blob B's data address, or NULL if it has none. */
static __inline void *effBlockDataB(EffBlock *block)
{
    if (block->ownedB != NULL) {
        return block->dataB;
    }
    if (block->dataB != NULL) {
        return (u8 *)block + (u32)block->dataB;
    }
    return NULL;
}

#endif
