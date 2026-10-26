/* NON_MATCHING: grid slot detail draw (name, detail value and stat delta); the speed parameter (retail s0, kept in s16) is forwarded to the strip and text draws, the entry-id array uses ldrsh/ldrh and the saved-register assignment still differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


struct GridDetailView {
    /* 0x0000 */ u8 unk0000[0x438];
    /* 0x0438 */ s16 slotIds[1];
    /* 0x043A */ u8 unk043A[0x7726];
    /* 0x8B60 */ s16 entryIds[1];
    /* 0x8B62 */ u8 unk8B62[0x24E];
    /* 0x8DB0 */ u8 cursor[1];
};

extern "C" {
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00180310(s32 a, s32 x, s32 y, s32 b, s32 c, u32 flags, const char *format, u32 value);
void FUN_00185e84(s32 id, s32 x, s32 y, u32 flags, s32 a, s32 b);
void largeGridDrawButtonStrip(GridDetailView *view, s32 x, s32 y, s32 slot, f32 speed);
void statDrawClampedDelta(void *owner, s32 id, s32 x, s32 y, u32 flags, s32 arg);
u32 FUN_0014bd84(u16 id);
s32 recordGetModeForId(s32 id);
s32 FUN_002a4894(void *cursor);
s32 recordContainsPairedId(void *owner, u16 id);
u32 FUN_004bcbb4(void *owner, u16 id);
void FUN_004bd6b0(void *owner, u16 id, s32 slot);

#define GRID_COLOR_NORMAL 0x9FE7FFFF
#define GRID_COLOR_SPECIAL 0xF5FF9FFF

/* Draws the detail of the grid slot under the cursor at (x, y): the entry name, its value and
 * the clamped stat delta, or a placeholder line when the slot is empty. */
void FUN_003cce74(GridDetailView *view, void *owner, s32 x, s32 y, f32 speed)
{
    char text[84];
    s32 slot = FUN_002a4894(view->cursor);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1A, slot + 0x23C);
    s32 button = FUN_002a4894(view->cursor) + 0x20;
    largeGridDrawButtonStrip(view, frame->x + x, frame->y + y, button, speed);

    u32 color = GRID_COLOR_NORMAL;
    s16 entry = view->entryIds[slot];
    if (entry != 0) {
        FUN_001835b4(2, 0x1A, 0x19F, frame->x + x, frame->y + y, 0x83);
        FUN_001835b4(2, 0x1A, 0x1A0, frame->x + x, frame->y + y, 0x83);
        s32 mode = recordGetModeForId(view->slotIds[button]);
        if (mode == 1 || mode == 2 || mode == 6)
            color = GRID_COLOR_SPECIAL;
        textFormatBuffer(text, "%s", FUN_0014bd84(entry));
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1A, 0x1A2);
        textDrawString(2, color, text, (f32)(frame->x + label->x + x), (f32)(frame->y + label->y + y), 0.0f, 0.0f, speed);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1A, 0x1A1);
        FUN_00185e84(entry, frame->x + icon->x + x, icon->y + frame->y + y, 0x74, 0, 0);
        if (recordContainsPairedId(owner, entry) == 0)
            FUN_004bd6b0(owner, entry, slot);
        statDrawClampedDelta(owner, entry, frame->x + icon->x + x, icon->y + frame->y + y, 0x74, 0);
        TextureTableEntryIV *value = asdTMTexTableEntryAt(0x1A, 0x1A6);
        u32 amount = FUN_004bcbb4(owner, entry);
        FUN_00180310(1, frame->x + value->x + x, value->y + frame->y + y, 1, 4, 0x79, "%d", amount);
    } else {
        s32 mode = recordGetModeForId(view->slotIds[button]);
        if (mode == 1 || mode == 2 || mode == 6)
            color = GRID_COLOR_SPECIAL;
        textFormatBuffer(text, "\x81\x7C \x81\x7C \x81\x7C");
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1A, 0x1A2);
        textDrawString(3, color, text, (f32)(frame->x + label->x + x), (f32)(frame->y + label->y + y), 0.0f, 0.0f, speed);
    }
}

} /* extern "C" */
