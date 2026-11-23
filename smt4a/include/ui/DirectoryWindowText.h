#ifndef UI_DIRECTORY_WINDOW_TEXT_H
#define UI_DIRECTORY_WINDOW_TEXT_H

#include "code/Code0016_Smt4a.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "ui/DirectoryEntryWindow.h"

/* Resets the text layout before loading another entry. */
static __inline void directoryWindowResetText(DirectoryEntryWindow *window)
{
    window->active = 0;
    window->lineOffset = 0;
}

/* Loads and draws the directory entry, then records the measured text extent. */
static __inline void directoryWindowLoadText(DirectoryEntryWindow *window, u32 index)
{
    fileSectionGetData(window->file, index, NULL);
    asdTextDrawDirectoryEntry(window->text, 3, -1, 0, 3, (RelativeDirectory *)window->file, index);
    window->lineCount = statusDownScanSelectedEntryIndex((TextLine *)window->text);
}

#endif
