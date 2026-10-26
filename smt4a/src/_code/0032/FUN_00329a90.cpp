/* NON_MATCHING: render-context wrapper and conditional slide offset recovered; panel x-coordinate VFP conversion/register scheduling differs. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
/* The map departure screen's state (the part drawn here). */
struct MapDepartView {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s32 value;
    /* 0x48 */ s32 state;               /* 2..17: the departure panels are shown */
    /* 0x4c */ u8 unk4c[8];
    /* 0x54 */ s32 slide;               /* 0..4: how far the panel has slid in */
};

}

extern "C" {
extern MapDepartView *g_mapDepart;
s32 FUN_001692ac(u32 a, u32 b);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
void FUN_00355428(void);
void FUN_00164b5c(u32 layer, u32 table, u32 entry, s32 x, s32 y, u32 slot);
void textFormatBuffer(char *buffer, const char *format, ...);

/* Draws the departure screen's panels under a temporary render-state preset; state 14 slides the
   result panel in and shows its counter. */
u32 FUN_00329a90(void)
{
    MapDepartView *depart = g_mapDepart;
    if (depart->state < 2) {
        return 0;
    }
    if (depart->state >= 18) {
        return 0;
    }
    {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        s32 preset = FUN_001692ac(1, 0);
        renderCtxPushA(context, preset);
        s32 state = depart->state;
        if (state == 5 || state == 6) {
            efctSetSpeed(1.0f);
            FUN_00183bb0();
            FUN_00355428();
        } else if (state == 14) {
            efctSetSpeed(1.0f);
            FUN_00183bb0();
            depart = g_mapDepart;
            f32 offset;
            if (depart->slide < 5) {
                offset = 500.0f - (f32)(depart->slide * 100);
            } else {
                offset = 0.0f;
            }
            FUN_00164b5c(2, 19, 30, (s32)offset, 0, 11);
            TextureTableEntryIV *panel = asdTMTexTableEntryAt(19, 0x1105);
            asdTMTexTableEntryAt(19, 0x110d);
            TextureTableEntryIV *counter = asdTMTexTableEntryAt(19, 0x1101);
            TextureTableEntryIV *frame = asdTMTexTableEntryAt(19, 0x1100);
            asdTMTexTableEntryAt(19, 0x1104);
            asdTMTexTableEntryAt(19, 0x1102);
            asdTMTexTableEntryAt(19, 0x1103);
            FUN_001835b4(2, 19, 0x1242, (s32)((f32)panel->x + offset + (f32)frame->x), panel->y + frame->y, 11);
            char text[32];
            textFormatBuffer(text, "%d\201@\202l\202\201\202\203\202\203\202\201", depart->value);
            textDrawString(2, 0xffffffff, text, (f32)panel->x + offset + (f32)counter->x,
                         (f32)(panel->y + counter->y), 0.0f, 1.0f, 1.0f);
        }
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}

} /* extern "C" */
