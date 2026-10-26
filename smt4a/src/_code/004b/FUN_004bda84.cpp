/* NON_MATCHING: register assignment only (151 rows each, every instruction and the schedule agree): retail keeps the owner in r7 and the list index in r5, the anchor in sl and the list base in fp; ours has owner r5, list r7, anchor fp and base sl. */
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define SELECTOR_SLOT_COUNT 13

/* The selector owner (observed fields): per-list pulse counters and selected-entry indices. */
struct SelectorOwner {
    /* 0x000 */ u8 unk000[0x348];
    /* 0x348 */ s32 pulse[12];
    /* 0x378 */ s32 selected[12];
};

/* The selector's data (observed fields). */
struct SelectorData {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 enabledMask;     /* bit i + 1 set: entry i is available */
};


/* The render context past its camp-era members: the stack the selector switches while drawing. */
struct RenderCtxSelector {
    /* 0x0000 */ u8 unk0000[0x1318];
    /* 0x1318 */ RenderStateStack stack;
};

extern "C" {

extern RenderCtxSelector *g_renderCtx;

void efctSetSpeed(f32 speed);
void effectDispatchSelector(s16 entry, s32 x, s32 y, s32 kind, f32 scale);
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the selected entry of list `list`; when several entries are available and the pulse has run
 * past 20 frames, it also draws the next entry, sliding the pair together over a highlighted backdrop. */
void FUN_004bda84(f32 scale, SelectorOwner *owner, SelectorData *data, s32 list, s32 x, s32 y)
{
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x11, 0x12);
    s32 current = 0;
    s32 next = 0;
    u16 mask = data->enabledMask;
    s32 available = 0;
    s32 availableNext = 0;
    s32 i;

    efctSetSpeed(scale);
    for (i = 0; i < SELECTOR_SLOT_COUNT; i++) {
        if ((mask & (1 << (i + 1))) != 0) {
            if (owner->selected[list] == available) {
                current = i + 1;
            }
            available++;
        }
    }
    if (available == 1 || (available > 1 && owner->pulse[list] < 20)) {
        effectDispatchSelector(current, anchor->x + x, anchor->y + y, 0x7E, 1.0f);
    } else if (available > 1) {
        s32 shift;
        s32 nextShift;

        for (i = 0; i < SELECTOR_SLOT_COUNT; i++) {
            if ((mask & (1 << (i + 1))) != 0) {
                if ((owner->selected[list] + 1) % available == availableNext) {
                    next = i + 1;
                }
                availableNext++;
            }
        }
        renderStackSet(&g_renderCtx->stack, 3);
        FUN_0035ae58(anchor->x, anchor->y, anchor->placement->width, anchor->placement->height, 1);
        shift = (owner->pulse[list] - 20) * -3;
        nextShift = shift + 13;
        effectDispatchSelector(current, anchor->x + (shift + x), anchor->y + y, 0x7E, 1.0f);
        effectDispatchSelector(next, anchor->x + (x + nextShift), anchor->y + y, 0x7E, 1.0f);
        renderStackSet(&g_renderCtx->stack, 0);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
