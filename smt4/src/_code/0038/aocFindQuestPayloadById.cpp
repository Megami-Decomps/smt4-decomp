#include "addon/AocPackage.h"
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

/* A record of a package's quest table (kind 27): an id and its payload. */
struct AocQuestPayloadRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x3C];
};

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

/* Finds a quest payload by id in the quest tables of the active add-on packages. */
void *aocFindQuestPayloadById(AocSystem *system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *descriptions = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (descriptions[fileIndex].kind == 27) {
                    void *table = dataTableFileGetTable(package->files[fileIndex].data, 0);
                    AocQuestPayloadRecord *records = (AocQuestPayloadRecord *)dataTableGetEntries(table);
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
