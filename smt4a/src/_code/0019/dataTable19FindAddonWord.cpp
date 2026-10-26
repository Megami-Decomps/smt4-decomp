#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_Smt4a.h"

struct TableRequest {
    u8 unk00[0x26]; // 0x00
    u8 section;      // 0x26
};
struct WordTable {
    u32 count;      // 0x00
};
struct AocSystem;

extern "C" {
extern AocSystem* g_aocSystem;
u32* FUN_001a6738(AocSystem* system, TableRequest* request, u32 index);

// Looks up a one-based record in addon data, then falls back to its table-0x19 section.
u32* dataTable19FindAddonWord(TableRequest* request, u32 index)
{
    if (request->section == 0) {
        return NULL;
    }
    u32* record = FUN_001a6738(g_aocSystem, request, index);
    if (record == NULL) {
        WordTable* table = static_cast<WordTable*>(dataTableGetEntries(dataTableGet(0x19, request->section)));
        u32* entries = reinterpret_cast<u32*>(table + 1);
        record = entries + index - 1;
    }
    return record;
}
}
