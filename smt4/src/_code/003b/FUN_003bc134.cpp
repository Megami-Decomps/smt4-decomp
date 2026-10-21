#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_Table03Record.h"

extern "C" {
extern AocSystem* g_aocSystem;
Table03Record* aocFindTable03RecordByKey(AocSystem* system, u32 index);

Table03Record* FUN_003bc134(s32 index)
{
    void* section = dataTableGet(3, 0);
    Table03Record* records = static_cast<Table03Record*>(dataTableGetEntries(section));
    if (index < 0 || static_cast<u32>(index) >= dataTableGetCount(section)) {
        return records;
    }
    Table03Record* record = aocFindTable03RecordByKey(g_aocSystem, index);
    if (record == NULL) {
        record = &records[index];
    }
    return record;
}
}
