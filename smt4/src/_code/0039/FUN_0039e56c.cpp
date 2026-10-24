/* NON_MATCHING: readable rewrite from retail disassembly compiles (207 vs 144 rows); retail duplicates the whole entry loop per layout and per related-kind branch, which source-level structure does not reproduce */
#include "common.h"

// Selectable tile of the two-list picker (0x4c bytes each).
struct PickerEntry {
    u8 unk00[4];
    u8 kind;                // 0x04
    u8 unk05[3];
    u16 altSprite;          // 0x08
    u16 sprite;             // 0x0a
    f32 altRect[4];         // 0x0c: rectangle used on the map-block 12 layout
    f32 rect[4];            // 0x1c: normal layout rectangle
    u16 state;              // 0x2c
    u8 unk2e[6];
    u16 active;             // 0x34
    u16 shownSprite;        // 0x36
    s32 screenX;            // 0x38
    s32 screenY;            // 0x3c
    u32 width;              // 0x40
    u32 height;             // 0x44
    u32 tint;               // 0x48
};

// Picker screen: two entry lists (counts at 0x5a88 / 0x61b0).
struct PickerScreen {
    u8 unk0000[0xb80];
    s32 pointerX;           // 0xb80
    s32 pointerY;           // 0xb84
    u8 unk0b88[0xc48 - 0xb88];
    PickerEntry lists0[1];  // 0xc48
};

struct GameStateHead {
    u8 unk00[8];
    u32 selectedKind;       // 0x08
};

extern "C" {

extern GameStateHead g_gameState;

u8* gameGetMapBlock(void);
f32* NaviMain_GetCursorPos(void* navi);

#define PICKER_WORD(screen, offset) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(screen) + (offset)))

// Kinds that pair with each other (left/right and up/down variants highlight together).
static inline bool kindsRelated(u32 a, u32 b)
{
    if (a == b) return true;
    if (a == 141) return b == 142;
    if (a == 142) return b == 141;
    if (a == 92) return b == 93;
    if (a == 93) return b == 92;
    return false;
}

// Recomputes the on-screen rectangles of both entry lists from the pointer position and
// tints the entries matching the current selection.
void FUN_0039e56c(PickerScreen* screen)
{
    u8* mapBlock = gameGetMapBlock();
    f32* cursor = NaviMain_GetCursorPos(reinterpret_cast<u8*>(screen) + 0x162);
    f32 cursorX = cursor[0];
    f32 cursorY = cursor[1];
    for (s32 list = 0; list < 2; list++) {
        s32 count = PICKER_WORD(screen, list == 0 ? 0x5a88 : 0x61b0);
        bool alt = mapBlock[0xd5a] == 12;
        s32 dx;
        s32 dy;
        if (!alt) {
            dx = (s32)((f32)(screen->pointerX / 2) - cursorX);
            dy = (s32)((f32)(screen->pointerY / 2) - cursorY);
        } else {
            dx = (s32)((f32)screen->pointerX - cursorX);
            dy = (s32)((f32)screen->pointerY - cursorY);
        }
        for (s32 i = 0; i < count; i++) {
            PickerEntry* entry = reinterpret_cast<PickerEntry*>(reinterpret_cast<u8*>(screen) + (list == 0 ? 0xc48 : 0x5a90) + i * 0x4c);
            if (entry->active == 0) continue;
            const f32* rect = alt ? entry->altRect : entry->rect;
            entry->shownSprite = alt ? entry->altSprite : entry->sprite;
            entry->screenX = (s32)(rect[0] - ((f32)dx - 160.0f));
            entry->screenY = (s32)(rect[1] - ((f32)dy - 120.0f));
            entry->width = (u32)rect[2];
            entry->height = (u32)rect[3];
            bool related = kindsRelated(entry->kind, g_gameState.selectedKind);
            bool idle = entry->state == 0 || entry->state == 4;
            if (related) {
                entry->tint = idle ? 0xb4ff83ff : 0xffffffff;
            } else {
                entry->tint = idle ? 0xffffff99 : 0xffffffff;
            }
        }
    }
    *(reinterpret_cast<u8*>(screen) + 0x5a8d) = 0;
}

} /* extern "C" */
