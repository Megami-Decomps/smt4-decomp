/* NON_MATCHING: control flow, completion getter and callee order match retail; armcc keeps the sprite pointer/dirty-store addresses and the zero constant in different registers (zero in r0 instead of r2, display pointer re-copied for call arguments). */
#include "map/NaviDisplayTransition.h"

extern "C" {
s32 FUN_002bf818(UiSpriteState *sprite);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
void FUN_002b8ee0(UiSpriteState *sprite, s32 mode);
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
void naviMainSetCurrentMap(u16 *state, u32 map);
void FUN_0039f860(u16 *state, s32 option);
void FUN_002316e8(MapNaviDisplay *display);
void mapNaviDisplayLoadMap(MapNaviDisplay *display, s32 map);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 option);

// Animate the map switch, loading the new map between its outgoing and incoming phases.
void FUN_0039c3fc(MapNaviDisplay *display)
{
    NaviDisplayTransitionView *work = reinterpret_cast<NaviDisplayTransitionView *>(display);
    if ((work->flags & 8) != 0) {
        UiSpriteState *indicator = &work->indicator;
        if (work->phase == 0) {
            FUN_002bf818(indicator);
            UiSpriteState *incoming = &work->incoming;
            if (FUN_002bf818(incoming) != 0) {
                naviMainSetCurrentMap(&work->mapState, work->map);
                FUN_0039f860(&work->mapState, 0);
                s32 map = work->map;
                work->counter = 0;
                if (map >= 100) {
                    work->mapVisible = 0;
                    FUN_002316e8(reinterpret_cast<MapNaviDisplay *>(work));
                } else {
                    work->mapVisible = 1;
                    mapNaviDisplayLoadMap(reinterpret_cast<MapNaviDisplay *>(work), map);
                }
                uiSpriteSetImageKeyframe(indicator, 2, 0);
                work->phase = 1;
            }
            s32 y = vec2GetYInt(incoming);
            s32 x = vec2GetXInt(incoming);
            pointConvertToFloat(work->origin, x, y);
            work->mapDirty = 1;
            work->overlayDirty = 1;
        } else if (work->phase == 1) {
            FUN_002bf818(indicator);
            FUN_002bf818(&work->overlay);
            UiSpriteState *outgoing = &work->outgoing;
            FUN_002b8ee0(outgoing, 0);
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
}
