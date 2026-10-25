#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"
#include "shard/aocCountPackageItemsOfType.h"

extern "C" {

/* One downloadable package record (0x50 bytes). */
typedef struct AocPackageRecord {
    u8 unk00[0x50];
} AocPackageRecord;

/* One item of a package (0x40 bytes); the first byte is its type. */
typedef struct AocPackageItem {
    s8 type;
    u8 unk01[0x3F];
} AocPackageItem;

s32 asdFsIsSdCardDetected(void);
s32 objGetFlagBit16(AocMainA *main);
s32 FUN_001b315c(AocPackageRecord *package);
AocPackageItem *FUN_001b31ac(AocPackageRecord *package);
u32 FUN_001b31e0(AocPackageRecord *package);

/* Counts the items of the given type across all valid packages; without an SD card clears AOC flag 0x10000 and returns 0. */
s32 aocCountPackageItemsOfType(AocSystemA *system, s32 type)
{
    s32 count;
    s32 i;

    if (!asdFsIsSdCardDetected()) {
        g_aocMain->flags &= ~0x10000;
        return 0;
    }
    if (!objGetFlagBit16(g_aocMain)) {
        return 0;
    }
    count = 0;
    for (i = 0; i < system->packages.count; i++) {
        AocPackageRecord *package = &((AocPackageRecord *)system->packages.entries)[i];

        if (FUN_001b315c(package)) {
            AocPackageItem *items = FUN_001b31ac(package);
            u32 itemCount = FUN_001b31e0(package);
            u32 j;

            for (j = 0; j < itemCount; j++) {
                if (items[j].type == type) {
                    count++;
                }
            }
        }
    }
    return count;
}

} /* extern "C" */
