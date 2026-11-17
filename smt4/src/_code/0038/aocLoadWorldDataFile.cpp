#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "AsdSDK/AsdMemUtil.h"
#include "addon/AocSystem.h"

extern "C" {

struct FileQueue;
extern FileQueue *g_aocDisplay;

AocPackageFile *packageFindFileByTypeAndId(AocSystem *system, s32 kind, s32 id, char *path);
u32 fileQueueRequestAndWait(FileQueue *queue, const char *path, const char *secondPath,
                  u32 *transferredBytes, u32 mode, u32 bytes, void *context);

/* Load the matching add-on file using its package path and the requested destination path. */
static __inline void *loadPackageEntry(AocSystem *system, s32 kind, s32 id, const char *destinationPath)
{
    char packagePath[0x80];
    memClear(packagePath, sizeof(packagePath));
    AocPackageFile *file = packageFindFileByTypeAndId(system, kind, id, packagePath);
    if (file != NULL) {
        return reinterpret_cast<void *>(fileQueueRequestAndWait(g_aocDisplay, packagePath, destinationPath,
            &file->result, 1, sizeof(packagePath), file));
    }
    return NULL;
}

void *aocLoadWorldDataFile(AocSystem *system, s32 id, const char *destinationPath)
{
    return loadPackageEntry(system, 0x10, id, destinationPath);
}

} /* extern "C" */
