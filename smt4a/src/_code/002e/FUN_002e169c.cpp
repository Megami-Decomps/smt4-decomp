#include "util/Vec2Fixed.h"
/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs ~205 rows); retail loads the render-context pointer before the ring-push value call and spills differently */
#include "common.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// Sprite placement record: x/y of the label (halfwords at +8/+10).

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

u32 FUN_001692ac(u32 a, u32 b);
void FUN_0020bd54(void);
void fadeObjectResetIfActive(void* fade);
s32 vec2GetYInt(void* vec);
void FUN_00164168(u32 iconSet, s32 x, s32 y, s32 a, f32 scale, s32 b, s32 c);
void FUN_002acfc8(void* label, s32 x, s32 y);
void skinObjectUpdateMatrices(RenderCtxA* ctx);
void renderCtxResetColorScale(RenderCtxA* ctx);

// Draws the button-help overlay (confirm/cancel prompts) while the owning menu is in one of
// its first four states.
u8 FUN_002e169c(void)
{
    ButtonHelp* help = g_buttonHelp.help;
    if (help->visible == 0) return 0;

    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
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
                TextureTableEntryIV* rect = asdTMTexTableEntryAt(10, 29);
                if (help->useIconSet != 0) {
                    FUN_00164168(help->iconSet, rect->x, rect->y, 21, 1.0f, 6, 0);
                } else if (help->useIcons != 0) {
                    textDrawString(2, help->spriteSet, (const char *)help->labelA, (f32)rect->x, (f32)rect->y, 0.93f, 0.0f, 1.0f);
                } else {
                    FUN_002acfc8(help->labelA, rect->x, rect->y);
                }
                rect = asdTMTexTableEntryAt(10, 30);
                if (help->useIconSet != 0) {
                    FUN_00164168(help->iconSet, rect->x, rect->y, 21, 1.0f, 6, 1);
                } else if (help->useIcons != 1) {
                    textDrawString(2, help->spriteSet, (const char *)help->labelB, (f32)rect->x, (f32)rect->y, 0.93f, 0.0f, 1.0f);
                } else {
                    FUN_002acfc8(help->labelB, rect->x, rect->y);
                }
            }
        }
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
