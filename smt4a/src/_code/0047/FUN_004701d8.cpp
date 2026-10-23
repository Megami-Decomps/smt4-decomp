/* NON_MATCHING: grouped package loading restored; count test, stack-buffer scheduling and destination-slot addressing differ. */
#include "gamedata/GroupedFileTables.h"

struct AocDisplay;
extern "C" {
extern AocDisplay *g_aocDisplay;
extern const char DAT_005265ac[];
void sysMemClear(void *memory, u32 bytes);
void *rt_memcpy_w(void *destination, const void *source, u32 bytes);
void textFormatBuffer(char *destination, const char *format, ...);
void *FUN_001b2ebc(AocDisplay *display, const char *path, s32 option,
                   void *size, s32 enabled, s32 alignment, s32 flags);
s32 FUN_001b315c(FileTableGroup *group);
FileTableKindRecord *FUN_001b31ac(FileTableGroup *group);
u32 FUN_001b31e0(FileTableGroup *group);

// Open matching package files into the caller's slots and mark the owner's request slots.
void FUN_004701d8(GroupedFileTables *owner, s32 kind, s32 capacity, FileTableSlot *output)
{
    struct LoadOwnerView {
        GroupedFileTables tables;
        u8 padding[0x130];
        FileTableSlot *requests;
    };
    struct DirectoryGroupView {
        u8 prefix[0x24];
        char directory[0x28];
    };
    char path[0x80];
    sysMemClear(path, sizeof(path));
    s32 outputIndex = 0;
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (!FUN_001b315c(group))
            continue;
        FileTableKindRecord *records = FUN_001b31ac(group);
        u32 count = FUN_001b31e0(group);
        if (count == 0)
            continue;
        const char *directory = reinterpret_cast<const DirectoryGroupView *>(group)->directory;
        u32 index = 0;
        do {
            FileTableKindRecord *record = &records[index];
            if (record->kind == kind) {
                if (outputIndex >= capacity || output == NULL)
                    return;
                FileTableSlot *slot = &output[outputIndex];
                rt_memcpy_w(slot, &group->slots[index], 0xE);
                textFormatBuffer(path, DAT_005265ac, directory, reinterpret_cast<const char *>(record->unk01));
                slot->file = FUN_001b2ebc(g_aocDisplay, path, 0, &slot->unk04[4], 1, 0x80, 0);
                slot->enabled = 1;
                reinterpret_cast<LoadOwnerView *>(owner)->requests[outputIndex++].unk0D[0] = 1;
            }
            ++index;
        } while (index < count);
    }
}
}
