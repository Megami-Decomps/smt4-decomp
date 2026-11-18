#include "font/TextLayoutApi.h"
/* NON_MATCHING: the selection store is scheduled earlier, enabling saved-register reuse and a 12-byte instead of 16-byte frame; candidate -O2. */
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "camp/Unite/UniteWork.h"
#include "addon/AocSystem.h"
#include "status/StatusDown.h"

extern "C" {
void buttonHelpSetPreset(u32 preset);
void *fileSlotGetBuffer(u32 slot);
RelativeDirectory *dataArchiveSetFindFileWithEntry(AocSystem *system, s32 entry);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
                  RelativeDirectory *directory, u32 index);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 rows, s32 columns,
                  s32 wrap, s32 updateColor);
void flagsSetOrClearBit(u32 *flags, s32 set);

void statusDownSetSelectedEntryDescription(s32 entry)
{
    StatusDownState *screen = g_statusDown;
    if (screen->selectedEntry < 0 && entry >= 0 && screen->tab == 1) {
        s32 mode = FUN_0029ac94();
        u32 preset;
        if (mode == 13 || mode == 6) {
            preset = 0x31;
        } else if (mode == 8 || mode == 9 || mode == 11 || mode == 7) {
            preset = 0x60;
        } else {
            preset = mode == 2 ? 0x27 : 0x2b;
        }
        buttonHelpSetPreset(preset);
    }
    screen->selectedEntry = (s16)entry;
    if (entry < 0) {
        RelativeDirectory *directory = (RelativeDirectory *)fileSlotGetBuffer(0x40);
        asdTextDrawDirectoryEntry(screen->text, 3, -1, 0, 3, directory, 0);
    } else {
        RelativeDirectory *directory = dataArchiveSetFindFileWithEntry(g_aocSystem, entry);
        if (directory == NULL) {
            directory = (RelativeDirectory *)fileSlotGetBuffer(0x40);
        }
        asdTextDrawDirectoryEntry(screen->text, 3, -1, 0, 3, directory, entry);
    }
    u32 count = asdTextGetFinalLineIndex(screen->text);
    gridNavigationConfigure(&screen->grid, count, 8, 1, 0, 1);
    flagsSetOrClearBit(&screen->grid.rows.flags, 0);
    screen->listActive = 1;
}
}
