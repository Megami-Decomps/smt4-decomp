/* NON_MATCHING: retail hoists the null result into R9; count comparison operands and call-register allocation differ. */
#include "gamedata/DataTable.h"
#include "gamedata/Table48Record.h"
#include "addon/aocMain.h"
extern "C" {
extern AocSystemA *g_aocSystem;
u32 FUN_0046c35c(AocSystemA *system, s32 table, s32 section);
Table48Record *FUN_0046ea50(AocSystemA *system, u32 index);

static __inline Table48Record *table48GetCombinedEntry(u32 index)
{
    DataTableView<Table48Record> table(0x30, 0);
    if (index < table.count)
        return &table.entries[index];
    u32 extraCount = FUN_0046c35c(g_aocSystem, 0x27, 0);
    if (index < table.count + extraCount)
        return FUN_0046ea50(g_aocSystem, index - table.count);
    return NULL;
}

/* Find an ID in the base table followed by its downloadable-content extension. */
s32 FUN_003ae4d0(s32 id)
{
    for (s32 index = 0;
         index < static_cast<s32>(dataTableGetCount(dataTableGet(0x30, 0)) + FUN_0046c35c(g_aocSystem, 0x27, 0));
         ++index) {
        Table48Record *entry = table48GetCombinedEntry(index);
        if (entry->id != -1 && entry->id == id)
            return index;
    }
    return -1;
}
}
