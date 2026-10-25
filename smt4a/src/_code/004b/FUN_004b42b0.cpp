/* NON_MATCHING: retail spills r0-r3 in the prologue and reads x/y back from the stack, scans the icon mask with the shift in the register-offset tst form and tail-calls effectDispatchSelector for the single-icon case; this build keeps x/y in registers and lays the loops out differently. */
#include "camp/RenderCtx.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

/* A texture entry: its draw offset and a size record. */
struct IconEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size; /* width, height */
};

/* The panel's per-slot cycling state. */
struct CyclingPanel {
    /* 0x0000 */ u8 unk0000[0x7E6C];
    /* 0x7E6C */ s32 timer[24];
    /* 0x7ECC */ s32 cursor[24];
};

/* The render context with its fifth stack. */
struct PanelRenderCtx : RenderCtxA {
    /* 0x12D8 */ u8 unk12D8[0x40];
    /* 0x1318 */ RenderStateStack stackE;
};

extern "C" {
extern PanelRenderCtx *g_renderCtx;

IconEntry *asdTMTexTableEntryAt(u32 file, s32 index);
SlotRecord *gameGetSlotRecord(s32 slotIndex);
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 bottomScreen);
void effectDispatchSelector(s32 icon, s32 x, s32 y, s32 z, f32 scale);
}

/* Draws the icon of slot `slot`'s current entry; with several entries it cycles through them with a short fade. */
extern "C" void FUN_004b42b0(CyclingPanel *panel, s32 slot, s32 x, s32 y)
{
    IconEntry *entry = asdTMTexTableEntryAt(0x1d, 300);
    u32 mask = 0;
    s32 count = 0;
    s32 nextIndex = 0;
    s16 current = 0;
    s16 next = 0;
    if (slot >= 0) {
        mask = gameGetSlotRecord(slot)->status.mask;
    }
    s32 *cursor = &panel->cursor[slot];
    for (s32 icon = 1; icon <= 13; icon++) {
        if (mask & (1 << icon)) {
            if (*cursor == count) {
                current = icon;
            }
            count++;
        }
    }
    if (count != 1) {
        if (count < 2) {
            return;
        }
        s32 *timer = &panel->timer[slot];
        (*timer)++;
        if (*timer >= 20) {
            for (s32 icon = 1; icon <= 13; icon++) {
                if (mask & (1 << icon)) {
                    if ((*cursor + 1) % count == nextIndex) {
                        next = icon;
                    }
                    nextIndex++;
                }
            }
            renderStackSet(&g_renderCtx->stackE, 3);
            FUN_0035ae58(x + entry->x, y + entry->y, entry->size[0], entry->size[1], 1);
            s32 slide = (*timer - 20) * -3;
            effectDispatchSelector(current, entry->x + slide + x, entry->y + y, 0x7e, 1.0f);
            effectDispatchSelector(next, entry->x + x + slide + 13, entry->y + y, 0x7e, 1.0f);
            renderStackSet(&g_renderCtx->stackE, 0);
            if (*timer >= 24) {
                *cursor = (*cursor + 1) % count;
                *timer = 0;
            }
            return;
        }
    }
    effectDispatchSelector(current, entry->x + x, entry->y + y, 0x7e, 1.0f);
}
