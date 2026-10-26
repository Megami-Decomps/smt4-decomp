#include "gamedata/DataTable.h"
#include "gamedata/CategoryVariantRecord.h"

extern "C" {
extern const u8 g_fileSlot17Ref[8];
extern const u8 DAT_00588fa4[8];

// Find a category/kind record with the variant selected by the corresponding lookup bank.
CategoryVariantRecord *dataTableFindCategoryVariant(u32 kind, u32 category, s32 variantIndex)
{
    void *table = dataTableGet(24, 0);
    CategoryVariantRecord *records = static_cast<CategoryVariantRecord *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    const u8 *variants;
    if (kind == 0)
        variants = DAT_00588fa4;
    else
        variants = g_fileSlot17Ref;
    u32 variant = variants[variantIndex];
    for (s32 i = 0; i < count; ++i) {
        if (records[i].category == category && records[i].kind == kind && records[i].variant == variant)
            return &records[i];
    }
    return NULL;
}
}
