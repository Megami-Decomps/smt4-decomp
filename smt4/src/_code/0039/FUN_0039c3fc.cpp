/* NON_MATCHING: outgoing/incoming block placement and retained sprite pointers differ; completion byte uses direct unsigned load. */
#include "map/NaviDisplayTransition.h"

extern "C" {
s32 FUN_002bf818(UiSpriteState *sprite);
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
        if (work->phase != 0) {
            if (work->phase == 1) {
                FUN_002bf818(&work->indicator);
                FUN_002bf818(&work->overlay);
                FUN_002b8ee0(&work->outgoing, 0);
                if (work->outgoing.animationFlags.completed != 0) {
                    pointConvertToFloat(work->origin, 0, 0);
                    work->flags &= ~0x1008u;
                } else {
                    s32 y = vec2GetYInt(&work->outgoing);
                    s32 x = vec2GetXInt(&work->outgoing);
                    pointConvertToFloat(work->origin, x, y);
                }
                work->mapDirty = 1;
                work->overlayDirty = 1;
                return;
            }
        } else {
            FUN_002bf818(&work->indicator);
            if (FUN_002bf818(&work->incoming) != 0) {
                naviMainSetCurrentMap(&work->mapState, work->map);
                FUN_0039f860(&work->mapState, 0);
                work->counter = 0;
                if (work->map >= 100) {
                    work->mapVisible = 0;
                    FUN_002316e8(display);
                } else {
                    work->mapVisible = 1;
                    mapNaviDisplayLoadMap(display, work->map);
                }
                uiSpriteSetImageKeyframe(&work->indicator, 2, 0);
                work->phase = 1;
            }
            s32 y = vec2GetYInt(&work->incoming);
            s32 x = vec2GetXInt(&work->incoming);
            pointConvertToFloat(work->origin, x, y);
            work->mapDirty = 1;
            work->overlayDirty = 1;
        }
    }
}
}
