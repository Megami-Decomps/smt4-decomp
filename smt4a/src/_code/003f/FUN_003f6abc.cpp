/* NON_MATCHING: first text-count load uses cached text-member address rather than window base. */
#include "ui/DirectoryEntryWindow.h"
#include "gamedata/FlagsB.h"
extern "C" {
void *fileSectionGetData(void *file, u32 id, s32 section);
s32 FUN_001688c4(void *text);
void FUN_00203b40(void *control, s32 count, s32 mode, s32 enabled, s32 initial, s32 step);
int asdTextDrawDirectoryEntry(void *text, s32 kind, u32 color, s32 alignment, s32 mode, void *file, u32 id);
void flagsSetOrClearBit(void *control, s32 value);

// Populate a directory entry and consume its pending alternate-mode flag.
void FUN_003f6abc(DirectoryEntryWindow *window)
{
    u16 id = window->entry->id;
    window->active = 0;
    window->lineOffset = 0;
    u16 textId = window->entry->id;
    fileSectionGetData(window->file, textId, 0);
    asdTextDrawDirectoryEntry(window->text, 3, 0xFFFFFFFF, 0, 3, window->file, textId);
    window->lineCount = FUN_001688c4(window->text);
    FUN_00203b40(window->textControl, window->lineOffset + FUN_001688c4(window->text), 7, 1, 0, 1);
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
}
