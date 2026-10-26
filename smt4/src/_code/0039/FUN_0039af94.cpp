/* NON_MATCHING: draws the title map's location markers (16 entries, scaled into the view around the cursor, only the active ones); written from the decompilation, conversions of the s16 intermediates and the efctSetSpeed argument are not compared with retail */
#include "camp/RenderCtx.h"

struct MapMarkerEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 map;             /* map the marker belongs to (0: unused) */
    /* 0x04 */ s8 slot;
    /* 0x05 */ u8 active;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ s8 key;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ s16 x;
    /* 0x0C */ s16 y;
    /* 0x0E */ u8 unk0E[2];
};

struct MapMarkerView {
    s32 x;
    s32 y;
};

struct MapMarkerScreen {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x4C];
    /* 0x060 */ MapMarkerEntry entries[0x10];       /* the first byte doubles as the selected key */
    /* 0x162 */ u8 navi[2];
    /* 0x164 */ u8 originPair[8];
    /* 0x16C */ u8 unk16C[0xA14];
    /* 0xB80 */ MapMarkerView viewSize;
    /* 0xB88 */ MapMarkerView slots[8];
};

struct MapBlockLayout {
    /* 0x000 */ u8 unk000[0xD5A];
    /* 0xD5A */ s8 layout;
};

#define MARKER_COUNT 0x10
#define MARKER_LAYOUT_FULL 0xC
#define MARKER_SPRITE_FULL 0x1B65
#define MARKER_SPRITE_HALF 0x1B8D
#define MARKER_FLAG_FIXED 0x20

extern "C" {
extern RenderCtx *g_titleScene;

MapBlockLayout *gameGetMapBlock(void);
f32 *NaviMain_GetCursorPos(void);
void NaviMain_GetPosY(void *navi);
s32 NaviMain_GetCurrentMap(void *navi);
void pairCopy(void *source, f32 *destination);
void uiGetEntrySize(u32 table, u32 sprite, s32 *width, s32 *height);
void efctSetSpeed(f32 speed);
s32 FUN_002c5d80(u32 a, u32 b);
void FUN_002b0750(u32 layer, u32 table, u32 sprite, s32 x, s32 y, s32 width, s32 height, u32 flags);

void FUN_0039af94(MapMarkerScreen *screen)
{
    MapBlockLayout *block = gameGetMapBlock();
    void *navi = &screen->navi;
    f32 *cursor = NaviMain_GetCursorPos();
    f32 cursorX = cursor[0];
    f32 cursorY = cursor[1];

    u32 sprite;
    f32 scale;
    f32 offset;
    if (block->layout == MARKER_LAYOUT_FULL) {
        sprite = MARKER_SPRITE_FULL;
        scale = 0.024f;
        offset = 7.0f;
    } else {
        sprite = MARKER_SPRITE_HALF;
        scale = 0.012f;
        offset = 3.0f;
    }
    s32 iconWidth, iconHeight;
    uiGetEntrySize(0x13, sprite, &iconWidth, &iconHeight);
    u32 flags = screen->flags;
    NaviMain_GetPosY(navi);
    f32 origin[2];
    pairCopy(screen->originPair, origin);

    for (u32 i = 0; i < MARKER_COUNT; i++) {
        if (screen->entries[i].map == 0 || NaviMain_GetCurrentMap(navi) != screen->entries[i].map)
            continue;

        bool full = block->layout == MARKER_LAYOUT_FULL;
        MapMarkerView *slot = &screen->slots[screen->entries[i].slot];
        s16 slotX = full ? (s16)(f32)slot->x : (s16)((f32)slot->x * 0.5f);
        s16 slotY = full ? (s16)(f32)slot->y : (s16)((f32)slot->y * 0.5f);
        f32 markerX = (f32)(s16)(s32)((f32)slotX + (f32)screen->entries[i].x * scale);
        f32 markerY = (f32)(s16)(s32)((f32)slotY + (f32)screen->entries[i].y * scale);
        markerX = (f32)(s16)(s32)(markerX - offset);
        markerY = (f32)(s16)(s32)(markerY - offset);

        f32 viewX = full ? (f32)screen->viewSize.x : (f32)(screen->viewSize.x / 2);
        f32 viewY = full ? (f32)screen->viewSize.y : (f32)(screen->viewSize.y / 2);
        u32 drawHeight = (u32)(f32)iconHeight;
        u32 drawWidth = (u32)(f32)iconWidth;
        s32 viewShiftX = (s32)(viewX - cursorX);
        s32 viewShiftY = (s32)(viewY - cursorY);
        s32 drawX = (s32)(markerX - ((f32)viewShiftX - 160.0f));
        s32 drawY = (s32)(markerY - ((f32)viewShiftY - 120.0f));

        if ((flags & MARKER_FLAG_FIXED) == 0)
            screen->entries[i].active = (NaviMain_GetCurrentMap(navi) == screen->entries[i].map && screen->entries[i].key == *(s8 *)screen->entries) ? 1 : 0;

        if (screen->entries[i].active != 0) {
            efctSetSpeed(1.0f);
            RenderCtx *context = g_titleScene;
            s32 state = FUN_002c5d80(1, 0);
            renderStackPush(&context->stackA, state);
            FUN_002b0750(9, 0x13, sprite, (s32)(origin[0] + (f32)drawX), (s32)(origin[1] + (f32)drawY),
                         drawWidth, drawHeight, 0xB);
            renderStackPop(&g_titleScene->stackA);
        }
    }
}

} /* extern "C" */
