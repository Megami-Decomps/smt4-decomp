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

struct AsdCopyDimensions {
    u32 size : 23;
    u32 format : 2;
    u32 unk19 : 7;
};
struct AsdCmdRecord {
    /* 0x00 */ u8 kind;
    union {
        u8 unk01[3];
        struct {
            /* 0x01 */ u8 runCallback;  /* run the buffer's callback when this list finishes */
            /* 0x02 */ u8 resetState;   /* clear the context's submit flags */
        } done;
    };
    /* 0x04 */ const void *commands;
    /* 0x08 */ u32 byteCount;
    union {
        /* 0x0C */ u32 flags;
        /* 0x0C */ AsdCopyDimensions copySource;
    };
    union {
        /* 0x10 */ u8 unk10[0xC];
        struct {
            /* 0x10 */ void *address;
            /* 0x14 */ u32 pitch;
            /* 0x18 */ AsdCopyDimensions dimensions;
        } copyTarget;
    };
};
typedef char AsdCmdRecordLayoutCheck[
    offsetof(AsdCmdRecord, kind) == 0 && offsetof(AsdCmdRecord, commands) == 4 &&
    offsetof(AsdCmdRecord, byteCount) == 8 && offsetof(AsdCmdRecord, flags) == 0xC &&
    sizeof(AsdCmdRecord) == 0x1C ? 1 : -1];
typedef char AsdCmdCopyRecordLayoutCheck[
    sizeof(AsdCopyDimensions) == 4 && offsetof(AsdCmdRecord, copySource) == 0xC &&
    offsetof(AsdCmdRecord, copyTarget.address) == 0x10 &&
    offsetof(AsdCmdRecord, copyTarget.pitch) == 0x14 &&
    offsetof(AsdCmdRecord, copyTarget.dimensions) == 0x18 ? 1 : -1];

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
    union {
        /* 0x28 */ u32 unk28;
        /* 0x28 */ s32 listIndex;     /* list being executed */
    };
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    union {
        /* 0x38 */ u32 unk38;
        /* 0x38 */ void (*onListAdvance)(s32 listIndex);  /* run after a list finishes */
    };
    union {
        /* 0x3C */ u8 unk3c;
        /* 0x3C */ u8 callbackAtEnd;  /* also run the callback when the last list finishes */
    };
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
            u8 unk13[5];
            /* 0x18 */ u8 unk18;
        } submission;
        struct {
            u8 prefix[0x1C];
            /* 0x1C */ AsdCmdBuffer *buckets[32];
        } bufferRegistry;
        struct {
            u8 prefix[8];
            s32 croppedRows[2];
        } presentation;
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
typedef char AsdGfxBufferRegistryOffsetCheck[
    offsetof(AsdGfxContext, bufferRegistry.buckets) == 0x1C ? 1 : -1];
typedef char AsdGfxPresentationOffsetCheck[
    offsetof(AsdGfxContext, presentation.croppedRows) == 8 &&
    sizeof(AsdGfxContext) == 0x128 ? 1 : -1];


extern "C" {
u32 gameGetOptionProgressStatus();
}

extern "C" {
s32 fontMeasureLineAdvance(const void *text, s32 fontIndex);
}

extern "C" {
u8 FUN_002c15fc(u32 index);
}

extern "C" {
void FUN_00191ea8(u32 id, u32 variant, u32 a, u32 b, u32 value);
}

extern "C" {
u32 asdModelGetSlotArray0(s32 slot);
}

extern "C" {
u32 FUN_0014143c(u32 slot, u32 arg);
}

extern "C" {
u32 *FUN_001af0d0(u32 *command, s32 alt);
}

extern "C" {
void FUN_003180c4(u32 index, const char *value);
}

extern "C" {
s32 aocLoadTextureNode(u32 a, u32 b, u32 c, u32 d);
}

extern "C" {
void FUN_0014de4c(int *arg0, int *arg1, int arg2);
}

#endif
