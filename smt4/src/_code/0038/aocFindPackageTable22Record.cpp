#include "addon/aocMain.h"
#include "shard/aocFindPackageTable22Record.h"

struct AocPackageFile {
    void *tableFile;
    u8 unk04[8];
    u8 enabled;
    u8 unk0d[3];
};
struct AocPackage {
    u8 unk00[0x45];
    u8 enabled;
    u8 unk46[2];
    void *directoryTable;
    AocPackageFile *files;
};
struct AocDirectoryEntry {
    u8 type;
    u8 unk01[0x3f];
};
struct AocTableRecord {
    s16 id;
    u8 data[24];
};

extern "C" {
s32 FUN_002ac12c(AocPackage *package);
AocDirectoryEntry *FUN_002ac0f8(AocPackage *package);
u32 FUN_002ac0c4(AocPackage *package);
void *dataTableFileGetTable(void *file, s32 index);
AocTableRecord *dataTableGetEntries(void *table);
s32 dataTableGetCount(void *table);

u8 *aocFindPackageTable22Record(AocSystem *system, s32 id)
{
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_002ac12c(package)) {
            AocDirectoryEntry *directory = FUN_002ac0f8(package);
            u32 fileCount = FUN_002ac0c4(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].type == 0x22 && package->files[fileIndex].enabled) {
                    void *table = dataTableFileGetTable(package->files[fileIndex].tableFile, 0);
                    AocTableRecord *records = dataTableGetEntries(table);
                    s32 count = dataTableGetCount(table);
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
}
