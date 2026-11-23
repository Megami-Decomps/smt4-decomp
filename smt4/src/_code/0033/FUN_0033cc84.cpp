/* NON_MATCHING: 177 lines (the romwright draft was 217): a readable rebuild from retail's code. Retail multiplies the
 * shade by 0.25 before the fade and the appear time by 0.125 before the fade (the build folds the constants into the
 * fade first), keeps a 0.0 + slide addition before the frame position's conversion, saves r6 and reaches each marker
 * by index; the field names are inferred. */
#include "common.h"
#include <stddef.h>
#include "camp/RenderCtxTitle.h"
#include "code/Code002b.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"

/* One marker of the panel (0x54 bytes from +0x40). */
struct PanelMarker {
    /* 0x00 */ u8 shown;     /* 0: drawn at its stored point */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 row;      /* 1: the first row */
    /* 0x08 */ s32 column;   /* column in its row, or the point index when not shown */
    /* 0x0C */ u8 unk0C[0x48];
};

/* The panel this draw reads (observed fields). */
struct MarkerPanel {
    /* 0x000 */ u8 unk000[0x40];
    /* 0x040 */ PanelMarker markers[8];
    /* 0x2E0 */ u8 unk2E0[0x14];
    /* 0x2F4 */ s32 markerCount;
    /* 0x2F8 */ s32 firstRowCount;
    /* 0x2FC */ s32 secondRowCount;
    /* 0x300 */ u8 unk300[0x68];
    /* 0x368 */ f32 points[4][2];   /* where the hidden markers sit */
    /* 0x388 */ f32 firstRowY;
    /* 0x38C */ f32 secondRowY;
    /* 0x390 */ s32 state;          /* 4: closed */
    /* 0x394 */ f32 fade;           /* 0..4 */
    /* 0x398 */ f32 shade;          /* 0..4 */
    /* 0x39C */ f32 slide;          /* 0..4 */
    /* 0x3A0 */ f32 appear;
};

typedef char MarkerPanelOffsets[sizeof(PanelMarker) == 0x54 && offsetof(MarkerPanel, markerCount) == 0x2F4 &&
    offsetof(MarkerPanel, points) == 0x368 && offsetof(MarkerPanel, state) == 0x390 &&
    offsetof(MarkerPanel, appear) == 0x3A0 ? 1 : -1];

extern "C" {
void gxResetUniformQuadColorsAndScale(void);
f32 curveInterpolatePacked(f32 from, f32 to, f32 frames, f32 frame);
void FUN_0033c72c(MarkerPanel *panel, s32 sprite, f32 x, f32 y, f32 alpha);

/* Draws the marker panel: a darkening screen quad, the panel frame slid in from the side and each marker,
 * centred in its row (or at its stored point when hidden). */
void FUN_0033cc84(MarkerPanel *panel)
{
    if (panel->state == 4)
        return;
    f32 alpha = 1.0f - panel->fade * 0.25f;
    f32 color[4];
    color[0] = 0.0f;
    color[1] = 0.0f;
    color[2] = 0.0f;
    color[3] = panel->shade * 0.25f * alpha * 0.5f;
    renderCtxSelectTexture(g_titleScene, NULL);
    FUN_002b7638(0.0f, 0.0f, 400.0f, 240.0f, (u32)color, (u32)color, (u32)color, (u32)color, 0.87109375f);
    gxResetUniformQuadColorsAndScale();
    efctSetSpeed(alpha);
    f32 slide = (4.0f - panel->slide) * 20.0f;
    s32 frameX = (s32)(0.0f + slide);
    texDrawTableEntryAtStoredOrigin(2, 20, 84, 0, frameX, 35);
    texDrawTableEntryAtStoredOrigin(2, 20, 85, 0, frameX, 35);
    f32 offset = curveInterpolatePacked(30.0f, 0.0f, 8.0f, panel->appear);
    f32 markerAlpha = panel->appear * 0.125f * alpha;
    for (s32 i = 0; i < panel->markerCount; i++) {
        PanelMarker *marker = &panel->markers[i];
        if (marker->shown == 0) {
            FUN_0033c72c(panel, 36, panel->points[marker->column][0], panel->points[marker->column][1] + slide, alpha);
            continue;
        }
        f32 x;
        f32 y;
        if (panel->firstRowCount != 0 && panel->secondRowCount != 0) {
            if (marker->row == 1) {
                x = marker->column * 76.0f + (400.0f - panel->firstRowCount * 76.0f) * 0.5f;
                y = panel->firstRowY;
            } else {
                x = marker->column * 76.0f + (400.0f - panel->secondRowCount * 76.0f) * 0.5f;
                y = panel->secondRowY;
            }
        } else {
            if (marker->row == 1)
                x = marker->column * 76.0f + (400.0f - panel->firstRowCount * 76.0f) * 0.5f;
            else
                x = marker->column * 76.0f + (400.0f - panel->secondRowCount * 76.0f) * 0.5f;
            y = (panel->firstRowY + panel->secondRowY) * 0.5f;
        }
        FUN_0033c72c(panel, 36, x + offset, y, markerAlpha);
    }
}

} /* extern "C" */
