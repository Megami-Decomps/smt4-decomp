/* NON_MATCHING: near miss: float/int conversion sequence and register allocation differ (retail keeps the view offsets and 160/120 constants in VFP registers across the loop). */
#include "common.h"

/* A navigator icon (0x30 bytes, accessed fields). */
struct NaviIcon {
    u8 enabled;         // 0x00
    u8 visible;         // 0x01
    u8 unk02[6];
    s32 spriteId;       // 0x08: -1 for a plain rectangle
    f32 x;              // 0x0C
    f32 y;              // 0x10
    f32 width;          // 0x14
    f32 height;         // 0x18
    s32 screenX;        // 0x1C
    s32 screenY;        // 0x20
    s32 screenWidth;    // 0x24
    s32 screenHeight;   // 0x28
    u8 unk2C[4];
};

/* The navigator work (accessed fields). */
struct NaviWork {
    u8 unk0000[0x162];
    u8 cursor[0xA1E];       // 0x162
    s32 viewWidth;          // 0xB80
    s32 viewHeight;         // 0xB84
    u8 unkB88[0x4F07];
    u8 dirty;               // 0x5A8F
    u8 unk5A90[0x6124];
    NaviIcon icons[1];      // 0x61B4
};

extern "C" {
extern u8 DAT_0049fc1c[];
u8 *gameGetMapBlock(void);
f32 *NaviMain_GetCursorPos(void *cursor);
}

#define NAVI_ICON_COUNT(work) (*reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(work) + 0x121B4))
#define NAVI_ICON_ZOOM(work) (*reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(work) + 0x121B8))

/* Convert the icons' map positions to screen positions around the cursor. */
extern "C" void FUN_0039cddc(NaviWork *work)
{
    u8 *mapBlock = gameGetMapBlock();
    f32 *cursor = NaviMain_GetCursorPos(&work->cursor);
    s32 count = NAVI_ICON_COUNT(work);
    if (mapBlock[0xD5A] != 12) {
        s32 offsetX = static_cast<s32>(static_cast<f32>(work->viewWidth / 2) - cursor[0]);
        s32 offsetY = static_cast<s32>(static_cast<f32>(work->viewHeight / 2) - cursor[1]);
        for (s32 i = 0; i < count; i++) {
            NaviIcon *icon = &work->icons[i];
            bool shown = icon->enabled != 0 && icon->visible != 0;
            if (!shown || DAT_0049fc1c[0xE4] == 0)
                continue;
            if (icon->spriteId != -1) {
                icon->screenX = static_cast<s32>((icon->width - (static_cast<f32>(offsetX) - 160.0f)) -
                                                 static_cast<f32>(NAVI_ICON_ZOOM(work) / 2));
                icon->screenY = static_cast<s32>((icon->height - (static_cast<f32>(offsetY) - 120.0f)) -
                                                 static_cast<f32>(NAVI_ICON_ZOOM(work) / 2));
                icon->screenWidth = NAVI_ICON_ZOOM(work) + 12;
                icon->screenHeight = NAVI_ICON_ZOOM(work) + 12;
            } else {
                u32 width = static_cast<u32>(icon->width * 0.5f);
                u32 height = static_cast<u32>(icon->height * 0.5f);
                icon->screenX = static_cast<s32>(icon->x * 0.5f - (static_cast<f32>(offsetX) - 160.0f));
                icon->screenY = static_cast<s32>(icon->y * 0.5f - (static_cast<f32>(offsetY) - 120.0f));
                icon->screenWidth = width;
                icon->screenHeight = height;
            }
        }
    } else {
        s32 offsetX = static_cast<s32>(static_cast<f32>(work->viewWidth) - cursor[0]);
        s32 offsetY = static_cast<s32>(static_cast<f32>(work->viewHeight) - cursor[1]);
        for (s32 i = 0; i < count; i++) {
            NaviIcon *icon = &work->icons[i];
            bool shown = icon->enabled != 0 && icon->visible != 0;
            if (!shown || DAT_0049fc1c[0xE4] == 0)
                continue;
            if (icon->spriteId != -1) {
                icon->screenX = static_cast<s32>((icon->x - (static_cast<f32>(offsetX) - 160.0f)) -
                                                 static_cast<f32>(NAVI_ICON_ZOOM(work)));
                icon->screenY = static_cast<s32>((icon->y - (static_cast<f32>(offsetY) - 120.0f)) -
                                                 static_cast<f32>(NAVI_ICON_ZOOM(work)));
                icon->screenWidth = 0x18 + NAVI_ICON_ZOOM(work) * 2;
                icon->screenHeight = 0x18 + NAVI_ICON_ZOOM(work) * 2;
            } else {
                icon->screenWidth = static_cast<u32>(icon->width);
                icon->screenHeight = static_cast<u32>(icon->height);
                icon->screenX = static_cast<s32>(icon->x - (static_cast<f32>(offsetX) - 160.0f));
                icon->screenY = static_cast<s32>(icon->y - (static_cast<f32>(offsetY) - 120.0f));
            }
        }
    }
    work->dirty = 0;
}
