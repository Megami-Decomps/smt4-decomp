#include "gamedata/DataTable.h"
#include "ui/DirectoryWindowText.h"

extern "C" {

typedef struct MessageEntry {
    u16 message;   /* 0x00 */
    u16 flags;     /* 0x02: bit 0 marks the message */
} MessageEntry;

void *dataTableFileGetTable(void *file, s32 section);
void gridNavigationConfigure(void *cursor, s32 x, s32 a2, s32 a3, s32 a4, s32 a5);
void flagsSetOrClearBit(void *flags, s32 set);

/* Loads the window's message for its current index and lays the text and cursor out. */
void unlockLogLoadCurrentMessage(DirectoryEntryWindow *window)
{
    s32 index;
    void *table;
    MessageEntry *entries;
    MessageEntry *entry;
    s32 count;
    u32 message;

    directoryWindowResetText(window);
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
    directoryWindowLoadText(window, message);
    gridNavigationConfigure(window->textControl, window->lineOffset + statusDownScanSelectedEntryIndex((TextLine *)window->text), 8, 1, 0, 1);
    flagsSetOrClearBit(window->textControl, 0);
    window->state = 0;
}

} /* extern "C" */
