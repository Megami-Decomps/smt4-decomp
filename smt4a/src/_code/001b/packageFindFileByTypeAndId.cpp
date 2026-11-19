#include <stdio.h>
#include "addon/AocSystemA.h"
#include "addon/AocPackage.h"


extern "C" {

/* Finds the file of type `type` and id `id` among the valid add-on packages, writes its path
 * ("package/file") to `path` and returns it; NULL when absent. */
AocPackageFile *packageFindFileByTypeAndId(AocSystemA *system, s32 type, s32 id, char *path)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *directory = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].kind == type && directory[fileIndex].value == (u32)id) {
                    sprintf(path, "%s/%s", package->mountName, directory[fileIndex].name);
                    return &package->files[fileIndex];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
