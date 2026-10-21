#include "addon/aocMain.h"
#include "shard/W4_Match6_DataSet.h"
#include "gamedata/DataTable.h"

struct Table02Sub2Entry;
struct AocSpriteTemplateKeyView {
    u8 unk00[6];
    u16 key;
    u8 unk08[0x14];
};
extern "C" {
s32 FUN_002ac12c(DataEntry *entry);
const DataRow *FUN_002ac0f8(DataEntry *entry);
u32 FUN_002ac0c4(DataEntry *entry);
void *dataTableFileGetTable(void *file, u32 section);

Table02Sub2Entry *aocFindSpriteTemplateByKey(AocSystem *system, u32 key)
{
    for (s32 package = 0; package < system->packages.count; ++package) {
        DataEntry *entry = &((DataEntry *)system->packages.entries)[package];
        if (!FUN_002ac12c(entry)) {
            continue;
        }
        const DataRow *rows = FUN_002ac0f8(entry);
        u32 rowCount = FUN_002ac0c4(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            if (rows[row].type == 0x1b) {
                void *section = dataTableFileGetTable((void *)entry->files[row].file, 0);
                AocSpriteTemplateKeyView *records =
                    (AocSpriteTemplateKeyView *)dataTableGetEntries(section);
                s32 count = (s32)dataTableGetCount(section);
                for (s32 index = 0; index < count; ++index) {
                    if (records[index].key == key) {
                        return (Table02Sub2Entry *)&records[index];
                    }
                }
            }
        }
    }
    return NULL;
}
}
