/* NON_MATCHING: retail re-reads the count through a separate pointer after storing it (armcc forwards the stored value); everything else matches. */
#include "addon/aocMain.h"
#include "shard/W8X15_PackageList.h"
#include "gamedata/TableEntryCache.h"
#include "addon/AocSystemA.h"

extern "C" {
void asdOperatorDeleteB(void *items);
void *asdOperatorNewE(u32 size);
s32 asdFsIsSdCardDetected();
u32 objGetFlagBit16(AocMain *main);
void *__aeabi_vec_ctor_nocookie_nodtor(void *array, void (*construct)(void *), u32 size, u32 count);
void aocQueuePackageFilesByKind(AocSystemA *system, s32 kind, s32 capacity, AocPackageFile *output);

// Rebuild the package file list of one kind when the SD card and add-on system are available.
static __inline void rebuildFileList(AocSystemA *system, s32 kind)
{
    if (system->items != NULL) {
        asdOperatorDeleteB(system->items);
        system->items = NULL;
    }
    system->itemCount = 0;
    s32 *itemCount = &system->itemCount;
    if (asdFsIsSdCardDetected()) {
        if (objGetFlagBit16(g_aocMain)) {
            s32 count = aocCountPackageItemsOfType(system, kind);
            system->itemCount = count;
            if (*itemCount > 0) {
                void *items = asdOperatorNewE(count * sizeof(AocPackageFile));
                if (items != NULL)
                    items = __aeabi_vec_ctor_nocookie_nodtor(items, reinterpret_cast<void (*)(void *)>(entryStateClear), sizeof(AocPackageFile), *itemCount);
                system->items = static_cast<AocPackageFile *>(items);
                aocQueuePackageFilesByKind(system, kind, system->itemCount, system->items);
            }
        }
    } else {
        g_aocMain->flags &= ~0x10000u;
    }
}

// Rebuild the type-0x34 package file list.
void FUN_00471d94(AocSystemA *system)
{
    rebuildFileList(system, 0x34);
}
}
