/* NON_MATCHING: 89 lines (45 by shape); same control flow, frame size and calls. What differs: the spill slots of the cursor row and the label entry (sp+24/sp+20 in retail, sp+16/sp here); the "???" textDrawString converts y and x through s0/s2 and loads the 0.28 scale last; the hidden rows' icon x loads row->x before icon->x; the scissor call keeps the window's width and height in r0/r7 and moves them into r2/r3 last. */
#include "status/StatusDownA.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"
#include "runtime/Stdio.h"
#include "shard/TextureDrawCall.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code0035.h"
#include "code/Code002c.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {

u32 itemIsCollectedWithRelated(u16 id);
void statusDownDrawIndicatorPairs(s32 x, s32 y);
const char *dataTable0cFindByKey(u16 id);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 mode);
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                         u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                         u32 arrowBRegion, s32 layer, s32 horizontal);

/* Draws the status screen's flagged list at (x, y): the eleven visible rows (icon, name and message; "???" for
   names that are still hidden), the focused row with its scrolling highlight, and the scroll bar. */
void FUN_003d3a4c(s32 x, s32 y, f32 alpha)
{
    StatusDownStateA *screen = g_statusDown;
    s32 top = resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(&screen->flagged.navigation));
    s32 cursorRow = listCursorGetRowIfUnblocked(reinterpret_cast<Object *>(&screen->flagged.navigation));
    bool hidden = false;
    char text[64];

    u32 kind = FUN_002c7e3c();
    if (kind == 14) {
        hidden = true;
    } else if (kind == 7 && !itemIsCollectedWithRelated(*reinterpret_cast<u16 *>(FUN_002c7e24()))) {
        hidden = true;
    }

    efctSetSpeed(alpha);
    texDrawCompositeSprite(2, 0x12, 5, x, y, 0xb3);
    texDrawCompositeSprite(2, 0x12, 11, x, y, 0xb5);
    statusDownDrawIndicatorPairs(x, y);

    for (s32 i = 0; i < 11; i++) {
        if (screen->flagged.entries[top + i].recordId == 0) {
            continue;
        }
        TextureTableEntryIV *row = asdTMTexTableEntryAt(0x12, i + 0x44c);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x12, 0x44b);
        if (hidden) {
            __2sprintf(text, "\x81\x48\x81\x48\x81\x48");
            textDrawString((f32)(row->x + label->x + x), (f32)(row->y + label->y + y), 0.28f, 2, 0.0f, 0xff, alpha, text);
        } else {
            const char *name = dataTable0cFindByKey(screen->flagged.entries[top + i].recordId);
            if (name != NULL) {
                textDrawString((f32)(row->x + label->x + x), (f32)(row->y + label->y + y), 0.28f, 2, 0.0f, 0xff, alpha, name);
            }
        }
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x12, 0x449);
        if (hidden) {
            uiDrawItemOrStatusIcon(0, icon->x + row->x + x, row->y + icon->y + y, 0xb5, 0);
        } else {
            uiDrawItemOrStatusIcon(screen->flagged.entries[top + i].icon, row->x + icon->x + x, row->y + icon->y + y, 0xb5, 0);
        }
        TextureTableEntryIV *message = asdTMTexTableEntryAt(0x12, 0x44a);
        FUN_0035bd4c(screen->flagged.entries[top + i].recordId, row->x + message->x + x, row->y + message->y + y, 0xb5);
    }

    if (screen->track.state == 20) {
        if (screen->flagged.entries[cursorRow + top].recordId != 0) {
            TextureTableEntryIV *row = asdTMTexTableEntryAt(0x12, cursorRow + 0x42c);
            efctSetSpeed(vec2GetSpeed(&screen->sprites[1]) * alpha);
            texDrawCompositeSprite(2, 0x12, 8, row->x + x, row->y + y, 0xbf);
            efctSetSpeed(alpha);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x41f, row->x + x, row->y + y, 0xc4);
            s32 frame = 0x420;
            if (screen->unk530 == 0 && screen->unk534 == 0 && screen->unk538 == 0 && screen->indicatorFirst == 0 &&
                screen->indicatorSecond == 0 && screen->unk52C >= 0) {
                frame = 0x421;
            }
            texDrawTableEntryAtStoredOrigin(2, 0x12, frame, row->x + x, row->y + y, 0xc4);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x457, row->x + x, row->y + y, 0xc4);

            TextureTableEntryIV *window = asdTMTexTableEntryAt(0x12, 0x420);
            renderStackSetCounted(&g_renderCtx->scissor, 3);
            gxSetMirroredClippedScissor(row->x + window->x + x, row->y + window->y + y, window->placement->width,
                                        window->placement->height, 1);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x422, vec2GetXInt(&screen->sprites[3]) + x + row->x,
                                            vec2GetYInt(&screen->sprites[3]) + y + row->y, 0xc9);
            renderStackSetCounted(&g_renderCtx->scissor, 0);

            TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x12, 0x458);
            if (hidden) {
                uiDrawItemOrStatusIcon(0, icon->x + row->x + x, row->y + icon->y + y, 0xc9, 0);
            } else {
                uiDrawItemOrStatusIcon(screen->flagged.entries[cursorRow + top].icon, row->x + icon->x + x, row->y + icon->y + y, 0xc9, 0);
            }
            TextureTableEntryIV *message = asdTMTexTableEntryAt(0x12, 0x459);
            FUN_0035bd4c(screen->flagged.entries[cursorRow + top].recordId, row->x + message->x + x, message->y + row->y + y, 0xc9);
        }
    }

    if (objectApplyIfUnblocked(reinterpret_cast<Object *>(&screen->flagged.navigation)) <= 0) {
        texDrawCompositeSprite(2, 0x12, 0x1b, x, y, 0xdd);
    }
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x5a1, x, y, 0xbf);
    uiDrawListScrollBar(reinterpret_cast<Object *>(&screen->flagged.navigation), x, y, 0x12, 0x404, 0x405, 0x406, 0x400, 0x402, 0x401, 0x403, screen->slots[36], screen->slots[37],
                        screen->slots[38], 0xc4, 0);
}

} /* extern "C" */
