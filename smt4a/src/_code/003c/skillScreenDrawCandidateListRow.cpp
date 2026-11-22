#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "util/BitsAndBytes_VariantB.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/nkm/NkmGrowEvent.h"
#include "ui/AnimatedMessage.h"

extern "C" {
void numberFontDrawFormatted(s32 kind, s32 x, s32 y, s32 align, s32 digits, u32 slot, const char *format, ...);
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void statDrawClampedDelta(SlotRecordA *record, s16 id, s32 x, s32 y, u32 layer, u32 a);
s32 uiSearchPrimary(const void *list);

/* Draws row `row` of the skill inheritance screen's candidate list at (x, y): the row's plate (the
 * highlighted, the past-the-limit or the plain one, greyed when the row is not `valid`), then, for a row
 * the list still covers, the skill's frame, its name in the colour its state calls for, its icon, the
 * rank change and, when valid, its cost. */
void skillScreenDrawCandidateListRow(UniteWorkA *work, s32 row, SlotRecordA *record, s32 valid, s32 x, s32 y, s32 highlighted,
                  f32 effect)
{
    char text[64];
    s32 top = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList);
    f32 scale = 1.0f; /* the name's opacity factor: retail keeps the multiplication */
    efctSetSpeed(effect);
    const TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1a, row + 0x185);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x16f, frame->x + x, frame->y + y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x170, frame->x + x, frame->y + y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x26f, frame->x + x, frame->y + y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x270, frame->x + x, frame->y + y, 0x65);
    if (highlighted) {
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x173, frame->x + x, frame->y + y, 0x65);
    } else {
        if (work->inheritanceA.rowLimit <= top + row) {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x229, frame->x + x, frame->y + y, 0x65);
            return;
        }
        /* The plain plate, greyed over for a row that cannot be picked. */
        if (!valid) {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x171, frame->x + x, frame->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x244, frame->x + x, frame->y + y, 0x65);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x171, frame->x + x, frame->y + y, 0x65);
        }
    }
    if (uiSearchPrimary(&work->inheritanceA.skillList) > row) {
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x174, frame->x + x, frame->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x175, frame->x + x, frame->y + y, 0x6a);
        u32 color;
        if (valid) {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x176, frame->x + x, frame->y + y, 0x6f);
            color = 0xffffffff; /* white */
            if (highlighted) {
                color = 0xff; /* black on the highlighted plate */
            }
        } else {
            const TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x1a, row + 0x234);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x233, marker->x + x, marker->y + y, 0x6f);
            color = SKILL_NAME_COLOR_EMPTY;
        }
        if (valid && !highlighted &&
            arrayContainsU16(work->inheritanceA.slots, 8, work->inheritanceA.skills[top + row])) {
            color = SKILL_NAME_COLOR_SLOTTED;
        }
        sprintf(text, "%s", aocIndexValueOrDefault(work->inheritanceA.skills[top + row]));
        const TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1a, 0x178);
        textDrawString(frame->x + part->x + x, frame->y + part->y + y, 0.0f, 2, 0.0f, color, effect * scale, text);
        part = asdTMTexTableEntryAt(0x1a, 0x177);
        FUN_00185e84(work->inheritanceA.skills[top + row], frame->x + part->x + x, frame->y + part->y + y, 0x74, 0, 0);
        partyRecordSetEquippedItemClampRank(record, work->inheritanceA.skills[top + row], row);
        statDrawClampedDelta(record, work->inheritanceA.skills[top + row], frame->x + part->x + x, frame->y + part->y + y,
                             0x74, 0);
        if (valid) {
            part = asdTMTexTableEntryAt(0x1a, 0x17c);
            numberFontDrawFormatted(1, frame->x + part->x + x, frame->y + part->y + y, 1, 4, 0x79, "%d",
                                 skillGetAdjustedCost(record, work->inheritanceA.skills[top + row]));
        }
        efctSetSpeed(effect);
    }
}

} /* extern "C" */
