/* NON_MATCHING: add-on file-list rebuilding has not yet been matched. */
#include "addon/aocMain.h"
#include "shard/W8X15_PackageList.h"
#include "gamedata/TableEntryCache.h"
#include "shard/aocCountPackageItemsOfType.h"

struct AocPackageItemList : AocSystemA {
    u8 unk394[0xb4];
    s32 itemCount; // 0x448
    u32 unk44c;
    PackageFileRef *items; // 0x450
};
typedef char AocPackageItemListOffsets[
    offsetof(AocPackageItemList, itemCount) == 0x448 &&
    offsetof(AocPackageItemList, items) == 0x450 ? 1 : -1];

extern "C" {
extern AocMain *g_aocMain;
void asdOperatorDeleteB(void *items);
void *asdOperatorNewE(u32 size);
s32 asdFsIsSdCardDetected();
u32 objGetFlagBit16(AocMain *main);
void entryStateClear(EntryState *entry);
void *__aeabi_vec_ctor_nocookie_nodtor(void *array, void (*construct)(void *), u32 size, u32 count);
void FUN_00471468(AocSystemA *system, s32 kind, s32 capacity, PackageFileRef *output);

// Rebuild the type-0x34 package file list when the SD card and add-on system are available.
void FUN_00471d94(AocPackageItemList *system)
{
    if (system->items != NULL) {
        asdOperatorDeleteB(system->items);
        system->items = NULL;
    }
    system->itemCount = 0;
    if (asdFsIsSdCardDetected()) {
        if (objGetFlagBit16(g_aocMain)) {
            system->itemCount = aocCountPackageItemsOfType(system, 0x34);
            s32 count = system->itemCount;
            if (count > 0) {
                void *items = asdOperatorNewE(count * sizeof(PackageFileRef));
                if (items != NULL)
                    items = __aeabi_vec_ctor_nocookie_nodtor(items, reinterpret_cast<void (*)(void *)>(entryStateClear), sizeof(PackageFileRef), count);
                system->items = static_cast<PackageFileRef *>(items);
                FUN_00471468(system, 0x34, system->itemCount, system->items);
            }
        }
    } else {
        g_aocMain->flags &= ~0x10000u;
    }
}
}
