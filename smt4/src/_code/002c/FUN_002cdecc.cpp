#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "shard/FUN_002cdecc.h"

extern "C" Table25Record* FUN_002cdecc(s32 id)
{
    void* section = dataTableGet(0x25, 0);
    Table25Record* record = static_cast<Table25Record*>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    for (u32 index = 0; index < count; ++index, ++record) {
        if (record->id == id) {
            return record;
        }
    }
    return NULL;
}
