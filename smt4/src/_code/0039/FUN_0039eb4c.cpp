/* NON_MATCHING: navi map marker placement (147 lines). NaviMain_GetPosX is passed the player handle, as
 * mapNaviDisplayAdvanceOpening and naviApplyCategorySelection pass theirs. Remaining: the float registers of the world position, map
 * position and cursor (retail s16/s17, s22/s18, s20-s21), and the marker block's schedule (retail loads the offset and
 * size with four vldr, the origin with one vldmia, and stores width and height with two vstr). */
#include "gamedata/MapSaveBlock.h"
#include "game/GameState.h"
#include "code/Code0023_Smt4.h"

struct NaviVec2 {
    f32 x;
    f32 y;
};

/* One marker on the navi map (0x4C bytes). */
struct NaviMarker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flagRow;       /* save flag row/column that must be set for the marker to show */
    /* 0x05 */ u8 flagColumn;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u16 icon;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ NaviVec2 offset;
    /* 0x14 */ NaviVec2 size;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ s16 showFlag;     /* game flag that must be set (0: none) */
    /* 0x32 */ s16 hideFlag;     /* game flag that hides the marker when set (0: none) */
    /* 0x34 */ s16 visible;
    /* 0x36 */ u16 drawIcon;
    /* 0x38 */ s32 x;
    /* 0x3C */ s32 y;
    /* 0x40 */ u32 width;
    /* 0x44 */ u32 height;
    /* 0x48 */ u32 color;
};

struct NaviMapWork {
    /* 0x0000 */ u8 unk0000[0x162];
    /* 0x0162 */ u16 player;      /* handle of the scene object the map follows */
    /* 0x0164 */ u8 originPair[0xC];
    /* 0x0170 */ u8 unk0170[0xD18];
    /* 0x0E88 */ NaviMarker markers[1];
};

extern "C" {

f32 *lmapSceneGetObj(void *handle);
NaviVec2 *NaviMain_GetCursorPos(void *handle);
void pairCopy(void *source, NaviVec2 *destination);
s32 saveTestFlagRow(u8 row, u8 column);
s32 gameFlagIsSet(s32 flag);

/* Converts the player's world position to map coordinates for the current area, then places
 * every navi marker whose flags allow it and drops the ones that fall outside the 320x240 screen. */
void FUN_0039eb4c(NaviMapWork *work)
{
    gameGetMapBlock();
    s32 area = NaviMain_GetPosX(&work->player);
    f32 *player = lmapSceneGetObj(&work->player);
    f32 worldX = player[0];
    f32 worldZ = player[2];
    NaviVec2 cursor = *NaviMain_GetCursorPos(&work->player);
    f32 mapX = 0.0f;
    f32 mapY = 0.0f;
    NaviVec2 origin;
    pairCopy(work->originPair, &origin);
    s32 markerCount = *(s32 *)((u8 *)work + 0x5A88);

    if (area == 0x65) {
        mapX = 0.010745763f * (worldX - -25500.0f);
        mapY = (worldZ - -18500.0f) * 0.010526316f;
    } else if (area == 0x66) {
        mapX = 0.010225806f * (worldX - -17000.0f);
        mapY = (worldZ - -18000.0f) * 0.010810811f;
    } else if (area == 0x67) {
        mapX = 0.010566667f * (worldX - -17000.0f);
        mapY = (worldZ - -19000.0f) * 0.010810811f;
    }
    s32 scrollX = (s32)(cursor.x - (mapX - 160.0f));
    s32 scrollY = (s32)(cursor.y - (mapY - 120.0f));

    for (s32 i = 0; i < markerCount; i++) {
        NaviMarker *marker = &work->markers[i];
        if (g_gameState.showAllEntries == 0
            && (saveTestFlagRow(marker->flagRow, marker->flagColumn) == 0
                || (marker->showFlag != 0 && gameFlagIsSet(marker->showFlag) == 0)
                || (marker->hideFlag != 0 && gameFlagIsSet(marker->hideFlag) != 0))) {
            marker->visible = 0;
        } else {
            marker->visible = 1;
        }
        if (marker->visible != 0) {
            marker->drawIcon = marker->icon;
            f32 screenX = origin.x + (marker->offset.x + (f32)scrollX);
            f32 screenY = origin.y + (marker->offset.y + (f32)scrollY);
            marker->width = (u32)marker->size.x;
            marker->height = (u32)marker->size.y;
            marker->color = 0xFFFFFFFF;
            marker->x = (s32)screenX;
            marker->y = (s32)screenY;
            if (!(0.0f <= screenX + marker->size.x) || screenX > 320.0f
                || !(0.0f <= screenY + marker->size.y) || screenY > 240.0f)
                marker->visible = 0;
        }
    }
    *((u8 *)work + 0x5A8D) = 0;
}

} /* extern "C" */
