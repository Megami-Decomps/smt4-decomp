#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

struct FileQueue;
extern FileQueue *g_aocDisplay;

AocPackageFile *FUN_001b2bd8(AocSystem *system, s32 kind, s32 id, char *path);
u32 FUN_001b2ebc(FileQueue *queue, const char *path, const char *secondPath,
                  u32 *transferredBytes, u32 mode, u32 bytes, void *context);

/* Load the matching add-on file using its package path and the requested destination path. */
static __inline void *loadPackageEntry(AocSystem *system, s32 kind, s32 id, const char *destinationPath)
{
    char packagePath[0x80];
    sysMemClear(packagePath, sizeof(packagePath));
    AocPackageFile *file = FUN_001b2bd8(system, kind, id, packagePath);
    if (file != NULL) {
        return reinterpret_cast<void *>(FUN_001b2ebc(g_aocDisplay, packagePath, destinationPath,
            &file->texture.result, 1, sizeof(packagePath), file));
    }
    return NULL;
}

void *FUN_0046e150(AocSystem *system, s32 id, const char *destinationPath)
{
    return loadPackageEntry(system, 12, id, destinationPath);
}

} /* extern "C" */
