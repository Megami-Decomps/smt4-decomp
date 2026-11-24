/* NON_MATCHING: retail forms the redraw flag addresses before the indicator sprite pointer; this build does the sprite pointer first. */
#include "ui/UiSpriteApi.h"
#include "map/NaviDisplayMapLoad.h"

extern "C" {
void pointConvertToFloat(f32 *point, s32 x, s32 y);
void naviMainSetCurrentMap(u16 *state, u32 map);
void FUN_0039f860(u16 *state, s32 option);

/* Animates the map switch, changing the map between the outgoing and incoming phases. */
void mapNaviDisplayAdvanceTransition(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = (NaviDisplayTransitionView *)display;
    if ((work->flags & 8) != 0) {
        UiSpriteState *indicator = &work->indicator;
        if (work->phase == 0) {
            uiSpriteAdvanceAnimation(indicator);
            UiSpriteState *incoming = &work->incoming;
            if (uiSpriteAdvanceAnimation(incoming) != 0) {
                naviMainSetCurrentMap(&work->mapState, work->map);
                FUN_0039f860(&work->mapState, 0);
                naviDisplaySetMap(display, work->map);
                uiSpriteSetImageKeyframe(indicator, 2, 0);
                work->phase = 1;
            }
            s32 y = vec2GetYInt(incoming);
            s32 x = vec2GetXInt(incoming);
            pointConvertToFloat(work->origin, x, y);
            work->mapDirty = 1;
            work->overlayDirty = 1;
        } else if (work->phase == 1) {
            uiSpriteAdvanceAnimation(indicator);
            uiSpriteAdvanceAnimation(&work->overlay);
            UiSpriteState *outgoing = &work->outgoing;
            uiSlidingSpriteAdvance(outgoing, 0);
            if (uiSpriteGetCompletionState(outgoing) != 0) {
                pointConvertToFloat(work->origin, 0, 0);
                work->flags &= ~0x1008u;
            } else {
                s32 y = vec2GetYInt(outgoing);
                s32 x = vec2GetXInt(outgoing);
                pointConvertToFloat(work->origin, x, y);
            }
            work->mapDirty = 1;
            work->overlayDirty = 1;
        }
    }
}
} /* extern "C" */
