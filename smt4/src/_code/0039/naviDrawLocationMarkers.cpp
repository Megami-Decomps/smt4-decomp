/* NON_MATCHING: draws the title map's location markers (16 entries, scaled into the view around the cursor, only the active ones). The control flow and the active refresh are retail's; the frame (retail 44 bytes: it keeps the sprite in fp and spills the hoisted draw tag 11) and the VFP register allocation of the marker and view arithmetic differ, retail loading the icon size while it computes the marker position. */
#include "gamedata/MapSaveBlock.h"
#include "shard/NaviMain.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

struct MapMarkerEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 map;             /* map the marker belongs to (0: unused) */
    /* 0x04 */ s8 slot;
    /* 0x05 */ s8 active;
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
    /* 0x160 */ u8 unk160[2];
    /* 0x162 */ u8 navi[2];
    /* 0x164 */ u8 originPair[8];
    /* 0x16C */ u8 unk16C[0xA14];
    /* 0xB80 */ MapMarkerView viewSize;
    /* 0xB88 */ MapMarkerView slots[8];
};

#define MARKER_COUNT 0x10
#define MARKER_LAYOUT_FULL 0xC
#define MARKER_SPRITE_FULL 0x1B65
#define MARKER_SPRITE_HALF 0x1B8D
#define MARKER_FLAG_FIXED 0x20

extern "C" {

void NaviMain_GetPosY(void *navi);
s32 NaviMain_GetCurrentMap(void *navi);
void pairCopy(void *source, f32 *destination);
void uiGetEntrySize(u32 table, u32 sprite, s32 *width, s32 *height);
void efctSetSpeed(f32 speed);
s32 renderCtxPackPassFlags(u32 a, u32 b);
void uiDrawTableTextureSized(u32 layer, u32 table, u32 sprite, s32 x, s32 y, s32 width, s32 height, u32 flags);

void naviDrawLocationMarkers(MapMarkerScreen *screen)
{
    MapSaveBlock *block = gameGetMapBlock();
    void *navi = &screen->navi;
    f32 *cursor = (f32 *)NaviMain_GetCursorPos(navi);
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
    bool refresh = false;
    if ((screen->flags & MARKER_FLAG_FIXED) == 0)
        refresh = true;
    NaviMain_GetPosY(navi);
    f32 origin[2];
    pairCopy(screen->originPair, origin);

    for (u32 i = 0; i < MARKER_COUNT; i++) {
        if (screen->entries[i].map == 0 || NaviMain_GetCurrentMap(navi) != screen->entries[i].map)
            continue;

        s16 slotX, slotY;
        if (block->layout == MARKER_LAYOUT_FULL) {
            slotX = (s16)(f32)screen->slots[screen->entries[i].slot].x;
            slotY = (s16)(f32)screen->slots[screen->entries[i].slot].y;
        } else {
            slotX = (s16)((f32)screen->slots[screen->entries[i].slot].x * 0.5f);
            slotY = (s16)((f32)screen->slots[screen->entries[i].slot].y * 0.5f);
        }
        s16 markerX = (s16)((f32)slotX + (f32)screen->entries[i].x * scale);
        s16 markerY = (s16)((f32)slotY + (f32)screen->entries[i].y * scale);
        markerX = (s16)((f32)markerX - offset);
        markerY = (s16)((f32)markerY - offset);

        s32 viewShiftX, viewShiftY;
        if (block->layout == MARKER_LAYOUT_FULL) {
            viewShiftX = (s32)((f32)screen->viewSize.x - cursorX);
            viewShiftY = (s32)((f32)screen->viewSize.y - cursorY);
        } else {
            viewShiftX = (s32)((f32)(screen->viewSize.x / 2) - cursorX);
            viewShiftY = (s32)((f32)(screen->viewSize.y / 2) - cursorY);
        }
        u32 drawHeight = (u32)(f32)iconHeight;
        u32 drawWidth = (u32)(f32)iconWidth;
        s32 drawX = (s32)((f32)markerX - ((f32)viewShiftX - 160.0f));
        s32 drawY = (s32)((f32)markerY - ((f32)viewShiftY - 120.0f));

        if (refresh) {
            if (NaviMain_GetCurrentMap(navi) == screen->entries[i].map && screen->entries[i].key == *(s8 *)screen->entries)
                screen->entries[i].active = 1;
            else
                screen->entries[i].active = 0;
        }

        if (screen->entries[i].active != 0) {
            efctSetSpeed(screen->entries[i].unk09 == 0 ? 0.5f : 1.0f);
            RenderCtx *context = g_titleScene;
            s32 state = renderCtxPackPassFlags(1, 0);
            renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
            uiDrawTableTextureSized(9, 0x13, sprite, (s32)(origin[0] + (f32)drawX), (s32)(origin[1] + (f32)drawY),
                         drawWidth, drawHeight, 0xB);
            renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_A);
        }
    }
}

} /* extern "C" */
