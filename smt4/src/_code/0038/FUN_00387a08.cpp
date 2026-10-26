#include "common.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

struct FileQueue;
extern u8 *FUN_002a6e7c(AocSystem *system, s32 kind, s32 key, char *path);
extern u32 FUN_002a4584(FileQueue *queue, const char *path, const char *secondPath,
                      u32 *transferredBytes, u32 mode, u32 bytes, void *context);
extern FileQueue *g_aocDisplay;

/* Resolve the add-on path of `kind` and synchronously load it, optionally paired with a second path. */
static __inline void *loadPackageEntry(AocSystem *system, s32 kind, s32 key, const char *secondPath)
{
    char path[128];
    memClear(path, sizeof(path));
    u8 *entry = FUN_002a6e7c(system, kind, key, path);
    if (entry != NULL) {
        return reinterpret_cast<void *>(FUN_002a4584(g_aocDisplay, path, secondPath,
            reinterpret_cast<u32 *>(entry + 8), 1, sizeof(path), entry));
    }
    return NULL;
}

void *FUN_00387a08(AocSystem *system, s32 key, const char *secondPath)
{
    return loadPackageEntry(system, 12, key, secondPath);
}

}
