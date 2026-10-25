/* NON_MATCHING: instruction scheduling only - retail interleaves the slot constants with the panel offset loads of the five element calls and loads the third scale constant from the pool; everything else matches. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"

namespace {
/* The map departure screen's state (the part drawn here). */
struct MapDepartView {
    /* 0x000 */ u8 unk000[0x48];
    /* 0x048 */ s32 state;              /* 11: the counter panel is shown */
    /* 0x04c */ u8 unk04c[0xfc];
    /* 0x148 */ u8 position[8];         /* the panel's screen position */
    /* 0x150 */ u8 unk150[0x344];
    /* 0x494 */ s32 counter;            /* 20.12 fixed point */
};

/* A layout entry of a UI table: the offset of one element. */
struct LayoutEntry {
    u8 unk00[8];
    s16 x;
    s16 y;
};
}

extern "C" {
extern MapDepartView *g_mapDepart;
s32 FUN_001692ac(u32 a, u32 b);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
s32 vec2GetXInt(const void *vector);
s32 vec2GetYInt(const void *vector);
LayoutEntry *FUN_001834a4(u32 table, u32 entry);
void FUN_002c0940(u8 text[64], s32 value);
f32 FUN_00168594(u8 text[64], u32 style, f32 scale);
void FUN_00162790(u32 layer, u32 color, u8 text[64], f32 x, f32 y, f32 a, f32 b, f32 c);

/* Draws the departure screen's counter panel under a temporary render-state preset. */
u32 FUN_003581bc(void)
{
    MapDepartView *depart = g_mapDepart;
    if (depart->state == 11) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        efctSetSpeed(1.0f);
        FUN_00183bb0();
        if (depart->state == 11) {
            s32 x = vec2GetXInt(depart->position);
            s32 y = vec2GetYInt(depart->position);
            depart = g_mapDepart;
            LayoutEntry *panel = FUN_001834a4(29, 202);
            FUN_001835b4(2, 29, 194, panel->x + x, panel->y + y, 101);
            FUN_001835b4(2, 29, 195, panel->x + x, panel->y + y, 106);
            FUN_001835b4(2, 29, 196, panel->x + x, panel->y + y, 111);
            FUN_001835b4(2, 29, 197, panel->x + x, panel->y + y, 116);
            FUN_001835b4(2, 29, 198, panel->x + x, panel->y + y, 121);
            u32 counter = depart->counter >> 12;
            if (counter > 9999) {
                counter = 9999;
            }
            LayoutEntry *digits = FUN_001834a4(29, 203);
            u8 text[64];
            FUN_002c0940(text, counter);
            f32 width = FUN_00168594(text, 3, 1.0f);
            FUN_00162790(3, 0x57d8ffff, text,
                         panel->x + digits->x + x + (56 - (s32)width) / 2,
                         panel->y + digits->y + y, 1.0f, 1.0f, 1.0f);
            FUN_00183bb0();
        }
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}

} /* extern "C" */
