#include "common.h"
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct QuestRecord {
    u16 id;           /* 0x00 */
    u8 unk02[0x0e];
};

extern "C" {
extern AocSystem *g_aocSystem;

// Prefer downloadable quest records, then search the base-game quest table.
QuestRecord *questRecordFindById(u32 id)
{
    QuestRecord *records = g_aocSystem->quests;
    if (records != NULL && g_aocSystem->questCount != 0) {
        for (u32 index = 0; index < g_aocSystem->questCount; ++index) {
            if (records[index].id == id) {
                return &records[index];
            }
        }
    }
    void *table = dataTableGet(0x1c, 2);
    records = static_cast<QuestRecord *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].id == id) {
            return &records[index];
        }
    }
    return NULL;
}
}
