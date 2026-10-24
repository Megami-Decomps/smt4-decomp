/* NON_MATCHING: the icon table lookup is inlined twice with different register allocation and the render-state push/pop sequence is scheduled differently (178 vs 183 rows); the drawing logic is the same. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* One row of the icon table (4 bytes): an item id and the texture it maps to. */
typedef struct IconTableEntry {
    s16 id;
    s16 texture;
} IconTableEntry;

/* A texture layout record (only the fields read here). */
typedef struct TextureLayout {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 width;               /* bit 15 is a flag */
    /* 0x06 */ u16 height;
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} TextureLayout;

/* The item window (only the fields used here). */
typedef struct ItemWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 active;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ s32 item;
    /* 0x18 */ s32 pending;             /* a second item shown while it is fading in */
    /* 0x1C */ s32 elapsed;
    /* 0x20 */ s32 total;
    /* 0x24 */ s32 offsetX;
    /* 0x28 */ u8 unk28[0x40];
    /* 0x68 */ f32 speed;
    /* 0x6C */ u8 unk6c[4];
    /* 0x70 */ f32 scaleX;
    /* 0x74 */ f32 scaleY;
} ItemWindow;

extern ItemWindow *g_sWin;
extern u8 *g_renderCtx;

u32 dataTableGet(u32 id, u32 index);
IconTableEntry *dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *a, const void *b);
TextureLayout *FUN_001834a4(u32 group, u32 id);
s32 FUN_001692ac(s32 a, s32 b);
f32 renderCtxCalculateStereoParallax(u8 *context, f32 depth);
void efctSetSpeed(f32 speed);
s32 FUN_0028520c(s16 item);
u32 FUN_00185dd4(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Finds the icon texture of `item` in the item icon table (id * 1000 is its texture id), or -1. */
static __inline s32 findIconTexture(s32 item)
{
    u32 table = dataTableGet(0x47, 0);
    IconTableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    IconTableEntry key;

    key.id = (s16)item;
    IconTableEntry *found = (IconTableEntry *)libc_bsearch(&key, entries, count, 4, FUN_002321f8);

    return found != NULL ? found->texture : -1;
}

/* Draws the item window's icon (and, while one is pending, the fading second icon) centred on
 * its slot, scaled by the window's scale, inside a pushed render state. Always returns 0. */
u32 FUN_003d02bc(void)
{
    ItemWindow *window = g_sWin;

    if (window->active == 0) {
        return 0;
    }
    s32 texture = findIconTexture(window->item) * 1000;
    TextureLayout *icon = FUN_001834a4(0x34, texture);

    renderStackPush((RenderStateStack *)(g_renderCtx + 0x1258), FUN_001692ac(1, 0));
    u32 width = (u32)((f32)(icon->width & 0x7FFF) * window->scaleX);
    u32 height = (u32)((f32)(icon->height & 0x7FFF) * window->scaleY);
    TextureLayout *frame = FUN_001834a4(0x27, 13);
    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f) + (frame->x - (s32)(width >> 1)) + window->offsetX;
    s32 y = frame->y - (s32)(height >> 1);

    efctSetSpeed(window->speed);
    if (FUN_0028520c((s16)window->item) != 0) {
        FUN_00185dd4(2, 0x34, texture, x, y, width, height, 21);
    }
    if (window->pending != 0 && FUN_0028520c((s16)window->pending) != 0) {
        texture = findIconTexture(window->pending) * 1000;
        FUN_001834a4(0x34, texture);
        efctSetSpeed((f32)(window->total - window->elapsed) / (f32)window->total);
        FUN_00185dd4(2, 0x34, texture, x, y, width, height, 21);
    }
    efctSetSpeed(1.0f);
    renderStackPop((RenderStateStack *)(g_renderCtx + 0x1258));
    return 0;
}

}
