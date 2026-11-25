#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "util/BitsAndBytes_VariantB.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/nkm/NkmGrowEvent.h"
#include "shard/W5_W5Match2_PairedIds.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "gamedata/GameDataAccess.h"
#include "ui/AnimatedMessage.h"
#include "ui/NumberFont.h"

extern "C" {
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void statDrawClampedDelta(SlotRecordA *record, s16 id, s32 x, s32 y, u32 layer, u32 a);

/* Draws the highlighted row of the skill screen's candidate list: the button strip and frame, the
 * candidate skill's name in the colour its state calls for, its icon and its cost; a row past the
 * end of the list gets the empty marker instead. */
void skillScreenDrawCandidateRow(UniteWorkA *work, SlotRecordA *record, s32 x, s32 y, f32 effect)
{
    char text[64];
    s32 index = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) + listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
    const TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1a, listCursorGetRowIfUnblocked(&work->inheritanceA.skillList) + 0x1a7);
    efctSetSpeed(effect);
    s32 row = listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
    largeGridDrawButtonStrip(work, frame->x + x, frame->y + y, effect, row);
    bool filled = true;
    if (work->inheritanceA.skillCount <= index) {
        filled = false;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x19f, frame->x + x, frame->y + y, 0x83);
    if (filled) {
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x1a0, frame->x + x, frame->y + y, 0x83);
    } else {
        /* The empty marker is laid out for the slot list: move it to this list's frame. */
        s32 offsetX = asdTMTexTableEntryAt(0x1a, 0x1a7)->x - asdTMTexTableEntryAt(0x1a, 0x185)->x + asdTMTexTableEntryAt(0x1a, 0x1a0)->x -
                      asdTMTexTableEntryAt(0x1a, 0x176)->x;
        s32 offsetY = asdTMTexTableEntryAt(0x1a, 0x1a7)->y - asdTMTexTableEntryAt(0x1a, 0x185)->y + asdTMTexTableEntryAt(0x1a, 0x1a0)->y -
                      asdTMTexTableEntryAt(0x1a, 0x176)->y;
        const TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x1a, listCursorGetRowIfUnblocked(&work->inheritanceA.skillList) + 0x234);
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x233, marker->x + x + offsetX, marker->y + y + offsetY, 0x83);
    }
    s32 mode = recordGetModeForId(work->buttonsA.regions[row]);
    u32 color = SKILL_NAME_COLOR;
    if (!filled) {
        color = SKILL_NAME_COLOR_EMPTY;
    } else if (arrayContainsU16(work->inheritanceA.slots, 8, work->inheritanceA.skills[index])) {
        color = SKILL_NAME_COLOR_SLOTTED;
    } else if (mode == 1 || mode == 2 || mode == 6) {
        color = SKILL_NAME_COLOR_PRESSED;
    }
    sprintf(text, "%s", aocIndexValueOrDefault(work->inheritanceA.skills[index]));
    const TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1a, 0x1a2);
    textDrawString(frame->x + part->x + x, frame->y + part->y + y, 0.0f, 3, 0.0f, color, effect, text);
    part = asdTMTexTableEntryAt(0x1a, 0x1a1);
    FUN_00185e84(work->inheritanceA.skills[index], frame->x + part->x + x, frame->y + part->y + y, 0x8d, 0, 0);
    if (!recordContainsPairedId((const PairedIdList *)record, work->inheritanceA.skills[index])) {
        partyRecordSetEquippedItemClampRank(record, work->inheritanceA.skills[index], listCursorGetRowIfUnblocked(&work->inheritanceA.skillList));
    }
    statDrawClampedDelta(record, work->inheritanceA.skills[index], frame->x + part->x + x, frame->y + part->y + y, 0x8d, 0);
    if (filled) {
        part = asdTMTexTableEntryAt(0x1a, 0x1a6);
        numberFontDrawFormatted(1, frame->x + part->x + x, frame->y + part->y + y, 1, 4, 0x8d, "%d", skillGetAdjustedCost(record, work->inheritanceA.skills[index]));
    } else {
        /* Retail still looks up the empty row's cost entry and draws nothing with it. */
        asdTMTexTableEntryAt(0x1a, 0x19b);
    }
}

} /* extern "C" */
