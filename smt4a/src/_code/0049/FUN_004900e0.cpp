#include "map/InteractionFlags.h"
/* NON_MATCHING: 261 lines. Retail's shape (the list loop around a layout test with one marker loop per layout, the marker update a late-inlined static helper, the secondary list's 0x18 entries, u16 visible/mode) is reproduced; armcc here keeps 1 and 0 for the visibility stores in sl/fp where retail keeps the view width/height addresses there (and rematerialises the constants), predicates the available-record stores, and converts the draw size before the screen position. */
#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"

/* A marker's rectangle in one layout. */
struct MarkerRect {
    f32 x;
    f32 y;
    f32 width;
    f32 height;
};

struct MapMarker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 type;
    /* 0x06 */ s16 mapId;
    /* 0x08 */ u16 frameFull;
    /* 0x0A */ u16 frameHalf;
    /* 0x0C */ MarkerRect full;
    /* 0x1C */ MarkerRect half;
    /* 0x2C */ u16 mode;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ u16 visible;
    /* 0x36 */ u16 drawFrame;
    /* 0x38 */ s32 screenX;
    /* 0x3C */ s32 screenY;
    /* 0x40 */ s32 drawWidth;
    /* 0x44 */ s32 drawHeight;
    /* 0x48 */ u32 color;
    /* 0x4C */ u32 reference;
    /* 0x50 */ u8 flag;
    /* 0x51 */ u8 unk51[0x13];
};

struct MapMarkerScreen {
    /* 0x0000 */ u8 unk0000[0x64];
    /* 0x0064 */ s8 mapId;          /* the map the markers are shown for */
    /* 0x0065 */ u8 unk0065[0x467];
    /* 0x04CC */ u8 scene[4];
    /* 0x04D0 */ u8 unk04D0[0xBBC];
    /* 0x108C */ u8 unk108C[0x3F8];
    /* 0x1484 */ s32 viewWidth;
    /* 0x1488 */ s32 viewHeight;
    /* 0x148C */ u8 unk148C[0x2F8];
    /* 0x1784 */ u8 unk1784[8];
    /* 0x178C */ MapMarker primary[0x100];
    /* 0x7B8C */ s32 primaryCount;
    /* 0x7B90 */ u8 unk7B90;
    /* 0x7B91 */ u8 refreshed;
    /* 0x7B92 */ u8 unk7B92[2];
    /* 0x7B94 */ MapMarker secondary[0x18];
    /* 0x84F4 */ s32 secondaryCount;
};

#define MARKER_COLOR_SELECTED_TINT 0x9FE7FFFFu
#define MARKER_COLOR_WHITE 0xFFFFFFFFu
#define MARKER_COLOR_DIM 0xFFFFFF99u
#define MARKER_ORIGIN_X 160.0f
#define MARKER_ORIGIN_Y 120.0f
#define MARKER_FULL_LAYOUT 0xC

extern "C" {

f32 *sub68OwnerGetBlock60(void *scene);
s32 lmapDestinationHasAvailableRecord(void);
s32 dataTableHasMatchingEntry35(u32 reference);

/* Updates one marker: its visibility and, when visible, its screen rectangle, frame and tint in the
 * half-size or full-size layout. */
static void markerRefresh(MapMarkerScreen *screen, MapMarker *marker, bool half, s32 shiftX, s32 shiftY)
{
    if (interactionVariantIsEnabled(marker->kind, marker->type) != 0 && marker->mapId == screen->mapId &&
        marker->reference != 0) {
        if (lmapDestinationHasAvailableRecord() != 0) {
            marker->visible = 1;
            marker->flag = 0;
        } else {
            bool matched = dataTableHasMatchingEntry35(marker->reference) != 0;
            marker->visible = matched;
            marker->flag = matched;
        }
    }
    if (marker->visible != 0) {
        MarkerRect rect = half ? marker->half : marker->full;
        marker->drawFrame = half ? marker->frameHalf : marker->frameFull;
        marker->screenX = (s32)(rect.x - ((f32)shiftX - MARKER_ORIGIN_X));
        marker->screenY = (s32)(rect.y - ((f32)shiftY - MARKER_ORIGIN_Y));
        marker->drawWidth = (u32)rect.width;
        marker->drawHeight = (u32)rect.height;
        u32 color;
        if (marker->kind == g_gameState.currentObjectId)
            color = (marker->mode == 0 || marker->mode == 4) ? MARKER_COLOR_SELECTED_TINT : MARKER_COLOR_WHITE;
        else
            color = (marker->mode == 0 || marker->mode == 4) ? MARKER_COLOR_DIM : MARKER_COLOR_WHITE;
        marker->color = color;
    }
}

/* Refreshes both marker lists for the current layout. */
void FUN_004900e0(MapMarkerScreen *screen)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    f32 *origin = sub68OwnerGetBlock60(screen->scene);
    f32 originX = origin[0];
    f32 originY = origin[1];

    for (s32 list = 0; list < 2; list++) {
        s32 count = list == 0 ? screen->primaryCount : screen->secondaryCount;
        if (block->layout != MARKER_FULL_LAYOUT) {
            s32 shiftX = (s32)((f32)(screen->viewWidth / 2) - originX);
            s32 shiftY = (s32)((f32)(screen->viewHeight / 2) - originY);
            for (s32 i = 0; i < count; i++)
                markerRefresh(screen, list == 0 ? &screen->primary[i] : &screen->secondary[i], true, shiftX, shiftY);
        } else {
            s32 shiftX = (s32)((f32)screen->viewWidth - originX);
            s32 shiftY = (s32)((f32)screen->viewHeight - originY);
            for (s32 i = 0; i < count; i++)
                markerRefresh(screen, list == 0 ? &screen->primary[i] : &screen->secondary[i], false, shiftX, shiftY);
        }
    }
    screen->refreshed = 0;
}

} /* extern "C" */
