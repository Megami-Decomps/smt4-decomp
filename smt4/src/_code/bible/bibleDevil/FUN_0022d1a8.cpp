/* NON_MATCHING: bible devil stat rows; the stat lookup is one inline helper here while retail expands separate branch trees per use, and the row arrays are addressed through one struct instead of six literal bases */
#include "common.h"

#define BIBLE_STAT_ROWS 10
#define BIBLE_COLOR_NONE 0xFFFFFFFF
#define BIBLE_COLOR_HIGHER 0x72E027FF   /* better than the compared devil */
#define BIBLE_COLOR_LOWER 0xDC0F14FF    /* worse than the compared devil */

struct BibleDevilEntry {
    /* 0x00 */ u16 devilId;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u8 statA;
    /* 0x09 */ u8 statB;
    /* 0x0A */ u8 unk0A[0x16];
};

struct DevilRecordStat {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 level;
};

struct BibleDevilWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 list[8];
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02C[0x9C];
    /* 0x0C8 */ u8 layout[0x4DC];
    /* 0x5A4 */ s8 mode;            /* 0: per-devil columns, 1: compare two devils, other: detail */
    /* 0x5A5 */ s8 column;
    /* 0x5A6 */ u8 unk5A6[6];
    /* 0x5AC */ BibleDevilEntry entries[1];
};

/* The stat rows the screen draws. */
struct BibleDevilRows {
    /* 0x00 */ u32 value[BIBLE_STAT_ROWS];
    /* 0x28 */ u32 color[BIBLE_STAT_ROWS];
    /* 0x50 */ s32 x[BIBLE_STAT_ROWS];
    /* 0x78 */ s32 y[BIBLE_STAT_ROWS];
    /* 0xA0 */ char text[BIBLE_STAT_ROWS][0x20];
    /* 0x1E0 */ u32 textColor[BIBLE_STAT_ROWS];
};

struct BibleLayoutPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {
extern s32 DAT_0043d9cc;
extern BibleDevilRows g_bibleDevilRows;

s32 FUN_0029e924(void *list);
s32 rangeLimitMin(void *list);
DevilRecordStat *devilGetRecord(u32 id);
void textFormatBuffer(char *buffer, const char *format, u32 value);
u32 FUN_0029ce60(u32 devilId, s32 column, s32 flag);
BibleLayoutPoint *FUN_002bf4f0(void *layout, s32 id);

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
        DevilRecordStat *record = devilGetRecord(entry->devilId);
        if (entry->devilId != 0)
            stat = record->level;
    }
    return stat;
}

/* Refreshes the ten stat rows of the bible's devil page when the visible window moved: value,
 * comparison colour, screen position and text of each row. */
void FUN_0022d1a8(BibleDevilWork *work)
{
    if (work->count == 0)
        return;
    s32 first = FUN_0029e924(work->list);
    s32 rows = rangeLimitMin(work->list);
    if (first == DAT_0043d9cc)
        return;
    DAT_0043d9cc = first;
    for (s32 i = 0; i < rows; i++) {
        u32 color = BIBLE_COLOR_NONE;
        u16 devilId = work->entries[first + i].devilId;
        bool perDevil = work->mode == 0;
        const BibleDevilEntry *entry = &work->entries[FUN_0029e924(work->list) + i];
        u32 value = bibleStatOf(entry, perDevil, work->column);
        if (work->mode == 1 && work->column == 1) {
            entry = &work->entries[FUN_0029e924(work->list) + i];
            u32 compare = 0;
            if (!perDevil) {
                compare = entry->statA;
            } else {
                DevilRecordStat *record = devilGetRecord(entry->devilId);
                if (entry->devilId != 0)
                    compare = record->level;
            }
            if (value > compare)
                color = BIBLE_COLOR_HIGHER;
            if (value < compare)
                color = BIBLE_COLOR_LOWER;
        }
        g_bibleDevilRows.value[i] = value;
        g_bibleDevilRows.color[i] = color;

        u32 textColor = BIBLE_COLOR_NONE;
        BibleLayoutPoint *label = FUN_002bf4f0(work->layout, i + 0x42F);
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
        BibleLayoutPoint *value2 = FUN_002bf4f0(work->layout, 0x4C6);
        g_bibleDevilRows.x[i] = value2->x + labelX;
        g_bibleDevilRows.y[i] = value2->y + labelY;
        textFormatBuffer(g_bibleDevilRows.text[i], "%d", shown);
        g_bibleDevilRows.textColor[i] = textColor;
    }
}

} /* extern "C" */
