#include "map/InteractionFlags.h"
/* NON_MATCHING: refreshes visibility and screen position of the map icons (flag/ownership rules, scroll offset, 512x640 clip); written from the decompilation, float register allocation and the visibility/clip scheduling differ from retail */
#include "gamedata/MapSaveBlockA.h"
#include "shard/W6_W6Match7_NumericStepper.h"
#include "common.h"
#include <stddef.h>
#include "game/GameStateA.h"
#include "gamedata/FlagBitTests.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

#define MAP_ICON_TYPE_OWNED 0xFF
#define MAP_ICON_TYPE_STORY 0xFE
#define MAP_ICON_TYPE_FLAG 0xFD
#define MAP_ID_FIELD 0x65
#define MAP_CLIP_WIDTH 512.0f
#define MAP_CLIP_HEIGHT 640.0f

struct MapIcon {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unlockType;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u16 frame;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 width;
    /* 0x18 */ f32 height;
    /* 0x1C */ u8 unk1C[0x12];
    /* 0x2E */ s16 unlockId;
    /* 0x30 */ s16 requireFlag;      /* hidden unless this flag is set */
    /* 0x32 */ s16 excludeFlag;      /* hidden while this flag is set */
    /* 0x34 */ s16 visible;
    /* 0x36 */ u16 drawFrame;
    /* 0x38 */ s32 screenX;
    /* 0x3C */ s32 screenY;
    /* 0x40 */ u32 drawWidth;
    /* 0x44 */ u32 drawHeight;
    /* 0x48 */ s32 color;
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51[0x13];
};

struct MapScreenWork {
    /* 0x00000 */ u8 unk00000[0x4CC];
    /* 0x004CC */ u8 scene[4];
    /* 0x004D0 */ u8 scroll[8];
    /* 0x004D8 */ u8 unk004D8[0x12B4];
    /* 0x0178C */ MapIcon icons[0x100];
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

typedef char MapScreenWorkOffsetCheck[sizeof(MapIcon) == 0x64 && offsetof(MapScreenWork, iconCount) == 0x7B8C &&
    offsetof(MapScreenWork, hasOverride) == 0x20634 && offsetof(MapScreenWork, overrideZ) == 0x2064C ? 1 : -1];

extern "C" {

f32 *lmapSceneGetObj(void *scene);
f32 *sub68OwnerGetBlock60(void *scene);
void words2Copy(void *source, f32 *out);
s32 naviMainGetRequestedMap(void *scene);
s32 gameFlagIsSet(s32 flag);
s32 gameOwnedBitTest2(s32 id);

void FUN_0049177c(MapScreenWork *work)
{
    gameFlagsGetBlock();
    void *scene = work->scene;
    s32 map = naviGetActiveStateValue(scene);
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

    if (g_gameState.naviMapPending != 0) {
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
        scrollX = 0.0169705f * (cameraX - -25400.0f);
        scrollY = 0.016886543f * (cameraZ - -16400.0f);
    }
    s32 shiftX = (s32)(originX - (scrollX - 160.0f));
    s32 shiftY = (s32)(originY - (scrollY - 120.0f));

    for (s32 i = 0; i < iconCount; i++) {
        MapIcon *icon = &work->icons[i];
        if (g_gameState.showAllEntries == 0
            && (interactionVariantIsEnabled(icon->kind, icon->unlockType) == 0
                || (icon->requireFlag != 0 && gameFlagIsSet(icon->requireFlag) == 0)
                || (icon->excludeFlag != 0 && gameFlagIsSet(icon->excludeFlag) != 0)))
            icon->visible = 0;
        else
            icon->visible = 1;

        if (icon->unlockType == MAP_ICON_TYPE_OWNED) {
            if (gameOwnedBitTest2(icon->unlockId) != 0 || g_gameState.showAllEntries != 0)
                icon->visible = 1;
            else
                icon->visible = 0;
        } else if (icon->unlockType == MAP_ICON_TYPE_STORY) {
            if (FUN_00384d34(icon->unlockId) != 0 || g_gameState.showAllEntries != 0)
                icon->visible = 1;
            else
                icon->visible = 0;
        } else if (icon->unlockType == MAP_ICON_TYPE_FLAG) {
            if (gameFlagsBitTest(icon->unlockId) != 0)
                icon->visible = 1;
            else
                icon->visible = 0;
        }

        if (icon->visible != 0) {
            f32 x = icon->x + (f32)shiftX;
            f32 y = icon->y + (f32)shiftY;
            icon->unk4C = 0;
            icon->color = -1;
            icon->drawFrame = icon->frame;
            icon->unk50 = 0;
            f32 width = icon->width;
            f32 height = icon->height;
            f32 left = offset[0] + x;
            f32 top = offset[1] + y;
            icon->drawWidth = (u32)width;
            icon->drawHeight = (u32)height;
            icon->screenX = (s32)left;
            icon->screenY = (s32)top;
            if (left + width < 0.0f || left > MAP_CLIP_WIDTH || top + height < 0.0f || top > MAP_CLIP_HEIGHT)
                icon->visible = 0;
        }
    }
    work->refreshed = 0;
}

} /* extern "C" */
