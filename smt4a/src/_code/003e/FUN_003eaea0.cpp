#include "gamedata/DataTable.h"

struct SignedTablePair {
    s16 key;   // 0x00
    s16 value; // 0x02
};

// Find the signed value for a key in section0x4d/1; the first ABI parameter is unused.
extern "C" s32 FUN_003eaea0(u32, s32 key)
{
    void* section = dataTableGet(0x4d, 1);
    SignedTablePair* entry = (SignedTablePair*)dataTableGetEntries(section);
    s32 count = (s32)dataTableGetCount(section);
    s32 result = 0;
    for (s32 i = 0; i < count; ++i, ++entry) {
        if (entry->key == key) {
            result = entry->value;
            break;
        }
    }
    return result;
}
