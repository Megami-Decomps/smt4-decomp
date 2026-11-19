/* NON_MATCHING: only the empty-file-list guard: retail branches on the count before forming the mount name's address (group + 0x24). */
#include <stdio.h>
#include "addon/AocSystemA.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/TableEntryCache.h"
#include <string.h>

struct AocDisplay;
static const char s_packagePathFormat[] = "%s/%s";
extern "C" {
extern AocDisplay *g_aocDisplay;
void *FUN_001b2ebc(AocDisplay *display, const char *path, s32 option,
                   void *size, s32 enabled, s32 alignment, s32 flags);

// Open matching package files into the caller's slots and mark the owner's request slots.
void aocLoadPackageFilesByKind(AocSystemA *owner, s32 kind, s32 capacity, AocPackageFile *output)
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
                memcpy(&output[outputIndex], &group->files[index], offsetof(AocPackageFile, unk0E));
                AocPackageFile *slot = &output[outputIndex];
                sprintf(path, s_packagePathFormat, directory, record->name);
                slot->data = FUN_001b2ebc(g_aocDisplay, path, 0, &slot->result, 1, 0x80, 0);
                slot->available = 1;
                owner->states[outputIndex++].requested = 1;
            }
        }
    }
}
}
