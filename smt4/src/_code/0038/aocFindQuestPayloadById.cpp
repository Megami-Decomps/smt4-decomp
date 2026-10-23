#include "addon/AocPackage.h"
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 FUN_002ac12c(AocPackage *package);
AocPackageFileDescription *FUN_002ac0f8(AocPackage *package);
u32 FUN_002ac0c4(AocPackage *package);
void *dataTableFileGetTable(void *file, u32 section);

/* Finds a quest payload by id in the quest tables of the active add-on packages. */
void *aocFindQuestPayloadById(AocSystem *system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_002ac12c(package) != 0) {
            AocPackageFileDescription *descriptions = FUN_002ac0f8(package);
            u32 fileCount = FUN_002ac0c4(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (descriptions[fileIndex].kind == 27) {
                    void *table = dataTableFileGetTable(package->fileTable.files[fileIndex].data, 0);
                    QuestRecord *records = (QuestRecord *)dataTableGetEntries(table);
                    s32 count = dataTableGetCount(table);
                    for (s32 index = 0; index < count; ++index) {
                        if (records[index].id == id) {
                            return records[index].data;
                        }
                    }
                }
            }
        }
    }
    return NULL;
}
}
