/* NON_MATCHING: readable rebuild of the map marker screen-position update; the VFP conversion order (the draft's per-marker int/float round trips) and the half-scale constant 0.5f are scheduled differently by armcc, and the two float x/y sources of the first branch (0x850C/0x8510 for placed markers) are kept as the draft read them. */
#include "common.h"

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

extern "C" {
extern s8 DAT_005f1c60;
u8 *gameFlagsGetBlock(void);
f32 *sub68OwnerGetBlock60(void *owner);

/* Converts every marker's map position to screen position and size around the camera. */
void FUN_0048d67c(MapView *view)
{
    u8 *flags = gameFlagsGetBlock();
    f32 *camera = sub68OwnerGetBlock60(view->cameraOwner);
    s32 count = view->markerCount;
    if (flags[0xD8E] != 0xC) {
        s32 dx = (s32)((f32)(view->viewWidth / 2) - camera[0]);
        s32 dy = (s32)((f32)(view->viewHeight / 2) - camera[1]);
        for (s32 i = 0; i < count; i++) {
            MapMarker *marker = &((MapMarker *)((u8 *)view + 0x84F8))[i];
            if (!((marker->active && marker->visible) || DAT_005f1c60 != 0))
                continue;
            if (marker->id != -1) {
                marker->screenX = (s32)((marker->width - ((f32)dx - 160.0f)) - (f32)((view->markerRadius) / 2));
                marker->screenY = (s32)((marker->height - ((f32)dy - 120.0f)) - (f32)((view->markerRadius) / 2));
                marker->screenWidth = (view->markerRadius) + 0xC;
                marker->screenHeight = (view->markerRadius) + 0xC;
            } else {
                u32 width = (u32)(marker->width * 0.5f);
                u32 height = (u32)(marker->height * 0.5f);
                marker->screenX = (s32)(marker->x * 0.5f - ((f32)dx - 160.0f));
                marker->screenY = (s32)(marker->y * 0.5f - ((f32)dy - 120.0f));
                marker->screenWidth = width;
                marker->screenHeight = height;
            }
        }
    } else {
        s32 dx = (s32)((f32)view->viewWidth - camera[0]);
        s32 dy = (s32)((f32)view->viewHeight - camera[1]);
        for (s32 i = 0; i < count; i++) {
            MapMarker *marker = &((MapMarker *)((u8 *)view + 0x84F8))[i];
            if (!((marker->active && marker->visible) || DAT_005f1c60 != 0))
                continue;
            if (marker->id != -1) {
                marker->screenX = (s32)((marker->x - ((f32)dx - 160.0f)) - (f32)(view->markerRadius));
                marker->screenY = (s32)((marker->y - ((f32)dy - 120.0f)) - (f32)(view->markerRadius));
                marker->screenWidth = 0x18 + (view->markerRadius) * 2;
                marker->screenHeight = 0x18 + (view->markerRadius) * 2;
            } else {
                u32 width = (u32)marker->width;
                u32 height = (u32)marker->height;
                marker->screenWidth = width;
                marker->screenHeight = height;
                marker->screenX = (s32)(marker->x - ((f32)dx - 160.0f));
                marker->screenY = (s32)(marker->y - ((f32)dy - 120.0f));
            }
        }
    }
    *((u8 *)view + 0x7B93) = 0;
}

} /* extern "C" */
