/* NON_MATCHING: only the g_renderCtx / text-array register pair (r9, r8) is swapped. */
#include "shard/S1ListPanel.h"
#include "shard/W4_Match3_AocMainA.h"
#include <stddef.h>

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

typedef char CheckDrawStateOffset[offsetof(RenderCtxA, stackA) == 0x1258 ? 1 : -1];
typedef char CheckDrawWorkPosition[offsetof(AocDrawWork, alternate) == 0x185c ? 1 : -1];

extern "C" {
AocDrawWork *jobGetWork(u32 job);
s32 vec2GetXInt(const AocDrawPosition *position);
s32 vec2GetYInt(const AocDrawPosition *position);
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
u32 FUN_001692ac(s32 mode, s32 option);
void FUN_00164b5c(s32 layer, s32 group, s32 sprite, s32 x, s32 y, u32 flags);
s32 FUN_00473910(AocMainA *main, s32 id);
s32 FUN_00473754(AocMainA *main, s32 id, AocDrawText *text);
SpriteInfo *FUN_001834a4(s32 group, s32 sprite);
void FUN_00162790(s32 layer, u32 color, const AocDrawText *text, f32 x, f32 y, f32 scale, f32 depth, f32 opacity);
}

// Draw the expansion-content information panel at its mode-selected position.
extern "C" s32 FUN_0047a298(u32 job)
{
    AocDrawWork *work = jobGetWork(job);
    AocMainA *main = g_aocMain;
    if (work->flags & 0x1000) {
        AocDrawPosition *position;
        if (work->mode == 0 || work->mode == 1)
            position = &work->normal;
        else if (work->mode == 2)
            position = &work->alternate;
        else
            return 0;
        s32 x = vec2GetXInt(position);
        s32 y = vec2GetYInt(position);
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        FUN_00164b5c(2, 47, 6, x, y, 0x81);
        AocDrawText text[8];
        u32 color = 0xfc4f46ff;
        s32 count = FUN_00473754(main, FUN_00473910(main, 101), text);
        for (s32 i = 0; i < count; ++i) {
            SpriteInfo *sprite = FUN_001834a4(47, 67 + i);
            s32 textX = sprite->x + x;
            s32 textY = sprite->y + y;
            FUN_00162790(3, color, &text[i], static_cast<f32>(textX), static_cast<f32>(textY), 0.5f, 0.0f, 1.0f);
        }
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
