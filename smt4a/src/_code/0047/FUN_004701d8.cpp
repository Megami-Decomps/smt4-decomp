/* NON_MATCHING: unsigned count guard restored; path setup, directory preheader scheduling and destination-slot addressing differ. */
#include "addon/AocSystemA.h"
#include "gamedata/TableEntryCache.h"

struct AocDisplay;
extern "C" {
extern AocDisplay *g_aocDisplay;
extern const char DAT_005265ac[];
void sysMemClear(void *memory, u32 bytes);
void *__aeabi_memcpy4(void *destination, const void *source, u32 bytes);
void textFormatBuffer(char *destination, const char *format, ...);
void *FUN_001b2ebc(AocDisplay *display, const char *path, s32 option,
                   void *size, s32 enabled, s32 alignment, s32 flags);

// Open matching package files into the caller's slots and mark the owner's request slots.
void FUN_004701d8(AocSystemA *owner, s32 kind, s32 capacity, AocPackageFile *output)
{
    char path[0x80];
    sysMemClear(path, sizeof(path));
    s32 outputIndex = 0;
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (!packageEntryIsLoaded(group))
            continue;
        AocPackageDirectoryEntry *records = packageEntryGetDirectory(group);
        u32 count = packageEntryGetFileCount(group);
        const char *directory = group->mountName;
        for (u32 index = 0; index < count; ++index) {
            AocPackageDirectoryEntry *record = &records[index];
            if (record->kind == kind) {
                if (outputIndex >= capacity || output == NULL)
                    return;
                AocPackageFile *slot = &output[outputIndex];
                __aeabi_memcpy4(slot, &group->files[index], 0xE);
                textFormatBuffer(path, DAT_005265ac, directory, record->name);
                slot->data = FUN_001b2ebc(g_aocDisplay, path, 0, &slot->result, 1, 0x80, 0);
                slot->available = 1;
                owner->states[outputIndex++].requested = 1;
            }
        }
    }
}
}
