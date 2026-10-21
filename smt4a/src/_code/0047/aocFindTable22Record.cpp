#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

namespace {
struct ContentPackageFile {
    void* tableFile;
    u8 unk04[8];
    u8 enabled;
    u8 unk0d[3];
};
struct ContentPackage {
    u8 unk00[0x45];
    u8 enabled;
    u8 unk46[2];
    void* directoryTable;
    ContentPackageFile* files;
};
struct ContentDirectoryEntry {
    u8 type;
    u8 unk01[0x3f];
};
struct ContentTableRecord {
    s16 id;
    u8 data[28];
};
union ContentPackageSystem {
    AocSystemA system;
    struct {
        u8 unk000[0x310];
        s32 count;
        u32 unk314;
        ContentPackage* entries;
    } packages;
};
}

extern "C" {
u32 FUN_001b315c(ContentPackage* package);
ContentDirectoryEntry* FUN_001b31ac(ContentPackage* package);
u32 FUN_001b31e0(ContentPackage* package);
void* dataTableFileGetTable(void* file, s32 index);

u8* aocFindTable22Record(AocSystemA* system, s32 id)
{
    ContentPackageSystem* owner = reinterpret_cast<ContentPackageSystem*>(system);
    for (s32 packageIndex = 0; packageIndex < owner->packages.count; ++packageIndex) {
        ContentPackage* package = &owner->packages.entries[packageIndex];
        if (FUN_001b315c(package)) {
            ContentDirectoryEntry* directory = FUN_001b31ac(package);
            const u32 fileCount = FUN_001b31e0(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].type == 0x22 && package->files[fileIndex].enabled) {
                    void* table = dataTableFileGetTable(package->files[fileIndex].tableFile, 0);
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
