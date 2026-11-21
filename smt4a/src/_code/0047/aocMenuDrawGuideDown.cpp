/* NON_MATCHING: only the g_renderCtx / text-array register pair (r9, r8) is swapped. */
#include "ui/UiSpriteApi.h"
#include "shard/S1ListPanel.h"
#include "shard/W4_Match3_AocMainA.h"
#include "addon/aocApplication.h"
#include <stddef.h>
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct AocDrawPosition { f32 x, y; };
struct AocDrawWork {
    u32 flags; // 0x00
    u8 unk04[0x17a0];
    s32 mode; // 0x17a4
    u8 unk17a8[0x28];
    AocDrawPosition normal; // 0x17d0
    u8 unk17d8[0x84];
    AocDrawPosition alternate; // 0x185c
};
struct AocDrawText { u16 text[64]; };

typedef char CheckDrawStateOffset[offsetof(RenderCtxA, stacks[RENDER_STACK_A]) == 0x1258 ? 1 : -1];
typedef char CheckDrawWorkPosition[offsetof(AocDrawWork, alternate) == 0x185c ? 1 : -1];

extern "C" {
AocDrawWork *jobGetWork(u32 job);
u32 renderCtxPackPassFlags(s32 mode, s32 option);
void texDrawCompositeSprite(s32 layer, s32 group, s32 sprite, s32 x, s32 y, u32 flags);
s32 FUN_00473754(AocMain *main, s32 id, AocDrawText *text);
}

// Draw the expansion-content information panel at its mode-selected position.
extern "C" s32 aocMenuDrawGuideDown(u32 job)
{
    AocDrawWork *work = jobGetWork(job);
    AocMain *main = g_aocMain;
    if (work->flags & 0x1000) {
        AocDrawPosition *position;
        if (work->mode == 0 || work->mode == 1)
            position = &work->normal;
        else if (work->mode == 2)
            position = &work->alternate;
        else
            return 0;
        s32 x = vec2GetXInt((UiSpriteState *)position);
        s32 y = vec2GetYInt((UiSpriteState *)position);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        texDrawCompositeSprite(2, 47, 6, x, y, 0x81);
        AocDrawText text[8];
        u32 color = 0xfc4f46ff;
        s32 count = FUN_00473754(main, FUN_00473910(main, 101), text);
        for (s32 i = 0; i < count; ++i) {
            TextureTableEntryIV *sprite = asdTMTexTableEntryAt(47, 67 + i);
            s32 textX = sprite->x + x;
            s32 textY = sprite->y + y;
            textDrawString(static_cast<f32>(textX), static_cast<f32>(textY), 0.5f, 3, 0.0f, color, 1.0f, (const char *)&text[i]);
        }
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    }
    return 0;
}
