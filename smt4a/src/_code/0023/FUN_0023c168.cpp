/* NON_MATCHING: retail derives the three table pointers as a running chain (+0x2100 each) from the first table; armcc computes the third from the base (+0x4200) and orders the stride stores differently. */
#include "common.h"
#include "mobiclip/MobiclipAllocator.h"

/* The codec's decoder state (allocated as 0x670 bytes); only the fields set up here are named. */
struct MobiclipDecoderState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 width;
    /* 0x08 */ u32 height;
    /* 0x0C */ u8 unk0C[0x30];
    /* 0x3C */ u8 *tableA;
    /* 0x40 */ u8 *tableB;
    /* 0x44 */ u8 *tableC;
    /* 0x48 */ u32 unk48;
};

/* A set of luma/chroma frame buffers: luma cleared to 0, chroma filled with 0x80. */
struct MobiclipFrameSet {
    /* 0x00 */ MobiclipDecoderState *decoder;
    /* 0x04 */ u8 **frames;
    /* 0x08 */ u32 frameCount;
    /* 0x0C */ u32 lastFrame;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 flags;
    /* 0x18 */ u32 stride;
    /* 0x1C */ u32 unk1C;
};

/* The decoder's three lookup tables, stored back to back (the last is only partly used). */
struct MobiclipTables {
    u8 tables[3][0x2100];
};

extern "C" {
extern MobiclipTables DAT_0053faa0;

void rt_memclr(void *destination, u32 size);

/* Creates the decoder state and frame buffers for the given size; returns 1 on success. */
u32 FUN_0023c168(MobiclipFrameSet *set, u32 width, u32 height, u32 frameCount, s32 flags, s32 mode)
{
    if (mode == 0 || mode != 1)
        return 0;
    if (!(width <= 0x400 && flags == 0))
        return 0;
    rt_memclr(set, 0x20);
    MobiclipDecoderState *decoder = (MobiclipDecoderState *)callGlobalHook(0x670);
    set->decoder = decoder;
    if (decoder == NULL)
        return 0;
    u8 *table = DAT_0053faa0.tables[0];
    decoder->tableA = table;
    table += 0x2100;
    decoder->tableB = table;
    table += 0x2100;
    decoder->tableC = table;
    decoder->unk48 = 0;
    decoder->width = width;
    decoder->height = height;
    set->stride = 0x400;
    if (width <= 0x200)
        set->stride = 0x200;
    if (width <= 0x100)
        set->stride = 0x100;
    set->frameCount = frameCount;
    set->unk1C = mode;
    set->flags = flags;
    set->frames = (u8 **)callGlobalHook(frameCount << 2);
    if (set->frames == NULL)
        return 0;
    u32 total = set->stride * (height + (height >> 1) + 1);
    for (u32 i = 0; i < frameCount; i++) {
        u8 *frame = (u8 *)callGlobalHook(total);
        set->frames[i] = frame;
        if (frame == NULL)
            return 0;
        for (u32 j = 0; j < set->stride * height; j++)
            set->frames[i][j] = 0;
        for (s32 j = set->stride * height; j < (s32)total; j++)
            set->frames[i][j] = 0x80;
    }
    set->lastFrame = frameCount - 1;
    return 1;
}
}
