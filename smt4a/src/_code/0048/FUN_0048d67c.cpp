/* NON_MATCHING: map marker screen-position update; the instructions mostly agree but the float registers differ from the start (retail loads the camera position into s3/s2 with two vldr, the build into s0/s1 with one vldm) and the marker loops schedule differently. */
#include "gamedata/MapSaveBlockA.h"

/* One map marker (0x30 bytes at +0x84F8 of the map view). */
struct MapMarker {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ s32 id;           /* -1 for a free marker */
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 width;
    /* 0x18 */ f32 height;
    /* 0x1C */ s32 screenX;
    /* 0x20 */ s32 screenY;
    /* 0x24 */ u32 screenWidth;
    /* 0x28 */ u32 screenHeight;
    /* 0x2C */ u8 unk2C[4];
};

/* The map view, as the marker update reads it. */
struct MapView {
    /* 0x00000 */ u8 unk00000[0x4CC];
    /* 0x004CC */ u8 cameraOwner[4];
    /* 0x004D0 */ u8 unk004D0[0xFB4];
    /* 0x01484 */ s32 viewWidth;
    /* 0x01488 */ s32 viewHeight;
    /* 0x0148C */ u8 unk0148C[0x706C];
    /* 0x084F8 */ MapMarker markers[1];   /* markerCount entries */
    /* 0x08528 */ u8 unk08528[0x17FD0];
    /* 0x204F8 */ s32 markerCount;
    /* 0x204FC */ s32 markerRadius;
};

/* The map debug settings block at 0x5f1bfc (only the flag read here). */
struct MapDebugSettings {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u8 showAllMarkers;   /* draw every marker, active or not */
};

extern "C" {
extern MapDebugSettings g_mapDebugSettings;
f32 *sub68OwnerGetBlock60(void *owner);

/* Converts every marker's map position to screen position and size around the camera. */
void FUN_0048d67c(MapView *view)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    f32 *camera = sub68OwnerGetBlock60(view->cameraOwner);
    f32 cameraX = camera[0];
    f32 cameraY = camera[1];
    if (flags->layout != 0xC) {
        s32 dx = (s32)((f32)(view->viewWidth / 2) - cameraX);
        s32 dy = (s32)((f32)(view->viewHeight / 2) - cameraY);
        for (s32 i = 0; i < view->markerCount; i++) {
            MapMarker *marker = &view->markers[i];
            if (!((marker->active && marker->visible) || g_mapDebugSettings.showAllMarkers != 0))
                continue;
            if (marker->id != -1) {
                f32 offsetX = (f32)dx - 160.0f;
                f32 offsetY = (f32)dy - 120.0f;
                marker->screenX = (s32)((marker->width - offsetX) - (f32)(view->markerRadius / 2));
                marker->screenY = (s32)((marker->height - offsetY) - (f32)(view->markerRadius / 2));
                marker->screenWidth = view->markerRadius + 0xC;
                marker->screenHeight = view->markerRadius + 0xC;
            } else {
                f32 offsetX = (f32)dx - 160.0f;
                f32 offsetY = (f32)dy - 120.0f;
                f32 x = marker->x * 0.5f;
                f32 y = marker->y * 0.5f;
                marker->screenX = (s32)(x - offsetX);
                marker->screenY = (s32)(y - offsetY);
                marker->screenWidth = (u32)(marker->width * 0.5f);
                marker->screenHeight = (u32)(marker->height * 0.5f);
            }
        }
    } else {
        s32 dx = (s32)((f32)view->viewWidth - cameraX);
        s32 dy = (s32)((f32)view->viewHeight - cameraY);
        for (s32 i = 0; i < view->markerCount; i++) {
            MapMarker *marker = &view->markers[i];
            if (!((marker->active && marker->visible) || g_mapDebugSettings.showAllMarkers != 0))
                continue;
            if (marker->id != -1) {
                f32 offsetX = (f32)dx - 160.0f;
                f32 offsetY = (f32)dy - 120.0f;
                marker->screenX = (s32)((marker->x - offsetX) - (f32)view->markerRadius);
                marker->screenY = (s32)((marker->y - offsetY) - (f32)view->markerRadius);
                marker->screenWidth = 0x18 + view->markerRadius * 2;
                marker->screenHeight = 0x18 + view->markerRadius * 2;
            } else {
                f32 offsetX = (f32)dx - 160.0f;
                f32 offsetY = (f32)dy - 120.0f;
                marker->screenWidth = (u32)marker->width;
                marker->screenHeight = (u32)marker->height;
                marker->screenX = (s32)(marker->x - offsetX);
                marker->screenY = (s32)(marker->y - offsetY);
            }
        }
    }
    *((u8 *)view + 0x7B93) = 0;
}

} /* extern "C" */
