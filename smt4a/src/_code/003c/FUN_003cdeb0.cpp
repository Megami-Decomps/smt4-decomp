/* NON_MATCHING: live entry-ID reloads restore retail stat/helper argument handling; cursor/row spills occupy a larger frame and empty-slot coordinate/pool scheduling still differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "util/BitsAndBytes_VariantB.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code002a_VariantA.h"

/* Position record of an icon in the icon table (only the screen position). */
struct SlotIconPosition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

/* The slot list screen's work area (only the fields read here). */
struct SlotListScreen {
    /* 0x0000 */ u8 unk0000[0x438];
    /* 0x0438 */ s16 slotIds[0x100];
    /* 0x0638 */ u8 unk0638[0x7f28];
    /* 0x8560 */ u8 unk8560[0x600];
    /* 0x8b60 */ u16 ownedIds[8];
    /* 0x8b70 */ u16 entryIds[0x120];
    /* 0x8db0 */ u8 unk8db0[0x64];
    /* 0x8e14 */ u32 cursor;
    /* 0x8e18 */ u8 unk8e18[0x68];
    /* 0x8e80 */ s32 entryCount;
};

extern "C" {
s32 resourceRunOperationIfUnblocked(u32 *cursor);
void efctSetSpeed(f32 speed);
void largeGridDrawButtonStrip(SlotListScreen *screen, s32 x, s32 y, s32 row, f32 scale);
s32 recordGetModeForId(s32 id);
void textFormatBuffer(char *output, const char *format, ...);
void FUN_00185e84(s32 id, s32 x, s32 y, s32 style, s32 a, s32 b);
s32 recordContainsPairedId(u32 argument, u16 id);
void FUN_004bd6b0(u32 argument, u16 id, s32 value);
void statDrawClampedDelta(u32 argument, s32 id, s32 x, s32 y, s32 style, s32 mode);
u32 FUN_004bcbb4(u32 argument, u16 id);
void FUN_00180310(s32 a, s32 x, s32 y, s32 b, s32 c, s32 style, const char *format, u32 value);

/* Draws the highlighted row of the slot list: the button strip and frame, the entry's name in
   the colour its state calls for, and its stat figures. */
void FUN_003cdeb0(SlotListScreen *screen, u32 argument, s32 x, s32 y, f32 scale)
{
    char text[64];
    s32 base = resourceRunOperationIfUnblocked(&screen->cursor);
    s32 entry = base + FUN_002a4894(&screen->cursor);
    SlotIconPosition *frame = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, FUN_002a4894(&screen->cursor) + 0x1a7));
    efctSetSpeed(scale);
    s32 row = FUN_002a4894(&screen->cursor);
    largeGridDrawButtonStrip(screen, frame->x + x, frame->y + y, row, scale);
    bool filled = true;
    if (screen->entryCount <= entry) {
        filled = false;
    }
    FUN_001835b4(2, 0x1a, 0x19f, frame->x + x, frame->y + y, 0x83);
    if (filled) {
        FUN_001835b4(2, 0x1a, 0x1a0, frame->x + x, frame->y + y, 0x83);
    } else {
        s32 offsetX = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a7))->x - reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x185))->x + reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a0))->x -
                      reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x176))->x;
        s32 offsetY = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a7))->y - reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x185))->y + reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a0))->y -
                      reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x176))->y;
        SlotIconPosition *marker = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, FUN_002a4894(&screen->cursor) + 0x234));
        FUN_001835b4(2, 0x1a, 0x233, marker->x + x + offsetX, marker->y + y + offsetY, 0x83);
    }
    s32 mode = recordGetModeForId(screen->slotIds[row]);
    u32 color = 0x9fe7ffff;
    if (!filled) {
        color = 0x9b9b9bff;
    } else if (arrayContainsU16(screen->ownedIds, 8, screen->entryIds[entry])) {
        color = 0x57d8ffff;
    } else if (mode == 1 || mode == 2 || mode == 6) {
        color = 0xf5ff9fff;
    }
    textFormatBuffer(text, "%s", FUN_0014bd84(screen->entryIds[entry]));
    SlotIconPosition *nameBox = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a2));
    textDrawString(3, color, text, (f32)(frame->x + nameBox->x + x), (f32)(frame->y + nameBox->y + y), 0.0f, 0.0f, scale);
    SlotIconPosition *statBox = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a1));
    FUN_00185e84((s16)screen->entryIds[entry], frame->x + statBox->x + x, frame->y + statBox->y + y, 0x8d, 0, 0);
    if (!recordContainsPairedId(argument, screen->entryIds[entry])) {
        FUN_004bd6b0(argument, screen->entryIds[entry], FUN_002a4894(&screen->cursor));
    }
    statDrawClampedDelta(argument, (s16)screen->entryIds[entry], frame->x + statBox->x + x, frame->y + statBox->y + y, 0x8d, 0);
    if (filled) {
        SlotIconPosition *countBox = reinterpret_cast<SlotIconPosition *>(asdTMTexTableEntryAt(0x1a, 0x1a6));
        FUN_00180310(1, frame->x + countBox->x + x, frame->y + countBox->y + y, 1, 4, 0x8d, "%d",
                     FUN_004bcbb4(argument, screen->entryIds[entry]));
    } else {
        asdTMTexTableEntryAt(0x1a, 0x19b);
    }
}

} /* extern "C" */
