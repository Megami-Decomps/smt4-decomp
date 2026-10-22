/* NON_MATCHING: prologue scheduling only: retail saves `system` and loads the package count before saving the other arguments. */
#include "addon/aocMain.h"

struct AocPackageFile {
    void *tableFile;
    u8 unk04[8];
    u8 enabled;
    u8 unk0d[3];
};
struct AocPackage {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ char name[0x21];
    /* 0x45 */ u8 enabled;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *directoryTable;
    /* 0x4C */ AocPackageFile *files;
};
struct AocDirectoryEntry {
    /* 0x00 */ s8 type;
    /* 0x01 */ char name[0x3b];
    /* 0x3C */ s32 id;
};

extern "C" {
s32 FUN_002ac12c(AocPackage *package);
AocDirectoryEntry *FUN_002ac0f8(AocPackage *package);
u32 FUN_002ac0c4(AocPackage *package);
void textFormatBuffer(char *buffer, const char *format, ...);

/* Finds the file of type `type` and id `id` among the valid add-on packages, writes its path
 * ("package/file") to `path` and returns it; NULL when absent. */
AocPackageFile *FUN_002a6e7c(AocSystem *system, s32 type, s32 id, char *path)
{
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_002ac12c(package)) {
            AocDirectoryEntry *directory = FUN_002ac0f8(package);
            u32 fileCount = FUN_002ac0c4(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].type == type && directory[fileIndex].id == id) {
                    textFormatBuffer(path, "%s/%s", package->name, directory[fileIndex].name);
                    return &package->files[fileIndex];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
