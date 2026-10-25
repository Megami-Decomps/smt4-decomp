/* NON_MATCHING: the selection store is scheduled earlier, enabling saved-register reuse and a 12-byte instead of 16-byte frame; candidate -O2. */
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W5_W5Match2_UniteWork.h"

struct CampEquipmentGrid;
struct StatusDownSelectionWorkIV {
    u8 unk0000[0x3fc];
    u8 mode;
    u8 unk03fd[0x13];
    u8 dirty;
    u8 unk0411[0x6d];
    s16 selectedEntry;
    u8 unk0480[0x1e20];
    AsdText *text;
    u8 unk22a4[4];
    union {
        u8 grid[0x64];
        u32 gridFlags;
    };
};
extern "C" {
extern StatusDownSelectionWorkIV *g_statusDown;
extern AocSystem *g_aocSystem;
void buttonHelpSetPreset(u32 preset);
void *fileSlotGetBuffer(u32 slot);
RelativeDirectory *FUN_00389084(AocSystem *system, s32 entry);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
                  RelativeDirectory *directory, u32 index);
u32 FUN_002b753c(AsdText *text);
void FUN_0029f848(CampEquipmentGrid *grid, s32 count, s32 rows, s32 columns,
                  s32 wrap, s32 updateColor);
void flagsSetOrClearBit(u32 *flags, s32 set);

void statusDownSetSelectedEntryDescription(s32 entry)
{
    StatusDownSelectionWorkIV *screen = g_statusDown;
    if (screen->selectedEntry < 0 && entry >= 0 && screen->mode == 1) {
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
        RelativeDirectory *directory = FUN_00389084(g_aocSystem, entry);
        if (directory == NULL) {
            directory = (RelativeDirectory *)fileSlotGetBuffer(0x40);
        }
        asdTextDrawDirectoryEntry(screen->text, 3, -1, 0, 3, directory, entry);
    }
    u32 count = FUN_002b753c(screen->text);
    FUN_0029f848((CampEquipmentGrid *)screen->grid, count, 8, 1, 0, 1);
    flagsSetOrClearBit(&screen->gridFlags, 0);
    screen->dirty = 1;
}
}
