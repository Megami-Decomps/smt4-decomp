#include "shard/Shard0041.h"
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
PartyBlockB* gameFlagBlockGet(void);
u32 libc_strlen(const char* text);

u32 partyEntryIsAvailable(u32 index)
{
    const ItemDataRecord* record = FUN_001ad9b4(index);
    u32 length = libc_strlen(record->availability.token);
    if (length <= 1 && record->availability.token[0] == '0') {
        return 0;
    }
    if (record->availability.requiresEntryFlag == 0) {
        return 1;
    }
    return (gameFlagBlockGet()->e[index].bits & 4) >> 2;
}

} /* extern "C" */
