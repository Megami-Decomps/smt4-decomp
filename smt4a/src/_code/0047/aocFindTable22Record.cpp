#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

namespace {
struct ContentTableRecord {
    s16 id;
    u8 data[28];
};
}

extern "C" {
void* dataTableFileGetTable(void* file, s32 index);

u8* aocFindTable22Record(AocSystemA* system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage* package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry* directory = packageEntryGetDirectory(package);
            const u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].kind == 0x22 && package->files[fileIndex].available) {
                    void* table = dataTableFileGetTable(package->files[fileIndex].data, 0);
                    ContentTableRecord* records = static_cast<ContentTableRecord*>(dataTableGetEntries(table));
                    const s32 count = static_cast<s32>(dataTableGetCount(table));
                    for (s32 recordIndex = 0; recordIndex < count; ++recordIndex) {
                        if (records[recordIndex].id == id) {
                            return records[recordIndex].data;
                        }
                    }
                }
            }
        }
    }
    return NULL;
}
} // extern "C"
