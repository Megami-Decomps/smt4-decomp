#include "gamedata/DataTable.h"

struct Table20Record {
    u8 data[0x30];
};
struct AocSystem;

extern "C" {
extern AocSystem* g_aocSystem;
Table20Record* FUN_0046e800(AocSystem* system, u32 index);

// Looks up an addon record, falling back to bounds-checked table 0x20 section one.
Table20Record* dataTable20FindAddonRecord(u32 index)
{
    Table20Record* record = FUN_0046e800(g_aocSystem, index);
    if (record == NULL) {
        void* section = dataTableGet(0x20, 1);
        Table20Record* entries = static_cast<Table20Record*>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);
        if (index >= count) {
            return NULL;
        }
        return &entries[index];
    }
    return record;
}
}
