/* AsdSDK graphics context (g_asdGfxContext, 0x180 bytes, same layout in both games): the GPU
 * command buffers it submits, the display targets, the display (VBlank) callbacks and counters,
 * and the submission wait timeout. */
#ifndef ASDSDK_SOURCE_GFX_ASDGFXCONTEXT_H
#define ASDSDK_SOURCE_GFX_ASDGFXCONTEXT_H

#include "common.h"
#include <stddef.h>

struct AsdCopyDimensions {
    u32 size : 23;
    u32 format : 2;
    u32 unk19 : 7;
};

/* One queued command list of a command buffer (0x1C bytes). */
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

/* A kind-0 record: a memory transfer (DMA) queued between command lists; same 0x1C-byte slot. */
struct AsdCmdTransferRecord {
    /* 0x00 */ u8 kind;           /* 0 */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ const void *source;
    /* 0x08 */ void *destination;
    /* 0x0C */ u32 bytes;
    /* 0x10 */ u8 unk10[0xC];
};
typedef char AsdCmdTransferRecordSizeCheck[sizeof(AsdCmdTransferRecord) == sizeof(AsdCmdRecord) ? 1 : -1];

/* A kind-3 record: a block-to-linear display transfer (nngx's B2L transfer) of a colour buffer. */
struct AsdCmdDisplayTransferSize {
    /* 0x00 */ u16 width;
    /* 0x02 */ u16 height;
};

struct AsdCmdDisplayTransferFlags {
    u32 inputFormat : 3;    /* 0 RGBA8, 1 RGB8, 2 RGB565, 3 RGB5A1, 4 RGBA4 */
    u32 outputFormat : 3;
    u32 flip : 1;           /* the destination is written bottom-up */
    u32 antialias : 2;      /* 0 none, 1 2x1, 2 2x2 */
    u32 block32 : 1;        /* 32x32 blocks instead of 8x8 */
    u32 unk10 : 2;
    u32 unk12 : 20;
};

struct AsdCmdDisplayTransferRecord {
    /* 0x00 */ u8 kind;           /* 3 */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 source;
    /* 0x08 */ u32 destination;
    /* 0x0C */ AsdCmdDisplayTransferSize sourceSize;
    /* 0x10 */ AsdCmdDisplayTransferSize destinationSize;
    /* 0x14 */ AsdCmdDisplayTransferFlags flags;
    /* 0x18 */ u8 unk18[4];
};
typedef char AsdCmdDisplayTransferRecordSizeCheck[
    sizeof(AsdCmdDisplayTransferRecord) == sizeof(AsdCmdRecord) &&
    offsetof(AsdCmdDisplayTransferRecord, flags) == 0x14 ? 1 : -1];

/* A kind-4 record: a rectangle copy between two targets, coordinates in pixels. */
struct AsdCmdBlitRecord {
    /* 0x00 */ u8 kind;           /* 4 */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 source;
    /* 0x08 */ u32 target;
    /* 0x0C */ u32 flags;
    /* 0x10 */ s16 sourceY;
    /* 0x12 */ s16 sourceX;
    /* 0x14 */ s16 targetY;
    /* 0x16 */ s16 targetX;
    /* 0x18 */ u8 unk18[4];
};
typedef char AsdCmdBlitRecordSizeCheck[sizeof(AsdCmdBlitRecord) == sizeof(AsdCmdRecord) ? 1 : -1];

