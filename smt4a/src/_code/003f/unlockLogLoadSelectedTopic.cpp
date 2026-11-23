#include "ui/DirectoryEntryWindow.h"
#include "ui/DirectoryWindowText.h"
#include "gamedata/FlagsB.h"
extern "C" {
void gridNavigationConfigure(void *control, s32 count, s32 mode, s32 enabled, s32 initial, s32 step);
void flagsSetOrClearBit(void *control, s32 value);

/* Populates a directory entry and consumes its pending alternate-mode flag. */
void unlockLogLoadSelectedTopic(DirectoryEntryWindow *window)
{
    u16 id = window->entry->id;
    directoryWindowResetText(window);
    u16 textId = window->entry->id;
    directoryWindowLoadText(window, textId);
    gridNavigationConfigure(window->textControl, window->lineOffset + statusDownScanSelectedEntryIndex((TextLine *)window->text), 7, 1, 0, 1);
    flagsSetOrClearBit(window->textControl, 0);
    window->scroll = 0;
    if (!flagsBGetBit2(id))
        flagsBSetBit2(id, 1);
    window->alternateId = 0;
    if (flagsBGetBit1(id)) {
        gameFlagsSetAlternateMode(id, 0);
        u32 alternateId = window->entry->alternateId;
        if (alternateId)
            window->alternateId = alternateId;
    }
    window->state = 0;
}
} /* extern "C" */
