/* NON_MATCHING: the control flow of the row loop and the scissor helpers compile differently */
#include "shard/S1ListPanel.h"

extern "C" {

extern RenderCtx *g_renderCtx;

s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
void efctSetSpeed(f32 speed);
f32 FUN_001879d0(RenderCtx *ctx, f32 scale);
void FUN_001835b4(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 z);
SpriteInfo *FUN_001834a4(s32 group, s32 id);
void FUN_00164168(u32 icon, s32 x, s32 y, s32 z, s32 a, s32 value);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void FUN_00168770(void);
void FUN_0049ec78(ListPanel *panel, PanelRow *row, s32 x, s32 y, s32 z);
void FUN_0049ef38(ListPanel *panel, PanelRow *row, s32 x, s32 y, s32 z);
void FUN_0049e7e4(ListPanel *panel, s32 x, s32 y, f32 speed);

/* Draw the panel's frame, tab strip and the rows (icon strips and scissored entry text), then the
 * scroll bar below. */
void FUN_0049e3f8(ListPanel *panel)
{
    s32 x = vec2GetXInt(panel->position);
    s32 y = vec2GetYInt(panel->position);
    f32 speed = panel->speed;

    efctSetSpeed(speed);
    FUN_001879d0(g_renderCtx, 0.25f);
    FUN_001835b4(2, 0x33, 6, x + (s32)FUN_001879d0(g_renderCtx, 0.25f), y, 0x65);
    if (panel->type == 8 || panel->type == 9) {
        s32 offset = (s32)FUN_001879d0(g_renderCtx, 0.25f);

        for (s32 tab = 0; tab < 4; tab++) {
            FUN_001835b4(2, 0x33, 0x2A + tab, x + offset, y, 0x65);
        }
    }
    FUN_001835b4(2, 0x33, 5, x + (s32)FUN_001879d0(g_renderCtx, 0.25f), y, 0x67);

    for (s32 i = 0; i < 5; i++) {
        PanelRow *row = &panel->rows[i];

        if (row->kind == 1) {
            s32 offset = (s32)FUN_001879d0(g_renderCtx, 0.25f);

            for (s32 j = 0; j < 9; j++) {
                SpriteInfo *sprite = FUN_001834a4(0x33, 9 + j);
                s32 entry = panel->scroll + j;

                if (row->first <= entry && entry <= row->last && row->iconIndex >= 0) {
                    FUN_00164168(panel->icons[row->iconIndex], sprite->x + x + offset, sprite->y + y, 0x6A, 6,
                                 entry - row->first);
                }
            }
        } else if (row->kind == 2 && row->first <= panel->scroll + 9 && panel->scroll <= row->last) {
            SpriteInfo *frame = FUN_001834a4(0x33, 8);
            s32 textKind = row->textKind;
            s32 textY = (row->first - panel->scroll) * frame->size[1] + y;
            SpriteInfo *clip = FUN_001834a4(0x33, 5);
            bool suspended = renderCtxSuspendScissor(g_renderCtx);

            FUN_00168e00(clip->x, clip->y, clip->size[0], clip->size[1]);
            if (textKind == 2) {
                FUN_0049ec78(panel, row, x, textY, 0x6A);
            } else if (textKind == 1) {
                FUN_0049ef38(panel, row, x, textY, 0x6A);
            }
            if (suspended) {
                renderCtxResumeScissor(g_renderCtx);
            }
            FUN_00168770();
            efctSetSpeed(speed);
        }
    }
    FUN_0049e7e4(panel, x, y, speed);
}

} /* extern "C" */
