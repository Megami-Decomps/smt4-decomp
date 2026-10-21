#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_Table24Record.h"

extern "C" Table24Record* FUN_002861fc(u32 id)
{
    void* section = dataTableGet(0x24, 1);
    Table24Record* record = static_cast<Table24Record*>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    for (u32 index = 0; index < count; ++index, ++record) {
        if (record->id == id) {
            return record;
        }
    }
    return NULL;
}
