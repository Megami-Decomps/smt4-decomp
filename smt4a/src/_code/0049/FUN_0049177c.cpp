/* NON_MATCHING: refreshes visibility and screen position of the map icons (flag/ownership rules, scroll offset, 512x640 clip); written from the decompilation, the unused gameFlagsGetBlock() call is dropped and float to int conversion/scheduling is not compared with retail */
#include "common.h"
#include "gamedata/FlagBitTests.h"

#define MAP_ICON_TYPE_OWNED -1
#define MAP_ICON_TYPE_STORY -2
#define MAP_ICON_TYPE_FLAG -3
#define MAP_ID_FIELD 0x65
#define MAP_CLIP_WIDTH 512.0f
#define MAP_CLIP_HEIGHT 640.0f

struct MapIcon {
    /* 0x00 */ u8 kind;
    /* 0x01 */ s8 unlockType;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 frame;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ f32 x;
    /* 0x0C */ f32 y;
    /* 0x10 */ f32 width;
    /* 0x14 */ f32 height;
    /* 0x18 */ u8 unk18[0x12];
    /* 0x2A */ s16 unlockId;
    /* 0x2C */ s16 requireFlag;      /* hidden unless this flag is set */
    /* 0x2E */ s16 excludeFlag;      /* hidden while this flag is set */
    /* 0x30 */ s16 visible;
    /* 0x32 */ u16 drawFrame;
    /* 0x34 */ s32 screenX;
    /* 0x38 */ s32 screenY;
    /* 0x3C */ s32 drawWidth;
    /* 0x40 */ s32 drawHeight;
    /* 0x44 */ s32 color;
    /* 0x48 */ s32 unk48;
    /* 0x4C */ u8 unk4C;
    /* 0x4D */ u8 unk4D[0x17];
};

struct MapScreenWork {
    /* 0x00000 */ u8 unk00000[0x4CC];
    /* 0x004CC */ u8 scene[4];
    /* 0x004D0 */ u8 scroll[8];
    /* 0x004D8 */ u8 unk004D8[0x12B8];
    /* 0x01790 */ MapIcon icons[0xFF];
    /* 0x07B8C */ s32 iconCount;
    /* 0x07B90 */ u8 unk07B90;
    /* 0x07B91 */ u8 refreshed;
    /* 0x07B92 */ u8 unk07B92[0x18AA2];
    /* 0x20634 */ u8 hasOverride;
    /* 0x20635 */ u8 unk20635[3];
    /* 0x20638 */ s32 requestedX;
    /* 0x2063C */ s32 requestedZ;
    /* 0x20640 */ u8 unk20640[8];
    /* 0x20648 */ s32 overrideX;
    /* 0x2064C */ s32 overrideZ;
};

extern "C" {
extern s8 DAT_005f1a5e;
extern s32 DAT_005f1c5c;

s32 naviGetActiveStateValue(void);
f32 *lmapSceneGetObj(void *scene);
f32 *sub68OwnerGetBlock60(void *scene);
void words2Copy(void *source, f32 *out);
s32 naviMainGetRequestedMap(void *scene);
s32 FUN_004083a8(u8 kind, s8 type);
s32 gameFlagIsSet(s32 flag);
s32 FUN_00384d34(s32 id);
s32 gameOwnedBitTest2(s32 id);

void FUN_0049177c(MapScreenWork *work)
{
    void *scene = work->scene;
    s32 map = naviGetActiveStateValue();
    f32 *cameraObject = lmapSceneGetObj(scene);
    f32 cameraX = cameraObject[0];
    f32 cameraZ = cameraObject[2];
    f32 *block = sub68OwnerGetBlock60(scene);
    f32 originX = block[0];
    f32 originY = block[1];
    f32 scrollX = 0.0f;
    f32 scrollY = 0.0f;
    f32 offset[2];
    words2Copy(work->scroll, offset);

    if (DAT_005f1a5e != 0) {
        map = naviMainGetRequestedMap(scene);
        cameraX = (f32)work->requestedX;
        cameraZ = (f32)work->requestedZ;
    }
    if (work->hasOverride != 0) {
        cameraX = (f32)work->overrideX;
        cameraZ = (f32)work->overrideZ;
    }
    s32 iconCount = work->iconCount;
    if (map == MAP_ID_FIELD) {
        scrollX = (cameraX - -25400.0f) * 0.0169705f;
        scrollY = (cameraZ - -16400.0f) * 0.016886543f;
    }
    s32 shiftX = (s32)(originX - (scrollX - 160.0f));
    s32 shiftY = (s32)(originY - (scrollY - 120.0f));

    for (s32 i = 0; i < iconCount; i++) {
        MapIcon *icon = &work->icons[i];
        if (DAT_005f1c5c == 0
            && (FUN_004083a8(icon->kind, icon->unlockType) == 0
                || (icon->requireFlag != 0 && gameFlagIsSet(icon->requireFlag) == 0)
                || (icon->excludeFlag != 0 && gameFlagIsSet(icon->excludeFlag) != 0)))
            icon->visible = 0;
        else
            icon->visible = 1;

        if (icon->unlockType == MAP_ICON_TYPE_OWNED)
            icon->visible = (gameOwnedBitTest2(icon->unlockId) != 0 || DAT_005f1c5c != 0) ? 1 : 0;
        else if (icon->unlockType == MAP_ICON_TYPE_STORY)
            icon->visible = (FUN_00384d34(icon->unlockId) != 0 || DAT_005f1c5c != 0) ? 1 : 0;
        else if (icon->unlockType == MAP_ICON_TYPE_FLAG)
            icon->visible = gameFlagsBitTest(icon->unlockId) != 0 ? 1 : 0;

        if (icon->visible != 0) {
            f32 left = offset[0] + icon->x + (f32)shiftX;
            f32 top = offset[1] + icon->y + (f32)shiftY;
            icon->unk48 = 0;
            icon->drawWidth = (s32)icon->width;
            icon->drawHeight = (s32)icon->height;
            icon->color = -1;
            icon->drawFrame = icon->frame;
            icon->unk4C = 0;
            icon->screenX = (s32)left;
            icon->screenY = (s32)top;
            if (!(0.0f <= left + icon->width) || left > MAP_CLIP_WIDTH
                || !(0.0f <= top + icon->height) || top > MAP_CLIP_HEIGHT)
                icon->visible = 0;
        }
    }
    work->refreshed = 0;
}

} /* extern "C" */
