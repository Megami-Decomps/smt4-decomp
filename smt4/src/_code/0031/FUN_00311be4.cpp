/* NON_MATCHING: weight summation uses an incremented pointer and LDM rather than retail's indexed loads. */
#include "gamedata/DataTable.h"

extern "C" u32 randNextInRange(u32 maximum);

/* Choose a low-byte id using the upper twenty-four bits of each table word as its weight. */
extern "C" u32 FUN_00311be4(void)
{
    u32 result = 0;
    void *table = dataTableGet(5, 7);
    const u32 *entries = static_cast<const u32 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    u32 total = 0;
    for (u32 index = 0; index < count; ++index) {
        total += entries[index] >> 8;
    }
    entries = static_cast<const u32 *>(dataTableGetEntries(table));
    u32 choice = randNextInRange((total - 1) & 0xFFFF);
    u32 accumulated = 0;
    for (u32 index = 0; index < count; ++index, ++entries) {
        accumulated += *entries >> 8;
        if (choice < accumulated) {
            result = *entries & 0xFF;
            break;
        }
    }
    return result;
}
