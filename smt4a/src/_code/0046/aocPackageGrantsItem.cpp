#include "shard/W4_Match6_DataSet.h"
#include "util/CalleeContracts.h"

/* A content row that grants an item: kinds 7 and 8 name the item id in their last word. */
struct AocItemRowView {
    s8 opcode;
    u8 unk01[0x3B];
    u32 itemId;
};

extern "C" {
extern u32 g_aocMain;
s32 objHasFlagBit16(u32 aoc);
s32 FUN_001b315c(DataEntry *entry);
const DataRow *FUN_001b31ac(DataEntry *entry);
u32 FUN_001b31e0(DataEntry *entry);

// Report whether a mounted content package grants the item (optionally only while content is available).
s32 aocPackageGrantsItem(DataSet *system, u32 itemId, s32 checkAvailable)
{
    if (checkAvailable && !objHasFlagBit16(g_aocMain)) {
        return 0;
    }
    for (s32 package = 0; package < system->entryCount; ++package) {
        DataEntry *entry = &system->entries[package];
        if (!FUN_001b315c(entry)) {
            continue;
        }
        const AocItemRowView *rows = (const AocItemRowView *)FUN_001b31ac(entry);
        u32 rowCount = FUN_001b31e0(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            bool grants = rows[row].opcode == 7 || rows[row].opcode == 8;
            if (grants) {
                grants = rows[row].itemId == itemId;
            }
            if (grants) {
                return 1;
            }
        }
    }
    return 0;
}
}
