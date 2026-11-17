#include "addon/aocMain.h"
#include "gamedata/EncountData.h"
#include "addon/AocSystem.h"

struct AocSpriteTemplateKeyView {
    u8 unk00[6];
    u16 key;
    u8 unk08[0x14];
};
extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

EncountGroupRecord *aocFindSpriteTemplateByKey(AocSystem *system, u32 key)
{
    for (s32 package = 0; package < system->packageCount; ++package) {
        AocPackage *entry = &system->packages[package];
        if (!packageEntryIsLoaded(entry)) {
            continue;
        }
        const AocPackageDirectoryEntry *rows = packageEntryGetDirectory(entry);
        u32 rowCount = packageEntryGetFileCount(entry);
        for (u32 row = 0; row < rowCount; ++row) {
            if (rows[row].kind == 0x1b) {
                void *section = dataTableFileGetTable(entry->files[row].data, 0);
                AocSpriteTemplateKeyView *records =
                    (AocSpriteTemplateKeyView *)dataTableGetEntries(section);
                s32 count = (s32)dataTableGetCount(section);
                for (s32 index = 0; index < count; ++index) {
                    if (records[index].key == key) {
                        return (EncountGroupRecord *)&records[index];
                    }
                }
            }
        }
    }
    return NULL;
}
}
