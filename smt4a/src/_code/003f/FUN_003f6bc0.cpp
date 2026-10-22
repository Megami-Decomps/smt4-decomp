/* NON_MATCHING: index load scheduled between the two opening stores (retail after both); first text width call reuses the &text register instead of reloading [r4, #0x5d8] */
#include "gamedata/DataTable.h"

extern "C" {

typedef struct MessageEntry {
    u16 message;   /* 0x00 */
    u16 flags;     /* 0x02: bit 0 marks the message */
} MessageEntry;

typedef struct MessageWindow {
    u8 unk000[4];
    s32 index;          /* 0x004 */
    u32 message;        /* 0x008 */
    u8 marked;          /* 0x00C */
    u8 unk00D[3];
    void *tableFile;    /* 0x010 */
    u8 unk014[0x14];
    void *messageFile;  /* 0x028 */
    u8 unk02C[0x24];
    u32 unk050;         /* 0x050 */
    u8 unk054[0x68];
    u8 cursor[0x64];    /* 0x0BC */
    u8 unk120;          /* 0x120 */
    u8 unk121[7];
    s32 offsetX;        /* 0x128 */
    u8 unk12C[0x4AC];
    void *text;         /* 0x5D8 */
    s32 textWidth;      /* 0x5DC */
} MessageWindow;

void *dataTableFileGetTable(void *file, s32 section);
void fileSectionGetData(void *file, u32 index, s32 arg);
void asdTextDrawDirectoryEntry(void *text, s32 a1, s32 color, s32 a3, s32 a4, void *file, u32 index);
s32 FUN_001688c4(void *text);
void FUN_00203b40(void *cursor, s32 x, s32 a2, s32 a3, s32 a4, s32 a5);
void flagsSetOrClearBit(void *flags, s32 set);

/* Loads the window's message for its current index and lays the text and cursor out. */
void FUN_003f6bc0(MessageWindow *window)
{
    s32 index;
    void *table;
    MessageEntry *entries;
    MessageEntry *entry;
    s32 count;
    u32 message;

    window->unk120 = 0;
    window->offsetX = 0;
    index = window->index;
    table = dataTableFileGetTable(window->tableFile, 0);
    entries = (MessageEntry *)dataTableGetEntries(table);
    count = dataTableGetCount(table);
    entry = index < count ? &entries[index] : NULL;
    if (entry == NULL) {
        window->message = 0;
        window->marked = 0;
    } else {
        window->message = entry->message;
        window->marked = entry->flags & 1;
    }
    message = window->message;
    fileSectionGetData(window->messageFile, message, 0);
    asdTextDrawDirectoryEntry(window->text, 3, -1, 0, 3, window->messageFile, message);
    window->textWidth = FUN_001688c4(window->text);
    FUN_00203b40(window->cursor, window->offsetX + FUN_001688c4(window->text), 8, 1, 0, 1);
    flagsSetOrClearBit(window->cursor, 0);
    window->unk050 = 0;
}

} /* extern "C" */
