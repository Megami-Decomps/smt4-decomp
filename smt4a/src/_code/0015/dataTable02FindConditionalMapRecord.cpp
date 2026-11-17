#include "gamedata/DataTable.h"
#include "gamedata/GamePlayerData.h"

struct ConditionalMapRecordA {
    /* 0x00 */ u8 map;
    /* 0x01 */ u8 area;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 minimumLevel;  /* 0 = any level */
    /* 0x0C */ u16 unk0c;
    /* 0x0E */ u16 requiredFlag;  /* 0 = none; otherwise this game flag must be set */
    /* 0x10 */ u16 blockedFlag;   /* 0 = none; otherwise this game flag must be clear */
    /* 0x12 */ u8 unk12[0x92];
};
extern "C" {
extern void *g_aocSystem;
ConditionalMapRecordA *FUN_00176124(void *, u32, u32);
s32 gameFlagIsSet(u32);

/* Finds the record for (map, area): the add-on system's own, else the first table record whose flag
 * and level conditions hold; the table's first record if none does. */
ConditionalMapRecordA *dataTable02FindConditionalMapRecord(u32 map, u32 area)
{
    ConditionalMapRecordA *found = FUN_00176124(g_aocSystem, map, area);
    void *section;
    ConditionalMapRecordA *records;
    s32 count;
    s32 i;

    if (found != NULL) {
        return found;
    }
    section = dataTableGet(2, 0);
    records = static_cast<ConditionalMapRecordA *>(dataTableGetEntries(section));
    count = dataTableGetCount(section);
    for (i = 0; i < count; i++) {
        if (records[i].map == map && records[i].area == area
            && (records[i].requiredFlag == 0 || gameFlagIsSet(records[i].requiredFlag) != 0)
            && (records[i].blockedFlag == 0 || gameFlagIsSet(records[i].blockedFlag) == 0)) {
            u16 level = gameGetPlayerData()->level;
            if (records[i].minimumLevel == 0 || records[i].minimumLevel <= level) {
                return &records[i];
            }
        }
    }
    return records;
}
}
