/* NON_MATCHING: 185 lines (shape 99); the same calls, tests, constants and branches as retail. What differs:
 * - the marker rectangles' VFP loads and conversions are scheduled differently (retail loads y, x, height and width
 *   one by one, this build x to height with one vldmia);
 * - retail copies one of the two sprite scales through a VFP register (scaleY in the label loop, scaleX in the
 *   icon loop) where this build loads both with one vldmia (label loop) or ldrd (icon loop, as the matched sibling
 *   uiDrawTransientSprites does). */
#include "ui/TransientSpriteList.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/RenderCtxSelect.h"
#include "game/GameState.h"
#include "gfx/ColoredQuad.h"
#include "text/TextDraw.h"

/* An event marker of the navigation map (eventRefreshVisibility decides `visible`). */
struct NaviEventMarker {
    /* 0x00 */ u8 visible;
    /* 0x01 */ u8 pending;
    /* 0x02 */ u8 unk02[4];
    /* 0x06 */ s16 map;          /* the map the marker belongs to */
    /* 0x08 */ s32 id;           /* -1: the marker has no event flag of its own */
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ s32 x;
    /* 0x20 */ s32 y;
    /* 0x24 */ u32 width;
    /* 0x28 */ u32 height;
    /* 0x2C */ f32 depth;
};

/* The navigation map screen as its icon and marker draw sees it (the siblings in this block each have their own
 * view). */
struct NaviIconDrawView {
    /* 0x00000 */ TransientSpriteList icons;           /* drawn on layer 11 */
    /* 0x05A8C */ u8 unk05A8C[4];
    /* 0x05A90 */ TransientSpriteEntry labels[24];     /* each drawn on its own layer, 11 + 2 * index */
    /* 0x061B0 */ s32 labelCount;
    /* 0x061B4 */ NaviEventMarker markers[1024];
    /* 0x121B4 */ s32 markerCount;
};
typedef char NaviIconDrawViewOffsets[
    sizeof(NaviEventMarker) == 0x30 && offsetof(NaviIconDrawView, labels) == 0x5A90 &&
    offsetof(NaviIconDrawView, labelCount) == 0x61B0 && offsetof(NaviIconDrawView, markers) == 0x61B4 &&
    offsetof(NaviIconDrawView, markerCount) == 0x121B4 ? 1 : -1];

enum {
    NAVI_MARKER_FRAME = 0xF0808000,       /* every pending marker's area, when hidden entries are not all shown */
    NAVI_MARKER_PENDING = 0xFF808080,
    NAVI_MARKER_PENDING_NO_FLAG = 0x8080FF80,
    NAVI_MARKER_HIDDEN = 0xFF808040,
    NAVI_MARKER_HIDDEN_NO_FLAG = 0x8080FF40
};

extern "C" {
void pairCopy(const Point2 *source, Point2 *destination); // declcheck: local (the shared one takes word pointers)
/* The shared declarations of these three (ui/AnimatedMessage.h) take Apocalypse's RenderCtxA. */
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 state); // declcheck: local (IV's RenderCtx)
void renderCtxPopState(RenderCtx *context, s32 stack); // declcheck: local (IV's RenderCtx)
void gxResetColorQuadToWhite(void); // declcheck: local (its header's render-stack prototypes take RenderCtxA)
void drawSetColorFromRGBA8(u32 color);
void uiDrawTableTextureSized(s32 layer, u32 resource, u32 sprite, s32 x, s32 y,
                  u32 scaleX, u32 scaleY, s32 tag);

/* Draws the navigation map's labels and icons, with the event markers' areas outlined for debugging. */
void naviDrawIconsAndMarkers(NaviIconDrawView *screen)
{
    Point2 origin;
    pairCopy(&screen->icons.origin, &origin);
    if (g_gameState.showAllEntries == 0) {
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, true));
        renderCtxSelectTexture(g_titleScene, 0);
        u32 color = NAVI_MARKER_FRAME;
        for (s32 index = 0; index < screen->markerCount; index++) {
            const NaviEventMarker *marker = &screen->markers[index];
            if (marker->visible && marker->pending) {
                gxSubmitDrawZeroExtraParams((f32)marker->x + origin.x, (f32)marker->y + origin.y,
                    (f32)marker->width, (f32)marker->height, color, color, color, marker->depth, color);
            }
        }
        renderCtxPopState(g_titleScene, 3);
    }
    renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(3, false));
    for (s32 index = 0; index < screen->labelCount; index++) {
        const TransientSpriteEntry *label = &screen->labels[index];
        if (label->visible != 0) {
            drawSetColorFromRGBA8(label->color);
            effectSetByteSpeed(label->color & 0xFF);
            uiDrawTableTextureSized(9, label->resource, label->sprite, (s32)((f32)label->x + origin.x),
                (s32)((f32)label->y + origin.y), label->scaleX, label->scaleY, index * 2 + 11);
        }
    }
    renderCtxPopState(g_titleScene, 3);
    if (g_gameState.showHiddenIcons != 0) {
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, false));
        renderCtxSelectTexture(g_titleScene, 0);
        for (s32 index = 0; index < screen->markerCount; index++) {
            const NaviEventMarker *marker = &screen->markers[index];
            if (marker->visible && marker->pending) {
                u32 color = marker->id != -1 ? NAVI_MARKER_PENDING : NAVI_MARKER_PENDING_NO_FLAG;
                gxSubmitDrawZeroExtraParams((f32)marker->x + origin.x, (f32)marker->y + origin.y,
                    (f32)marker->width - 2.0f, (f32)marker->height - 2.0f, color, color, color, marker->depth, color);
            } else if (marker->map == screen->icons.selection.map) {
                u32 color = marker->id != -1 ? NAVI_MARKER_HIDDEN : NAVI_MARKER_HIDDEN_NO_FLAG;
                gxSubmitDrawZeroExtraParams((f32)marker->x + origin.x, (f32)marker->y + origin.y,
                    (f32)marker->width - 2.0f, (f32)marker->height - 2.0f, color, color, color, marker->depth, color);
            }
        }
        renderCtxPopState(g_titleScene, 3);
    }
    renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, false));
    for (s32 index = 0; index < screen->icons.count; index++) {
        const TransientSpriteEntry *icon = &screen->icons.entries[index];
        if (icon->visible != 0) {
            drawSetColorFromRGBA8(icon->color);
            effectSetByteSpeed(icon->color & 0xFF);
            uiDrawTableTextureSized(9, icon->resource, icon->sprite, (s32)((f32)icon->x + origin.x),
                (s32)((f32)icon->y + origin.y), icon->scaleX, icon->scaleY, 11);
        }
    }
    gxResetColorQuadToWhite();
    renderCtxPopState(g_titleScene, 3);
}
}
