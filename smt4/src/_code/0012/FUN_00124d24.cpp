/* NON_MATCHING: final FUN_002bedb0 becomes a tail call (retail keeps bl + shared epilogue); register choice for the last widget pointer/x also differs. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "ui/MessageMain.h"

struct TitlePartInfo {
    u8 unk00[8];
    s16 x;
    s16 y;
};

extern "C" {
extern MessageGlobals g_messageMain;
extern RenderCtx *g_titleScene;
s32 gameFlagIsSet(u32 flag);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
f32 vec2GetSpeed(void *vec);
u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_002bee04(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void FUN_002bed3c();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
TitlePartInfo *FUN_002bf4f8(s32 sheet, s32 part);
void FUN_002bf380(s32 layer, s32 sheet, s32 part, s32 x, s32 y, s32 priority);
void FUN_002bdce0(s32 value, s32 x, s32 y, s32 flag);
s32 FUN_002bedb0(RenderCtx *context, s32 stack);

/* Draws the banner's title-style frame, optional second plate and optional third plate. */
void FUN_00124d24(s32 wide)
{
    if (gameFlagIsSet(0x402)) {
        s32 x = vec2GetXInt(g_messageMain.banner->widget754);
        s32 y = vec2GetYInt(g_messageMain.banner->widget754);
        f32 speed = vec2GetSpeed(g_messageMain.banner->widget754);
        if (g_messageMain.banner->unk82 > 0) {
            x += vec2GetXInt(g_messageMain.banner->widget7E0);
            y += vec2GetYInt(g_messageMain.banner->widget7E0);
        }
        FUN_002bee04(g_titleScene, 3, FUN_002c5d80(1, 0));
        efctSetSpeed(speed);
        FUN_002bed3c();

        TitlePartInfo *part;
        if (wide) {
            part = FUN_002bf4f8(14, 148);
            x += static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
        } else {
            part = FUN_002bf4f8(14, 192);
        }
        FUN_002bf380(2, 14, 0, part->x + x, part->y + y, 11);
        FUN_002bdce0(g_messageMain.banner->unk6C, part->x + x, part->y + y, 0);

        if (g_messageMain.banner->unk80) {
            if (wide)
                part = FUN_002bf4f8(14, 256);
            else
                part = FUN_002bf4f8(14, 287);
            FUN_002bf380(2, 14, 12, part->x + x, part->y + y, 11);
            FUN_002bdce0(g_messageMain.banner->unk74, part->x + x, part->y + y, 1);
        }

        MessagePanel *banner = g_messageMain.banner;
        if (banner->unkA1) {
            s32 bx = vec2GetXInt(banner->widget754);
            s32 by = vec2GetYInt(banner->widget754);
            s32 px = static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f) + bx);
            part = FUN_002bf4f8(14, 256);
            FUN_002bf380(2, 14, 22, part->x + px, part->y + by, 11);
            FUN_002bdce0(-banner->unk9C, part->x + px, part->y + by, 1);
        }
        efctSetSpeed(1.0f);
        FUN_002bed3c();
        FUN_002bedb0(g_titleScene, 3);
    }
}

} /* extern "C" */
