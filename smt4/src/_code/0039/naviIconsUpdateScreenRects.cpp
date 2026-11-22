/* NON_MATCHING: 184 lines. The visibility test, the cursor load and the plain icons' half-size products are retail's. Retail computes both view offsets of a sprite icon before its first store, places the first loop's plain-icon block after the second loop, and keeps the 160/120/0.5 constants in other VFP registers. */
#include "gamedata/MapSaveBlock.h"
#include "game/GameState.h"
#include <stddef.h>

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
    u8 unk5A90[0x724];
    NaviIcon icons[0x400];  // 0x61B4
    s32 iconCount;          // 0x121B4
    s32 iconZoom;           // 0x121B8: the sprite icons' size
};
typedef char NaviWorkLayoutCheck[sizeof(NaviIcon) == 0x30 && offsetof(NaviWork, dirty) == 0x5A8F &&
    offsetof(NaviWork, icons) == 0x61B4 && offsetof(NaviWork, iconCount) == 0x121B4 ? 1 : -1];

extern "C" {
f32 *NaviMain_GetCursorPos(void *cursor);
}

/* Convert the icons' map positions to screen positions around the cursor. */
extern "C" void naviIconsUpdateScreenRects(NaviWork *work)
{
    MapSaveBlock *mapBlock = gameGetMapBlock();
    f32 *position = NaviMain_GetCursorPos(&work->cursor);
    f32 cursorX = position[0];
    f32 cursorY = position[1];
    if (mapBlock->layout != 12) {
        s32 offsetX = static_cast<s32>(static_cast<f32>(work->viewWidth / 2) - cursorX);
        s32 offsetY = static_cast<s32>(static_cast<f32>(work->viewHeight / 2) - cursorY);
        for (s32 i = 0; i < work->iconCount; i++) {
            NaviIcon *icon = &work->icons[i];
            if (!(icon->enabled != 0 && icon->visible != 0) && g_gameState.showHiddenIcons == 0)
                continue;
            if (icon->spriteId == -1) {
                f32 x = icon->x * 0.5f;
                f32 y = icon->y * 0.5f;
                f32 width = icon->width * 0.5f;
                f32 height = icon->height * 0.5f;
                icon->screenX = static_cast<s32>(x - (static_cast<f32>(offsetX) - 160.0f));
                icon->screenY = static_cast<s32>(y - (static_cast<f32>(offsetY) - 120.0f));
                icon->screenWidth = static_cast<u32>(width);
                icon->screenHeight = static_cast<u32>(height);
            } else {
                icon->screenX = static_cast<s32>((icon->width - (static_cast<f32>(offsetX) - 160.0f)) -
                                                 static_cast<f32>(work->iconZoom / 2));
                icon->screenY = static_cast<s32>((icon->height - (static_cast<f32>(offsetY) - 120.0f)) -
                                                 static_cast<f32>(work->iconZoom / 2));
                icon->screenWidth = work->iconZoom + 12;
                icon->screenHeight = work->iconZoom + 12;
            }
        }
    } else {
        s32 offsetX = static_cast<s32>(static_cast<f32>(work->viewWidth) - cursorX);
        s32 offsetY = static_cast<s32>(static_cast<f32>(work->viewHeight) - cursorY);
        for (s32 i = 0; i < work->iconCount; i++) {
            NaviIcon *icon = &work->icons[i];
            if (!(icon->enabled != 0 && icon->visible != 0) && g_gameState.showHiddenIcons == 0)
                continue;
            if (icon->spriteId != -1) {
                icon->screenX = static_cast<s32>((icon->x - (static_cast<f32>(offsetX) - 160.0f)) -
                                                 static_cast<f32>(work->iconZoom));
                icon->screenY = static_cast<s32>((icon->y - (static_cast<f32>(offsetY) - 120.0f)) -
                                                 static_cast<f32>(work->iconZoom));
                icon->screenWidth = 0x18 + work->iconZoom * 2;
                icon->screenHeight = 0x18 + work->iconZoom * 2;
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
