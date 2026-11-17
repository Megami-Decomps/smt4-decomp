/* NON_MATCHING: final renderCtxPopState becomes a tail call (retail keeps bl + shared epilogue); register choice for the last widget pointer/x also differs. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "ui/MessageMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
f32 vec2GetSpeed(void *vec);
u32 renderCtxPackPassFlags(u32 slot, u32 flags);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void texDrawCompositeSprite(s32 layer, s32 sheet, s32 part, s32 x, s32 y, s32 priority);
void FUN_002bdce0(s32 value, s32 x, s32 y, s32 flag);
s32 renderCtxPopState(RenderCtx *context, s32 stack);

/* Draws the banner's title-style frame, optional second plate and optional third plate. */
void FUN_00124d24(s32 wide)
{
    if (gameFlagIsSet(0x402)) {
        s32 x = vec2GetXInt(&g_messageMain.banner->sprites[12]);
        s32 y = vec2GetYInt(&g_messageMain.banner->sprites[12]);
        f32 speed = vec2GetSpeed(&g_messageMain.banner->sprites[12]);
        if (g_messageMain.banner->transition > 0) {
            x += vec2GetXInt(&g_messageMain.banner->sprites[13]);
            y += vec2GetYInt(&g_messageMain.banner->sprites[13]);
        }
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(speed);
        gxResetColorQuadToWhite();

        TextureTableEntryIV *part;
        if (wide) {
            part = asdTMTexTableEntryAt(14, 148);
            x += static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
        } else {
            part = asdTMTexTableEntryAt(14, 192);
        }
        texDrawCompositeSprite(2, 14, 0, part->x + x, part->y + y, 11);
        FUN_002bdce0(g_messageMain.banner->counterValue, part->x + x, part->y + y, 0);

        if (g_messageMain.banner->unk080) {
            if (wide)
                part = asdTMTexTableEntryAt(14, 256);
            else
                part = asdTMTexTableEntryAt(14, 287);
            texDrawCompositeSprite(2, 14, 12, part->x + x, part->y + y, 11);
            FUN_002bdce0(g_messageMain.banner->counterElapsed, part->x + x, part->y + y, 1);
        }

        MessageWindow *banner = g_messageMain.banner;
        if (banner->unk0A1) {
            s32 bx = vec2GetXInt(&banner->sprites[12]);
            s32 by = vec2GetYInt(&banner->sprites[12]);
            s32 px = static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f) + bx);
            part = asdTMTexTableEntryAt(14, 256);
            texDrawCompositeSprite(2, 14, 22, part->x + px, part->y + by, 11);
            FUN_002bdce0(-banner->unk09C, part->x + px, part->y + by, 1);
        }
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        renderCtxPopState(g_titleScene, 3);
    }
}

} /* extern "C" */
