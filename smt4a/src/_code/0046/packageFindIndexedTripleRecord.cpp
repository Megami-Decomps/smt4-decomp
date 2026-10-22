#include "shard/W8X15_PackageList.h"

extern "C" {
s32 FUN_001b315c(PackageEntry *entry);
const PackageRecord *FUN_001b31ac(PackageEntry *entry);
u32 FUN_001b31e0(PackageEntry *entry);

/* Find an indexed triple-word record in the loaded packages' hash-marked tables. */
u32 *packageFindIndexedTripleRecord(PackageList *packages, s32 index)
{
    s32 skipped = 0;
    for (s32 packageIndex = 0; packageIndex < packages->count; ++packageIndex) {
        PackageEntry *package = &packages->entries[packageIndex];
        if (FUN_001b315c(package)) {
            const PackageRecord *records = FUN_001b31ac(package);
            u32 count = FUN_001b31e0(package);
            for (u32 recordIndex = 0; recordIndex < count; ++recordIndex) {
                if (records[recordIndex].kind == '#') {
                    void *table = dataTableFileGetTable(package->files[recordIndex].fileId, 0);
                    s32 tableCount = dataTableGetCount(table);
                    if (index <= tableCount + skipped) {
                        u32 (*values)[3] = reinterpret_cast<u32 (*)[3]>(dataTableGetEntries(table));
                        return values[index - skipped];
                    }
                    skipped += tableCount + skipped;
                }
            }
        }
    }
    return NULL;
}
}
