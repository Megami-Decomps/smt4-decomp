#include "gamedata/DataTable.h"
#include "gamedata/Table02Record.h"
#include "shard/W6_W6Match8_BattleDebug.h"

// Returns the requested occurrence of a table record matching both byte keys.
extern "C" Table02Record* FUN_003bc0ac(u32 keyA, u32 keyB, s32 occurrence)
{
    void* section = dataTableGet(2, 0);
    Table02Record* records = (Table02Record*)dataTableGetEntries(section);
    s32 count = dataTableGetCount(section);
    s32 match = 0;
    for (s32 index = 0; index < count; ++index) {
        if (records[index].keyA == keyA && records[index].keyB == keyB) {
            if (match == occurrence) {
                return &records[index];
            }
            ++match;
        }
    }
    return NULL;
}
