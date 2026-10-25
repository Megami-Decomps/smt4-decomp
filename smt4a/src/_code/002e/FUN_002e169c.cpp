#include "util/Vec2Fixed.h"
/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs ~205 rows); retail loads the render-context pointer before the ring-push value call and spills differently */
#include "common.h"
#include "shard/TextureDrawCall.h"

// Render-state stack: the current entry is slots[index]; the flush callback runs when the
// value changed (or a flush is already pending).
struct DrawStateRing {
    s32 index;              // 0x00
    u32 unk04;
    u32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 pad19[3];
    void (*flush)(void);    // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x1258];
    DrawStateRing stateRing;    // 0x1258
};

// Sprite placement record: x/y of the label (halfwords at +8/+10).
struct SpriteRect {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
};

// Button-help overlay: the two prompts (confirm/cancel icons) with their fade states.
struct ButtonHelp {
    u8 unk000[0x10];
    u32 state;              // 0x010
    u8 unk014[0x37c - 0x14];
    u8 fadeA[0x2c];         // 0x37c: fade object, also the label position vector
    s32 fadeBits;           // 0x3a8: fade progress (compared as raw float bits)
    u8 unk3ac[0x408 - 0x3ac];
    u8 fadeB[0x8c];         // 0x408
    u8 fadeC[0x8c];         // 0x494
    u8 fadeD[0x8c];         // 0x520
    u8 unk5ac[0x5e0 - 0x5ac];
    u8 visible;             // 0x5e0
    u8 shown;               // 0x5e1
    u8 unk5e2[2];
    u8 mode;                // 0x5e4
    u8 unk5e5[5];
    u8 enabled;             // 0x5ea
    u8 unk5eb;
    u32 spriteSet;          // 0x5ec
    u8 labelA[0x40];        // 0x5f0
    u8 labelB[0x44];        // 0x630
    u8 useIcons;            // 0x674
    u8 unk675[3];
    u32 iconSet;            // 0x678
    u8 useIconSet;          // 0x67c
};

// Global slot holding the active overlay.
struct ButtonHelpHolder {
    u32 unk00;
    ButtonHelp* help;       // 0x04
};

extern "C" {

extern ButtonHelpHolder g_buttonHelp;
extern RenderCtx* g_renderCtx;

void FUN_00157558(RenderCtx* ctx);
u32 FUN_001692ac(u32 a, u32 b);
void FUN_0020bd54(void);
void fadeObjectResetIfActive(void* fade);
s32 vec2GetYInt(void* vec);
SpriteRect* FUN_001834a4(s32 group, s32 index);
void FUN_00164168(u32 iconSet, s32 x, s32 y, s32 a, f32 scale, s32 b, s32 c);
void FUN_00162790(s32 a, u32 spriteSet, void* label, f32 x, f32 y, f32 scaleA, f32 scaleB, f32 scaleC);
void FUN_002acfc8(void* label, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtx* ctx);
void renderCtxResetColorScale(RenderCtx* ctx);

static void ringPush(DrawStateRing* ring, u32 value)
{
    s32 index = ring->index;
    u32 previous = ring->slots[index];
    ring->index = index + 1;
    ring->slots[index + 1] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

static void ringPop(DrawStateRing* ring)
{
    s32 index = ring->index;
    u32 previous = ring->slots[index];
    ring->index = index - 1;
    if (ring->dirty != 0 || previous != ring->slots[index - 1]) {
        ring->flush();
        ring->dirty = 0;
    }
}

// Draws the button-help overlay (confirm/cancel prompts) while the owning menu is in one of
// its first four states.
u8 FUN_002e169c(void)
{
    ButtonHelp* help = g_buttonHelp.help;
    if (help->visible == 0) return 0;

    FUN_00157558(g_renderCtx);
    ringPush(&g_renderCtx->stateRing, FUN_001692ac(1, 0));
    if (help->state == 0 || help->state == 1 || help->state == 2 || help->state == 3) {
        FUN_0020bd54();
        if (help->shown != 0) {
            if (help->mode != 1) {
                fadeObjectResetIfActive(help->fadeA);
                fadeObjectResetIfActive(help->fadeC);
                fadeObjectResetIfActive(help->fadeD);
                fadeObjectResetIfActive(help->fadeB);
            } else {
                s32 x = vec2GetXInt(help->fadeA);
                s32 y = vec2GetYInt(help->fadeA);
                FUN_001835b4(2, 10, 0, x, y, 16);
                FUN_001835b4(2, 10, 1, x, y, 16);
                FUN_001835b4(2, 10, 163, x, y, 16);
                FUN_001835b4(2, 10, 164, x, y, 16);
            }
            if (help->shown != 0 && help->enabled != 0 && help->fadeBits >= 0x3f800000) {
                SpriteRect* rect = FUN_001834a4(10, 29);
                if (help->useIconSet != 0) {
                    FUN_00164168(help->iconSet, rect->x, rect->y, 21, 1.0f, 6, 0);
                } else if (help->useIcons != 0) {
                    FUN_00162790(2, help->spriteSet, help->labelA, (f32)rect->x, (f32)rect->y, 0.93f, 0.0f, 1.0f);
                } else {
                    FUN_002acfc8(help->labelA, rect->x, rect->y);
                }
                rect = FUN_001834a4(10, 30);
                if (help->useIconSet != 0) {
                    FUN_00164168(help->iconSet, rect->x, rect->y, 21, 1.0f, 6, 1);
                } else if (help->useIcons != 1) {
                    FUN_00162790(2, help->spriteSet, help->labelB, (f32)rect->x, (f32)rect->y, 0.93f, 0.0f, 1.0f);
                } else {
                    FUN_002acfc8(help->labelB, rect->x, rect->y);
                }
            }
        }
    }
    ringPop(&g_renderCtx->stateRing);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
