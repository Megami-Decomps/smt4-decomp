#include "gamedata/EncountData.h"
#include "shard/W6_W6Match8_BattleDebug.h"

// Returns the requested occurrence of the encounter records for (map, area).
extern "C" EncountRecord *FUN_003bc0ac(u32 map, u32 area, s32 occurrence)
{
    void* section = dataTableGet(2, 0);
    EncountRecord *records = encountRecords(section);
    s32 count = dataTableGetCount(section);
    s32 match = 0;
    for (s32 index = 0; index < count; ++index) {
        if (records[index].map == map && records[index].area == area) {
            if (match == occurrence) {
                return &records[index];
            }
            ++match;
        }
    }
    return NULL;
}