/* A GPU command buffer (see g_commandBufferCursor): the command words and the lists queued from them. */
typedef struct AsdCmdBuffer {
    /* 0x00 */ u32 unk00;        /* the buffer's handle in the context's registry */
    /* 0x04 */ u8 *start;        /* first byte of the buffer */
    /* 0x08 */ s32 size;         /* bytes available */
    union {
        /* 0x0C */ u32 unk0c;
        /* 0x0C */ u32 writeOffset;
    };
    /* 0x10 */ u32 submittedBytes;
    union {
        /* 0x14 */ u32 unk14;
        /* 0x14 */ u32 committedOffset;
    };
    union {
        /* 0x18 */ void *list;
        /* 0x18 */ AsdCmdRecord *entries;
    };
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ s32 listCount;     /* lists queued */
    /* 0x24 */ u32 unk24;         /* lists executed */
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

typedef char AsdCmdBufferLayoutCheck[
    offsetof(AsdCmdBuffer, writeOffset) == 0xC &&
    offsetof(AsdCmdBuffer, committedOffset) == 0x14 &&
    offsetof(AsdCmdBuffer, entries) == 0x18 && sizeof(AsdCmdBuffer) == 0x40 ? 1 : -1];

/* A command buffer as the context's registry allocates it: chained by handle in one of 32 buckets. */
struct CommandBufferHandleNode {
    AsdCmdBuffer buffer;
    /* 0x40 */ CommandBufferHandleNode *next;
};
typedef char CommandBufferHandleNodeOffsetCheck[
    offsetof(CommandBufferHandleNode, next) == 0x40 && sizeof(CommandBufferHandleNode) == 0x44 ? 1 : -1];

/* Buckets of the display-target registry: a target lives in chain `id % ASD_GFX_TARGET_CHAINS`. */
enum { ASD_GFX_TARGET_CHAINS = 32 };

/* A display target (colour/depth buffer) registered by id, chained in id order in one of 32 buckets. */
struct AsdGfxTarget {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 *pixels;
    /* 0x08 */ u32 format;
    /* 0x0C */ u32 width;
    /* 0x10 */ u32 height;
    /* 0x14 */ u32 heap;        /* heap the pixels were allocated from */
    /* 0x18 */ AsdGfxTarget *next;
};
typedef char AsdGfxTargetSizeCheck[sizeof(AsdGfxTarget) == 0x1C ? 1 : -1];

/* Display callback, called with the display (0x400 top, 0x401 bottom) at its VBlank. */
typedef void (*AsdGfxDisplayCallback)(u32 display);

typedef struct AsdGfxContext {
    /* 0x000 */ u32 unk000;               /* 0xF0 after initialisation */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s32 screenWidths[2];     /* framebuffer rows shown: top 400 (800 in wide mode), bottom */
    /* 0x010 */ u8 initialized;
    /* 0x011 */ u8 submitPending;        /* the GPU is running the active buffer's lists */
    /* 0x012 */ u8 submitEnabled;
    /* 0x013 */ u8 bufferFinished;       /* the write buffer was padded and its size recorded */
    /* 0x014 */ u32 replayLimit;         /* lists to replay beyond the buffer's current list */
    /* 0x018 */ u8 ready;
    /* 0x019 */ u8 unk019[3];
    /* 0x01C */ CommandBufferHandleNode *buffers[32];   /* command buffers by handle & 31 */
    /* 0x09C */ AsdCmdBuffer *cmdBuffer;      /* buffer being written */
    /* 0x0A0 */ AsdCmdBuffer *activeBuffer;   /* buffer the GPU runs */
    /* 0x0A4 */ AsdGfxTarget *targetChains[ASD_GFX_TARGET_CHAINS];   /* targets by id % 32 */
    /* 0x124 */ s32 activeTarget;             /* slot of targets/targetX/targetY */
    /* 0x128 */ AsdGfxTarget *targets[3];     /* top, bottom, top right-eye (stereo) */
    /* 0x134 */ s32 targetX[3];               /* display offset into each target */
    /* 0x140 */ s32 targetY[3];
    /* 0x14C */ u32 swapIndices[2];           /* buffer index each display swaps to next */
    /* 0x154 */ s32 vblankCounts[2];          /* per display, wrapping below 0x7FFFFFFF */
    /* 0x15C */ AsdGfxDisplayCallback displayCallbacks[2];
    /* 0x164 */ u32 topScreenMode;
    /* 0x168 */ u32 submittedBytes;
    /* 0x16C */ u32 submittedListCount;
    /* 0x170 */ void (*onTimeout)(void);      /* run when a submission wait times out */
    /* 0x174 */ u8 unk174[4];
    /* 0x178 */ s64 timeout;                  /* ticks, 0: wait forever */
} AsdGfxContext;

typedef char AsdGfxContextLayoutCheck[
    offsetof(AsdGfxContext, submitPending) == 0x11 &&
    offsetof(AsdGfxContext, buffers) == 0x1C &&
    offsetof(AsdGfxContext, activeBuffer) == 0xA0 &&
    offsetof(AsdGfxContext, activeTarget) == 0x124 &&
    offsetof(AsdGfxContext, vblankCounts) == 0x154 &&
    offsetof(AsdGfxContext, topScreenMode) == 0x164 &&
    offsetof(AsdGfxContext, timeout) == 0x178 &&
    sizeof(AsdGfxContext) == 0x180 ? 1 : -1];

extern "C" {
extern AsdGfxContext g_asdGfxContext;

/* Queues a memory transfer on the write buffer (smt4 asdGxQueueMemoryTransfer, smt4a asdGxQueueMemoryTransfer). */
void asdGxQueueMemoryTransfer(const void *source, void *destination, u32 bytes);
void asdGxQueueMemoryTransfer(const void *source, void *destination, u32 bytes);
/* Queues a command list of `byteCount` bytes on the write buffer (smt4a; flushes it first when it
 * has unsubmitted commands). */
void FUN_0017cdcc(const void *commands, u32 byteCount);
/* Sets the display offsets of the active target (smt4 nngxDisplayEnv, smt4a nngxDisplayEnv). */
void nngxDisplayEnv(s32 x, s32 y);
void nngxDisplayEnv(s32 x, s32 y);
/* Sets the display callback of display 0x400, 0x401 or (0x402) both. */
void asdGfxSetTargetParameter(u32 display, AsdGfxDisplayCallback callback);
/* Sets the submission wait timeout and the callback run when it expires (smt4 FUN_001131f8,
 * smt4a FUN_0014a82c). */
void FUN_001131f8(s64 timeout, void (*onTimeout)(void));
void FUN_0014a82c(s64 timeout, void (*onTimeout)(void));
}

#endif
