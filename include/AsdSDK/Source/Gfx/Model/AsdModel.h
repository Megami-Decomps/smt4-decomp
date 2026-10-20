/* AsdSDK/Source/Gfx/Model/AsdModel.c: loaded model tables.
 *
 * The model manager keeps its loaded models in banks; a model is looked up by bank and index. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H

#include "common.h"

#define ASDMODEL_BANK_SIZE 8

/* A loaded model. */
typedef struct AsdModelEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} AsdModelEntry;

/* One bank (0x284 bytes): bank state, then its loaded models indexed by model id. */
typedef struct AsdModelBank {
    /* 0x000 */ u8 unk000[0x264];
    /* 0x264 */ AsdModelEntry *model[ASDMODEL_BANK_SIZE];
} AsdModelBank;

/* A short table of up to 4 ids, preceded by its length (0x14 bytes). */
typedef struct AsdModelIdList {
    /* 0x00 */ s16 count;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ u32 id[4];
} AsdModelIdList;

/* The render command buffer the model code appends to (see g_commandBufferCursor). */
typedef struct AsdCmdBuffer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *start;        /* first byte of the buffer */
    /* 0x08 */ s32 size;         /* bytes available */
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *list;       /* listCount records of 0x1C bytes */
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ s32 listCount;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 flag3d;
} AsdCmdBuffer;

/* The graphics context holding the active command buffer. */
typedef struct AsdGfxContext {
    /* 0x00 */ u8 unk00[0x9C];
    /* 0x9C */ AsdCmdBuffer *cmdBuffer;
    /* 0xA0 */ u8 unkA0[0x84];
    /* 0x124 */ s32 unk124;
} AsdGfxContext;

#endif
