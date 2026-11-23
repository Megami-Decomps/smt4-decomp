/* NON_MATCHING: bible devil stat rows; the stat lookup is one inline helper here while retail expands separate branch
 * trees per use. The rows are the six g_bibleDevilRow* arrays (one view with Obj42247c::drawList, which reaches each
 * through its own pool word); retail here pools only the value, cost-x and cost-colour arrays and reaches the colour,
 * cost-y and cost-text arrays from those bases (+0x28, +0x28, +0x50), where this build pools all six. */
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmBaseRecord.h"
#include "bible/BibleDevilList.h"

#define BIBLE_COLOR_NONE 0xFFFFFFFF
#define BIBLE_COLOR_HIGHER 0x72E027FF   /* better than the compared devil */
#define BIBLE_COLOR_LOWER 0xDC0F14FF    /* worse than the compared devil */

struct BibleLayoutPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {
extern s32 DAT_0043d9cc;

s32 FUN_0029e924(void *list);
s32 rangeLimitMin(void *list);
u32 FUN_0029ce60(u32 devilId, s32 column, s32 flag);
BibleLayoutPoint *layoutFindTableEntry(void *layout, s32 id);

/* The shown stat of the entry at `index`: 0 when the column has none. */
static __inline u32 bibleStatOf(const BibleDevilEntry *entry, bool perDevil, s32 column)
{
    u32 stat = 0;
    if (!perDevil) {
        if (column == 0)
            stat = entry->statA;
        else if (column == 1)
            stat = entry->statB;
    } else if (column != 0) {
        if (column == 1)
            stat = entry->statA;
        else if (column == 2)
            stat = entry->statB;
    } else {
        NkmBaseRecord *record = nkmBaseGetRecord(entry->devilId);
        if (entry->devilId != 0)
            stat = record->level;
    }
    return stat;
}

/* Refreshes the ten stat rows of the bible's devil page when the visible window moved: value,
 * comparison colour, screen position and text of each row. */
void FUN_0022d1a8(BibleDevilWork *work)
{
    if (work->list.count == 0)
        return;
    s32 first = FUN_0029e924(&work->list);
    s32 rows = rangeLimitMin(&work->list);
    if (first == DAT_0043d9cc)
        return;
    DAT_0043d9cc = first;
    for (s32 i = 0; i < rows; i++) {
        u32 color = BIBLE_COLOR_NONE;
        u16 devilId = work->entries[first + i].devilId;
        bool perDevil = work->mode == 0;
        const BibleDevilEntry *entry = &work->entries[FUN_0029e924(&work->list) + i];
        u32 value = bibleStatOf(entry, perDevil, work->column);
        if (work->mode == 1 && work->column == 1) {
            entry = &work->entries[FUN_0029e924(&work->list) + i];
            u32 compare = 0;
            if (!perDevil) {
                compare = entry->statA;
            } else {
                NkmBaseRecord *record = nkmBaseGetRecord(entry->devilId);
                if (entry->devilId != 0)
                    compare = record->level;
            }
            if (value > compare)
                color = BIBLE_COLOR_HIGHER;
            if (value < compare)
                color = BIBLE_COLOR_LOWER;
        }
        g_bibleDevilRowValue[i] = value;
        g_bibleDevilRowColor[i] = color;

        u32 textColor = BIBLE_COLOR_NONE;
        BibleLayoutPoint *label = layoutFindTableEntry(work->layout, i + 0x42F);
        s32 labelX = label->x;
        s32 labelY = label->y;
        u32 shown = FUN_0029ce60(devilId, work->column, work->mode != 0);
        if (work->mode == 1) {
            u32 baseline = FUN_0029ce60(devilId, 0, work->mode != 0);
            if (shown < baseline)
                textColor = BIBLE_COLOR_LOWER;
            if (baseline < shown)
                textColor = BIBLE_COLOR_HIGHER;
        }
        BibleLayoutPoint *value2 = layoutFindTableEntry(work->layout, 0x4C6);
        g_bibleDevilRowCostX[i] = value2->x + labelX;
        g_bibleDevilRowCostY[i] = value2->y + labelY;
        sprintf(g_bibleDevilRowCostText[i], "%d", shown);
        g_bibleDevilRowCostColor[i] = textColor;
    }
}

} /* extern "C" */
