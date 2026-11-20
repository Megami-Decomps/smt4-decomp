/* NON_MATCHING: the slot-list twin of skillScreenDrawCandidateRow, same calls, constants, registers and frame (27 raw / 11 shape
 * rows, from 190 / 162). One block differs: for the second frame draw (0x1a0) retail stores the depth 0x83 first and
 * the y sum second, one by one, where this build pairs them (strd) and loads the image id earlier. The unit is
 * IDENTICAL when the name colour is declared between the two frame draws; no reason for a declaration there is
 * known, so it stays where the colour is used. */
#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code002a_VariantA.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/nkm/NkmGrowEvent.h"
#include "shard/W5_W5Match2_PairedIds.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
void statRowDrawValueImpl(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const char *format, ...);
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void statDrawClampedDelta(SlotRecordA *record, s16 id, s32 x, s32 y, u32 layer, u32 a);

/* Draws the highlighted row of the skill screen's slot list: the button strip and, for a filled slot,
 * the frame, the skill's name, its icon and its cost; an empty slot gets the placeholder dashes. */
void skillScreenDrawSelectedSlotRow(UniteWorkA *work, SlotRecordA *record, s32 x, s32 y, f32 effect)
{
    char text[64];
    s32 row = listCursorGetRowIfUnblocked(&work->inheritanceA.slotList);
    const TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1a, row + 0x23c);
    s32 button = listCursorGetRowIfUnblocked(&work->inheritanceA.slotList) + 0x20;
    largeGridDrawButtonStrip(work, frame->x + x, frame->y + y, effect, button);
    if (work->inheritanceA.slots[row] == 0) {
        u32 color = SKILL_NAME_COLOR;
        s32 mode = recordGetModeForId(work->buttonsA.regions[button]);
        if (mode == 1 || mode == 2 || mode == 6) {
            color = SKILL_NAME_COLOR_PRESSED;
        }
        sprintf(text, "\x81\x7c \x81\x7c \x81\x7c");
        const TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1a, 0x1a2);
        textDrawString(frame->x + part->x + x, frame->y + part->y + y, 0.0f, 3, 0.0f, color, effect, text);
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x19f, frame->x + x, frame->y + y, 0x83);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x1a0, frame->x + x, frame->y + y, 0x83);
    u32 color = SKILL_NAME_COLOR;
    s32 mode = recordGetModeForId(work->buttonsA.regions[button]);
    if (mode == 1 || mode == 2 || mode == 6) {
        color = SKILL_NAME_COLOR_PRESSED;
    }
    sprintf(text, "%s", aocIndexValueOrDefault(work->inheritanceA.slots[row]));
    const TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1a, 0x1a2);
    textDrawString(frame->x + part->x + x, frame->y + part->y + y, 0.0f, 2, 0.0f, color, effect, text);
    part = asdTMTexTableEntryAt(0x1a, 0x1a1);
    FUN_00185e84(work->inheritanceA.slots[row], frame->x + part->x + x, frame->y + part->y + y, 0x74, 0, 0);
    if (!recordContainsPairedId((const PairedIdList *)record, work->inheritanceA.slots[row])) {
        partyRecordSetEquippedItemClampRank(record, work->inheritanceA.slots[row], row);
    }
    statDrawClampedDelta(record, work->inheritanceA.slots[row], frame->x + part->x + x, frame->y + part->y + y, 0x74, 0);
    part = asdTMTexTableEntryAt(0x1a, 0x1a6);
    statRowDrawValueImpl(1, frame->x + part->x + x, frame->y + part->y + y, 1, 4, 0x79, "%d", skillGetAdjustedCost(record, work->inheritanceA.slots[row]));
}

} /* extern "C" */
