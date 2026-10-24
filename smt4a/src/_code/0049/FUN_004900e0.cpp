/* NON_MATCHING: refreshes the visibility, screen position and tint of the two map marker lists (full-size or half-size layout); written from the decompilation, the duplicated half/full loops are merged and scheduling not compared with retail */
#include "common.h"

struct MapMarker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 type;
    /* 0x06 */ s16 mapId;
    /* 0x08 */ u16 frameFull;
    /* 0x0A */ u16 frameHalf;
    /* 0x0C */ f32 xFull;
    /* 0x10 */ f32 yFull;
    /* 0x14 */ f32 widthFull;
    /* 0x18 */ f32 heightFull;
    /* 0x1C */ f32 xHalf;
    /* 0x20 */ f32 yHalf;
    /* 0x24 */ f32 widthHalf;
    /* 0x28 */ f32 heightHalf;
    /* 0x2C */ s16 mode;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ s16 visible;
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
    /* 0x0000 */ u8 unk0000[0x4CC];
    /* 0x04CC */ u8 scene[4];
    /* 0x04D0 */ u8 unk04D0[0xBBC];
    /* 0x108C */ u8 unk108C[0x6F8];
    /* 0x1784 */ u8 unk1784[8];
    /* 0x178C */ MapMarker primary[0x100];
    /* 0x7B8C */ s32 primaryCount;
    /* 0x7B90 */ u8 unk7B90;
    /* 0x7B91 */ u8 refreshed;
    /* 0x7B92 */ u8 unk7B92[2];
    /* 0x7B94 */ MapMarker secondary[0x20];
    /* 0x84F4 */ s32 secondaryCount;
};

#define MARKER_COLOR_SELECTED_TINT 0x9FE7FFFFu
#define MARKER_COLOR_WHITE 0xFFFFFFFFu
#define MARKER_COLOR_DIM 0xFFFFFF99u
#define MARKER_ORIGIN_X 160.0f
#define MARKER_ORIGIN_Y 120.0f
#define MARKER_FULL_LAYOUT 0xC

extern "C" {
extern u32 DAT_005f1604;

struct MapBlock0xD8E {
    u8 unk[0xD8E];
    s8 layout;
};
MapBlock0xD8E *gameFlagsGetBlock(void);
f32 *sub68OwnerGetBlock60(void *scene);
s32 FUN_004083a8(u8 kind, u8 type);
s32 FUN_002e707c(void);
s32 dataTableHasMatchingEntry35(u32 reference);

/* Updates one marker list; `half` selects the half-size layout. */
static __inline void markerListRefresh(MapMarker *list, s32 count, MapMarkerScreen *screen, bool half,
                                       s32 shiftX, s32 shiftY)
{
    for (s32 i = 0; i < count; i++) {
        MapMarker *marker = &list[i];
        if (FUN_004083a8(marker->kind, marker->type) != 0 && marker->mapId == (s32)*((s8 *)screen + 100)
            && marker->reference != 0) {
            if (FUN_002e707c() != 0) {
                marker->visible = 1;
                marker->flag = 0;
            } else {
                s32 matched = dataTableHasMatchingEntry35(marker->reference);
                marker->visible = (s16)(matched != 0);
                marker->flag = matched != 0;
            }
        }
        if (marker->visible != 0) {
            f32 x = half ? marker->xHalf : marker->xFull;
            f32 y = half ? marker->yHalf : marker->yFull;
            f32 width = half ? marker->widthHalf : marker->widthFull;
            f32 height = half ? marker->heightHalf : marker->heightFull;
            marker->drawFrame = half ? marker->frameHalf : marker->frameFull;
            u32 drawWidth = (u32)width;
            u32 drawHeight = (u32)height;
            marker->screenX = (s32)(x - ((f32)shiftX - MARKER_ORIGIN_X));
            marker->screenY = (s32)(y - ((f32)shiftY - MARKER_ORIGIN_Y));
            marker->drawWidth = drawWidth;
            marker->drawHeight = drawHeight;
            s16 mode = marker->mode;
            u32 color;
            if (marker->kind == DAT_005f1604)
                color = (mode == 0 || mode == 4) ? MARKER_COLOR_SELECTED_TINT : MARKER_COLOR_WHITE;
            else
                color = (mode != 0 && mode != 4) ? MARKER_COLOR_WHITE : MARKER_COLOR_DIM;
            marker->color = color;
        }
    }
}

void FUN_004900e0(MapMarkerScreen *screen)
{
    MapBlock0xD8E *block = gameFlagsGetBlock();
    f32 *origin = sub68OwnerGetBlock60(screen->scene);
    f32 originX = origin[0];
    f32 originY = origin[1];
    s32 viewWidth = *(s32 *)((u8 *)screen + 0x1484);
    s32 viewHeight = *(s32 *)((u8 *)screen + 0x1488);

    for (s32 list = 0; list < 2; list++) {
        MapMarker *markers = list == 0 ? screen->primary : screen->secondary;
        s32 count = list == 0 ? screen->primaryCount : screen->secondaryCount;
        bool half = block->layout != MARKER_FULL_LAYOUT;
        s32 shiftX = (s32)((f32)(half ? viewWidth / 2 : viewWidth) - originX);
        s32 shiftY = (s32)((f32)(half ? viewHeight / 2 : viewHeight) - originY);
        markerListRefresh(markers, count, screen, half, shiftX, shiftY);
    }
    screen->refreshed = 0;
}

} /* extern "C" */
