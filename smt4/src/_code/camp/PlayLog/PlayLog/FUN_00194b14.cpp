/* NON_MATCHING: draws the camp play log list rows (cursor frame, entry name and its value as text, number or play time h/m); written from the decompilation, argument evaluation and the float conversions of the text positions not compared with retail */
#include "gamedata/DataTable.h"
#include "util/FUN_0029d644.h"

struct PlayLogFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;
};

struct PlayLogEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ char name[0x35];
    /* 0x37 */ char unit[8];          /* the unit suffix; "0" means none */
    /* 0x3F */ u8 kind;               /* 1: play time in seconds */
};

struct PlayLogRow {
    /* 0x00 */ u8 data[0x8C];
};

/* The list widget sits at 0x2DC of the play log; its scroll state follows. */
struct PlayLogView {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ PlayLogRow rows[5];
    /* 0x2DC */ u8 list[0x6C];
    /* 0x348 */ s16 barA;
    /* 0x34A */ s16 barB;
    /* 0x34C */ s16 barC;
    /* 0x34E */ u8 unk34E[0xE];
    /* 0x35C */ u32 values[0x40];        /* indexed by entry id */
    /* 0x45C */ u8 unk45C[1];
};

#define PLAYLOG_FONT_TABLE 0x30
#define PLAYLOG_ENTRY_TABLE 0x37
#define PLAYLOG_ENTRY_SIZE 0x40
#define PLAYLOG_IDS_OFFSET 0x424
#define PLAYLOG_NAME_COLOR 0xE09800FF
#define PLAYLOG_VALUE_COLOR 0xFF
#define PLAYLOG_SECONDS_PER_HOUR 0xE10

extern "C" {
extern PlayLogView *g_playLog;

s32 FUN_0029efc0(void *list);
void FUN_00290994(void *list, s32 x, s32 a, s32 table, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6,
                  s32 barC, s32 barA, s32 barB, s32 flags, s32 extra);
void FUN_002907c4(char *out, u32 value);
void FUN_002bf380(u32 layer, u32 table, u32 sprite, s32 x, s32 y, u32 flags);
PlayLogFrame *asdTMTexTableEntryAt(u32 table, u32 index);
s32 vec2GetXInt(void *row);
void textFormatBuffer(char *out, const char *format, ...);
void textDrawString(u32 layer, u32 color, const char *text, f32 x, f32 y);
s32 fontMeasureLineAdvance(const char *text, u32 font);

void FUN_00194b14(void)
{
    PlayLogView *log = g_playLog;
    for (s32 row = 0; row < (s32)FUN_0029d644(log->list); row++) {
        s32 x = vec2GetXInt(&log->rows[row]);
        if (row == 0)
            FUN_002bf380(2, PLAYLOG_FONT_TABLE, 0, x, 0, 0xB);
        if ((s32)FUN_0029d644(log->list) - 1 == row) {
            FUN_00290994(log->list, x, 0, PLAYLOG_FONT_TABLE, 7, 8, 9, 3, 5, 4, 6, log->barC, log->barA, log->barB, 0xB, 0);
        }
        PlayLogFrame *frame = asdTMTexTableEntryAt(PLAYLOG_FONT_TABLE, row + 0x15);
        FUN_002bf380(2, PLAYLOG_FONT_TABLE, 1, frame->x + x, frame->y, 0xB);

        u32 entryId = *(s16 *)((u8 *)log + PLAYLOG_IDS_OFFSET + (FUN_0029efc0(log->list) + row) * 2);
        DataTableView<PlayLogEntry> table(PLAYLOG_ENTRY_TABLE, 0);
        PlayLogEntry *entry = NULL;
        if (entryId < table.count)
            entry = reinterpret_cast<PlayLogEntry *>(reinterpret_cast<u8 *>(table.entries) + entryId * PLAYLOG_ENTRY_SIZE);
        if (entry == NULL)
            continue;

        PlayLogFrame *nameFrame = asdTMTexTableEntryAt(PLAYLOG_FONT_TABLE, 0x13);
        char text[64];
        textFormatBuffer(text, "%s", entry->name);
        textDrawString(2, PLAYLOG_NAME_COLOR, text, (f32)(nameFrame->x + frame->x + x), (f32)(nameFrame->y + frame->y));

        PlayLogFrame *valueFrame = asdTMTexTableEntryAt(PLAYLOG_FONT_TABLE, 0x14);
        char first[16];
        char second[28];
        if (entry->kind != 1) {
            u32 value = log->values[*(s16 *)((u8 *)log + PLAYLOG_IDS_OFFSET + (FUN_0029efc0(log->list) + row) * 2)];
            if (entry->unit[0] != '0') {
                FUN_002907c4(first, value);
                textFormatBuffer(text, "%s\x81@%s", first, entry->unit);
            } else {
                FUN_002907c4(first, value);
                textFormatBuffer(text, "%s", first);
            }
        } else {
            u32 seconds = log->values[*(s16 *)((u8 *)log + PLAYLOG_IDS_OFFSET + (FUN_0029efc0(log->list) + row) * 2)];
            u32 rest = seconds % PLAYLOG_SECONDS_PER_HOUR;
            FUN_002907c4(first, seconds / PLAYLOG_SECONDS_PER_HOUR);
            FUN_002907c4(second, rest / 60);
            textFormatBuffer(text, "%s\x82g\x81@%s\x82l", first, second);
        }
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(2, PLAYLOG_VALUE_COLOR, text,
                     (f32)(frame->x + x + (valueFrame->x + *valueFrame->size - width)),
                     (f32)(frame->y + valueFrame->y));
    }
}

} /* extern "C" */
