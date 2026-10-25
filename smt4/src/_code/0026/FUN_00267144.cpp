#include "addon/PackageSelection.h"
#include "util/FUN_00267144.h"

extern "C" {

extern void *g_aocSystem;
void *dataTableGet(int table, int section);
u32 FUN_0025bed8(void *aocSystem, s32 kind, u32 tableIndex);
PackageIndexedRecord *packageFindIndexedRecord(void *aocSystem, u32 index);

// Finds record `index` of the base type-40 table, continuing into the add-on packages' tables.
void *FUN_00267144(u32 index)
{
    void *section = dataTableGet(0x32, 0);
    PackageIndexedRecord *entries = (PackageIndexedRecord *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x28, 0) + count) {
        return packageFindIndexedRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
