/* NON_MATCHING: initialises the GX graphics presets from a configuration (command buffers, the three render target blocks, display environment, default lighting/scale constants); written from the decompilation, the unrolled per-block target loops are merged into one helper and the many DAT_ globals keep their retail names, and the callback/label arguments of FUN_001124ac, asdGfxSetTargetParameter and FUN_001131f8 (code and data labels in retail) are passed as NULL */
#include "common.h"

#define GX_TARGET_BLOCK_TOP 0
#define GX_TARGET_BLOCK_WIDE 1
#define GX_TARGET_BLOCK_BOTTOM 2

/* One render target preset: the mode, the targets created for it and their results. */
struct GxTargetBlock {
    /* 0x00 */ u32 mode;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 handles[3];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 width;
    /* 0x1C */ u32 height;
    /* 0x20 */ u32 results[3];
};

typedef char GxTargetBlockSize[sizeof(GxTargetBlock) == 0x2C ? 1 : -1];

/* The configuration passed in (or the defaults below). */
struct GxConfig {
    /* 0x00 */ u32 mainSize;
    /* 0x04 */ u32 secondarySize;
    /* 0x08 */ u32 listA[2];
    /* 0x10 */ u32 listB[2];
    /* 0x18 */ u32 displayA;
    /* 0x1C */ u32 displayB;
    /* 0x20 */ u32 stereo;           /* 1: two targets per block, else three */
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 format;
};

#define GX_DEFAULT_MAIN_SIZE 0x100000
#define GX_DEFAULT_SECONDARY_SIZE 0x800
#define GX_DEFAULT_DISPLAY_B 0x500
#define GX_MODE_TOP 0x400
#define GX_MODE_BOTTOM 0x401
#define GX_MODE_WIDE 0x410
#define GX_TARGET_FORMAT 0x10000
#define GX_SCREEN_WIDTH 0xF0
#define GX_TOP_HEIGHT 400
#define GX_BOTTOM_HEIGHT 0x140
#define GX_RESULT_QUERY 0x600

extern "C" {
extern GxTargetBlock g_asdGxPresets[3];
extern GxConfig DAT_004e3bb4;
extern u8 DAT_004e3b1c;
extern u8 DAT_004e3b34;
extern s32 DAT_004e3aa0;
extern s32 DAT_004e3b18;
extern u32 DAT_004e3b54, DAT_004e3b58, DAT_004e3b5c, DAT_004e3b60, DAT_004e3b64, DAT_004e3b68, DAT_004e3b6c, DAT_004e3b70;
extern u32 DAT_004e3b84, DAT_004e3b88, DAT_004e3b90, DAT_004e3b94;
extern u32 DAT_004e3ba0, DAT_004e3ba4, DAT_004e3bac;
extern s32 DAT_004e3ba8;
extern u8 DAT_004e3be0, DAT_004e3be1;

void FUN_001124ac(const void *a, const void *b);
void gfxCmdListSetInit(void *list, u32 count, ...);
void asdGfxSetMode(u32 mode);
void FUN_002c2728(u32 count, u32 *handles);
void FUN_002c2620(u32 handle);
void FUN_002c2534(u32 format, u32 width, u32 height, u32 flags);
void FUN_002c24dc(u32 query, u32 *result);
void nngxDisplayEnv(u32 arg);
void FUN_0010ea10(u32 a, u32 b, u32 c);
void asdGxCommandListSetLists(void *lists);
void asdGxCommandListSetNewListId(u32 id);
void FUN_002bef68(void *list, u32 arg);
void asdGfxSetTargetParameter(u32 id, const void *data);
void FUN_001131f8(u32 id, u32 flag, const void *data);
void FUN_0010a544(void);

/* Creates the targets of one preset block. */
static __inline void gxTargetBlockInit(GxTargetBlock *block, u32 mode, u32 count, u32 height, u32 format)
{
    block->mode = mode;
    block->count = count;
    block->width = GX_SCREEN_WIDTH;
    block->height = height;
    asdGfxSetMode(mode);
    FUN_002c2728(block->count, block->handles);
    for (u32 i = 0; i < block->count; i++) {
        FUN_002c2620(block->handles[i]);
        FUN_002c2534(format, GX_SCREEN_WIDTH, height, GX_TARGET_FORMAT);
        u32 result = 0;
        FUN_002c24dc(GX_RESULT_QUERY, &result);
        block->results[i] = result;
    }
    nngxDisplayEnv(0);
}

void FUN_001054bc(GxConfig *config)
{
    if (config != NULL) {
        DAT_004e3bb4 = *config;
    } else {
        config = &DAT_004e3bb4;
        DAT_004e3bb4.mainSize = GX_DEFAULT_MAIN_SIZE;
        DAT_004e3bb4.secondarySize = GX_DEFAULT_SECONDARY_SIZE;
        DAT_004e3bb4.displayA = GX_DEFAULT_DISPLAY_B;
        DAT_004e3bb4.displayB = 0;
        DAT_004e3bb4.stereo = 0;
    }
    FUN_001124ac(NULL, NULL);
    gfxCmdListSetInit(&DAT_004e3b1c, 2, config->mainSize);
    u32 format = DAT_004e3bb4.format;
    u32 count = config->stereo == 1 ? 2 : 3;

    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_TOP], GX_MODE_TOP, count, GX_TOP_HEIGHT, format);
    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_BOTTOM], GX_MODE_BOTTOM, count, GX_BOTTOM_HEIGHT, format);
    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_WIDE], GX_MODE_WIDE, count, GX_TOP_HEIGHT, format);

    FUN_0010ea10(0, config->displayA, config->displayB);
    gfxCmdListSetInit(&DAT_004e3b34, 2, config->listA[0], config->listA[1]);
    asdGxCommandListSetLists(&DAT_004e3b34);
    u32 listId;
    gfxCmdListSetInit(&listId, 1, config->listB[0], config->listB[1]);
    asdGxCommandListSetNewListId(listId);
    FUN_002bef68(&DAT_004e3b1c, 0);
    DAT_004e3b54 = 0x3E800000;
    DAT_004e3b58 = 0x3E800000;
    DAT_004e3b5c = 0x3E800000;
    DAT_004e3b60 = 0;
    DAT_004e3b64 = 0x3E800000;
    DAT_004e3b68 = 0x3E800000;
    DAT_004e3b6c = 0x3E800000;
    DAT_004e3b70 = 0;
    DAT_004e3b84 = 0x3F800000;
    DAT_004e3b88 = 0x3F800000;
    DAT_004e3b90 = 0;
    DAT_004e3b94 = 0;
    if (DAT_004e3ba8 != 0)
        DAT_004e3bac = 0;
    DAT_004e3ba4 = 0x4682937D;
    DAT_004e3ba0 = 0;
    asdGfxSetTargetParameter(GX_MODE_TOP, NULL);
    FUN_001131f8(0x4FE74FAF, 0, NULL);
    FUN_0010a544();
    DAT_004e3be0 = DAT_004e3aa0 != GX_DEFAULT_DISPLAY_B;
    DAT_004e3be1 = DAT_004e3b18 != GX_DEFAULT_DISPLAY_B;
}

} /* extern "C" */
