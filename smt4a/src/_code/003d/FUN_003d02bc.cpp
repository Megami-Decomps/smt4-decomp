/* NON_MATCHING: restored table-entry argument, speed accessor and render-context wrapper; icon fallback lifetime and float width/height grouping still differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "gamedata/DataTable.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "gfx/StereoParallax.h"

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
    /* 0x18 */ s32 pending;
    /* 0x1C */ s32 elapsed;
    /* 0x20 */ s32 total;
    /* 0x24 */ s32 offsetX;
    /* 0x28 */ u8 unk28[0x20];
    struct Motion { u8 unk00[0x20]; f32 speed; } motion; /* 0x48 */
    /* 0x6C */ u8 unk6c[4];
    /* 0x70 */ f32 scaleX;
    /* 0x74 */ f32 scaleY;
} ItemWindow;

extern ItemWindow *g_sWin;
extern u8 *g_renderCtx;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *a, const void *b);
TextureLayout *asdTMTexTableEntryAt(u32 group, u32 id);
s32 FUN_001692ac(s32 a, s32 b);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *motion);
s32 FUN_0028520c(s16 item);
u32 FUN_00185dd4(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Finds the icon texture of `item` in the item icon table (id * 1000 is its texture id), or -1. */
static __inline s32 findIconTexture(s32 item)
{
    void *table = dataTableGet(0x47, 0);
    IconTableEntry *entries = static_cast<IconTableEntry *>(dataTableGetEntries(table));
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
    TextureLayout *icon = asdTMTexTableEntryAt(0x34, texture);

    renderCtxPushA(reinterpret_cast<RenderCtxA *>(g_renderCtx), FUN_001692ac(1, 0));
    u32 width = (u32)((f32)(icon->width & 0x7FFF) * window->scaleX);
    u32 height = (u32)((f32)(icon->height & 0x7FFF) * window->scaleY);
    TextureLayout *frame = asdTMTexTableEntryAt(0x27, 13);
    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f) + (frame->x - (s32)(width >> 1)) + window->offsetX;
    s32 y = frame->y - (s32)(height >> 1);

    efctSetSpeed(vec2GetSpeed(&window->motion));
    if (FUN_0028520c((s16)window->item) != 0) {
        FUN_00185dd4(2, 0x34, texture, x, y, width, height, 21);
    }
    if (window->pending != 0 && FUN_0028520c((s16)window->pending) != 0) {
        texture = findIconTexture(window->pending) * 1000;
        asdTMTexTableEntryAt(0x34, texture);
        efctSetSpeed((f32)(window->total - window->elapsed) / (f32)window->total);
        FUN_00185dd4(2, 0x34, texture, x, y, width, height, 21);
    }
    efctSetSpeed(1.0f);
    renderStackPop((RenderStateStack *)(g_renderCtx + 0x1258));
    return 0;
}

}
