/* NON_MATCHING: initialises the GX graphics presets from a configuration (command buffers, the three render target blocks, display environment, default lighting/scale constants); written from the decompilation, the unrolled per-block target loops are merged into one helper and the many DAT_ globals keep their retail names, and the callback/label arguments of FUN_00149ae0, asdGfxSetTargetParameter and FUN_0014a82c (code and data labels in retail) are passed as NULL */
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
extern GxConfig DAT_0063ff5c;
extern u8 DAT_0063fec4;
extern u8 DAT_0063fedc;
extern s32 DAT_0063fe48;
extern s32 DAT_0063fec0;
extern u32 DAT_0063fefc, DAT_0063ff00, DAT_0063ff04, DAT_0063ff08, DAT_0063ff0c, DAT_0063ff10, DAT_0063ff14, DAT_0063ff18;
extern u32 DAT_0063ff2c, DAT_0063ff30, DAT_0063ff38, DAT_0063ff3c;
extern u32 DAT_0063ff48, DAT_0063ff4c, DAT_0063ff54;
extern s32 DAT_0063ff50;
extern u8 DAT_0063ff88, DAT_0063ff89;

void FUN_00149ae0(const void *a, const void *b);
void gxCmdListSetCreate(void *list, u32 count, ...);
void asdGfxSetMode(u32 mode);
void FUN_00149950(u32 count, u32 *handles);
void FUN_00161074(u32 handle);
void FUN_00149864(u32 format, u32 width, u32 height, u32 flags);
void FUN_00149a88(u32 query, u32 *result);
void FUN_00149840(u32 arg);
void FUN_00144c9c(u32 a, u32 b, u32 c);
void asdGxCommandListSetLists(void *lists);
void asdGxCommandListSetNewListId(u32 id);
void asdGxBindCmdlistAt(void *list, u32 arg);
void asdGfxSetTargetParameter(u32 id, const void *data);
void FUN_0014a82c(u32 id, u32 flag, const void *data);
void FUN_0013f048(void);

/* Creates the targets of one preset block. */
static __inline void gxTargetBlockInit(GxTargetBlock *block, u32 mode, u32 count, u32 height, u32 format)
{
    block->mode = mode;
    block->count = count;
    block->width = GX_SCREEN_WIDTH;
    block->height = height;
    asdGfxSetMode(mode);
    FUN_00149950(block->count, block->handles);
    for (u32 i = 0; i < block->count; i++) {
        FUN_00161074(block->handles[i]);
        FUN_00149864(format, GX_SCREEN_WIDTH, height, GX_TARGET_FORMAT);
        u32 result = 0;
        FUN_00149a88(GX_RESULT_QUERY, &result);
        block->results[i] = result;
    }
    FUN_00149840(0);
}

void FUN_00139c90(GxConfig *config)
{
    if (config != NULL) {
        DAT_0063ff5c = *config;
    } else {
        config = &DAT_0063ff5c;
        DAT_0063ff5c.mainSize = GX_DEFAULT_MAIN_SIZE;
        DAT_0063ff5c.secondarySize = GX_DEFAULT_SECONDARY_SIZE;
        DAT_0063ff5c.displayA = GX_DEFAULT_DISPLAY_B;
        DAT_0063ff5c.displayB = 0;
        DAT_0063ff5c.stereo = 0;
    }
    FUN_00149ae0(NULL, NULL);
    gxCmdListSetCreate(&DAT_0063fec4, 2, config->mainSize);
    u32 format = DAT_0063ff5c.format;
    u32 count = config->stereo == 1 ? 2 : 3;

    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_TOP], GX_MODE_TOP, count, GX_TOP_HEIGHT, format);
    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_BOTTOM], GX_MODE_BOTTOM, count, GX_BOTTOM_HEIGHT, format);
    gxTargetBlockInit(&g_asdGxPresets[GX_TARGET_BLOCK_WIDE], GX_MODE_WIDE, count, GX_TOP_HEIGHT, format);

    FUN_00144c9c(0, config->displayA, config->displayB);
    gxCmdListSetCreate(&DAT_0063fedc, 2, config->listA[0], config->listA[1]);
    asdGxCommandListSetLists(&DAT_0063fedc);
    u32 listId;
    gxCmdListSetCreate(&listId, 1, config->listB[0], config->listB[1]);
    asdGxCommandListSetNewListId(listId);
    asdGxBindCmdlistAt(&DAT_0063fec4, 0);
    DAT_0063fefc = 0x3E800000;
    DAT_0063ff00 = 0x3E800000;
    DAT_0063ff04 = 0x3E800000;
    DAT_0063ff08 = 0;
    DAT_0063ff0c = 0x3E800000;
    DAT_0063ff10 = 0x3E800000;
    DAT_0063ff14 = 0x3E800000;
    DAT_0063ff18 = 0;
    DAT_0063ff2c = 0x3F800000;
    DAT_0063ff30 = 0x3F800000;
    DAT_0063ff38 = 0;
    DAT_0063ff3c = 0;
    if (DAT_0063ff50 != 0)
        DAT_0063ff54 = 0;
    DAT_0063ff4c = 0x4682937D;
    DAT_0063ff48 = 0;
    asdGfxSetTargetParameter(GX_MODE_TOP, NULL);
    FUN_0014a82c(0x4FE74FAF, 0, NULL);
    FUN_0013f048();
    DAT_0063ff88 = DAT_0063fe48 != GX_DEFAULT_DISPLAY_B;
    DAT_0063ff89 = DAT_0063fec0 != GX_DEFAULT_DISPLAY_B;
}

} /* extern "C" */
