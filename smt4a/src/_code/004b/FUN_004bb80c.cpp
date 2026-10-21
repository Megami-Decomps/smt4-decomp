#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct Table02Record {
    u8 data[0x28];
};

extern "C" {
extern AocSystemA* g_aocSystem;
Table02Record* FUN_0046e6b8(AocSystemA* system, u32 index);

Table02Record* FUN_004bb80c(s32 index)
{
    void* section = dataTableGet(2, 2);
    Table02Record* records = static_cast<Table02Record*>(dataTableGetEntries(section));
    if (index < 0 || static_cast<u32>(index) >= dataTableGetCount(section)) {
        return records;
    }
    Table02Record* record = FUN_0046e6b8(g_aocSystem, index);
    if (record == NULL) {
        record = &records[index];
    }
    return record;
}
}
