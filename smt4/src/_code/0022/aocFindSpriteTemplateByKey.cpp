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
s32 packageEntryIsLoaded(DataEntry *entry);
const DataRow *packageEntryGetDirectory(DataEntry *entry);
u32 packageEntryGetFileCount(DataEntry *entry);
void *dataTableFileGetTable(void *file, u32 section);

Table02Sub2Entry *aocFindSpriteTemplateByKey(AocSystem *system, u32 key)
{
    for (s32 package = 0; package < system->packages.count; ++package) {
        DataEntry *entry = &((DataEntry *)system->packages.entries)[package];
        if (!packageEntryIsLoaded(entry)) {
            continue;
        }
        const DataRow *rows = packageEntryGetDirectory(entry);
        u32 rowCount = packageEntryGetFileCount(entry);
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
