/* AsdSDK/Source/Gfx/Model/AsdModel.c: loaded model tables.
 *
 * The model manager keeps its loaded models in banks; a model is looked up by bank and index. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H

#include "common.h"
#include <stddef.h>

#define ASDMODEL_BANK_SIZE 8

/* A loaded model. */
typedef struct AsdModelEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} AsdModelEntry;

struct AsdModelNameEntry {
    u32 unk00;
    char name[0x40]; // 0x04
    u8 unk44[8];
};

/* One bank (0x284 bytes): bank state, then its loaded models indexed by model id. */
typedef struct AsdModelBank {
    union {
        /* 0x000 */ u8 unk000[0x264];
        struct {
            AsdModelNameEntry entries[ASDMODEL_BANK_SIZE]; // 0x000
            u32 unk260;
        } names;
    };
    /* 0x264 */ AsdModelEntry *model[ASDMODEL_BANK_SIZE];
} AsdModelBank;

typedef char AsdModelBankNameLayoutCheck[sizeof(AsdModelNameEntry) == 0x4c &&
    offsetof(AsdModelNameEntry, name) == 4 &&
    offsetof(AsdModelBank, names.entries) == 0 && sizeof(AsdModelBank) == 0x284 ? 1 : -1];

/* A short table of up to 4 ids, preceded by its length (0x14 bytes). */
typedef struct AsdModelIdList {
    /* 0x00 */ s16 count;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ u32 id[4];
} AsdModelIdList;

struct AsdCmdRecord {
    /* 0x00 */ u8 kind;
    u8 unk01[3];
    /* 0x04 */ const void *commands;
    /* 0x08 */ u32 byteCount;
    /* 0x0C */ u32 flags;
    u8 unk10[0xC];
};
typedef char AsdCmdRecordLayoutCheck[
    offsetof(AsdCmdRecord, kind) == 0 && offsetof(AsdCmdRecord, commands) == 4 &&
    offsetof(AsdCmdRecord, byteCount) == 8 && offsetof(AsdCmdRecord, flags) == 0xC &&
    sizeof(AsdCmdRecord) == 0x1C ? 1 : -1];

/* The render command buffer the model code appends to (see g_commandBufferCursor). */
typedef struct AsdCmdBuffer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *start;        /* first byte of the buffer */
    /* 0x08 */ s32 size;         /* bytes available */
    union {
        /* 0x0C */ u32 unk0c;
        /* 0x0C */ u32 writeOffset;
    };
    /* 0x10 */ u32 unk10;
    union {
        /* 0x14 */ u32 unk14;
        /* 0x14 */ u32 committedOffset;
    };
    union {
        /* 0x18 */ void *list;
        /* 0x18 */ AsdCmdRecord *entries;
    };
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
    union {
        /* 0x00 */ u8 unk00[0x9C];
        struct {
            u8 unk00[0x11];
            /* 0x11 */ u8 pending;
            /* 0x12 */ u8 enabled;
        } submission;
    };
    /* 0x9C */ AsdCmdBuffer *cmdBuffer;
    union {
        /* 0xA0 */ u8 unkA0[0x84];
        /* 0xA0 */ AsdCmdBuffer *activeBuffer;
    };
    /* 0x124 */ s32 unk124;
} AsdGfxContext;

typedef char AsdCmdBufferLayoutCheck[
    offsetof(AsdCmdBuffer, writeOffset) == 0xC &&
    offsetof(AsdCmdBuffer, committedOffset) == 0x14 &&
    offsetof(AsdCmdBuffer, entries) == 0x18 && sizeof(AsdCmdBuffer) == 0x40 ? 1 : -1];
typedef char AsdGfxContextSubmissionLayoutCheck[
    offsetof(AsdGfxContext, submission.pending) == 0x11 &&
    offsetof(AsdGfxContext, submission.enabled) == 0x12 &&
    offsetof(AsdGfxContext, activeBuffer) == 0xA0 &&
    sizeof(AsdGfxContext) == 0x128 ? 1 : -1];

#endif
