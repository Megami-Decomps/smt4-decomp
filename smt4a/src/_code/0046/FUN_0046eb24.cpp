/* NON_MATCHING: retail package-count switch uses a different dispatch layout. */
#include "shard/W8X15_PackageList.h"
#include "util/dataTableFileGetTable.h"

extern "C" {
s32 FUN_001b315c(PackageEntry *);
char (*FUN_001b31ac(PackageEntry *))[0x40];
u32 FUN_001b31e0(PackageEntry *);
}

/* Count records in a section of all loaded type-six package files. */
extern "C" s32 FUN_0046eb24(PackageList *packages, u32 section)
{
    s32 total = 0;
    for (s32 i = 0; i < packages->count; ++i) {
        PackageEntry *package = &packages->entries[i];
        if (FUN_001b315c(package) != 0) {
            PackageRecord *records = (PackageRecord *)FUN_001b31ac(package);
            u32 count = FUN_001b31e0(package);
            for (u32 j = 0; j < count; ++j) {
                if (records[j].kind == 6 && package->files[j].state.loaded != 0) {
                    total += dataTableGetCount(dataTableFileGetTable(package->files[j].fileId, section));
                }
            }
        }
    }
    return total;
}
