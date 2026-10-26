#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

typedef struct Entry002670cc {
    /* 0x00 */ u8 data[0x3c];
} Entry002670cc;

typedef struct AocSystem002670cc AocSystem002670cc;

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);
s32 FUN_0025bed8(AocSystem002670cc *aoc, s32 kind, s32 slot);
Entry002670cc *FUN_00389af4(AocSystem002670cc *aoc, u32 index);

extern AocSystem002670cc *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x32's section 1, continuing into the add-on content's entries (NULL past the end). */
Entry002670cc *contentEntryGetE(u32 index)
{
    void *table = dataTableGet(0x32, 1);
    Entry002670cc *entries = reinterpret_cast<Entry002670cc *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x28, 1) + count) {
        return FUN_00389af4(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
