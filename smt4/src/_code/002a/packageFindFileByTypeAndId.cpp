/* NON_MATCHING: prologue scheduling only: retail saves `system` and loads the package count before saving the other arguments. */
#include "addon/aocMain.h"
#include "addon/AocSystem.h"


extern "C" {
void textFormatBuffer(char *buffer, const char *format, ...);

/* Finds the file of type `type` and id `id` among the valid add-on packages, writes its path
 * ("package/file") to `path` and returns it; NULL when absent. */
AocPackageFile *packageFindFileByTypeAndId(AocSystem *system, s32 type, s32 id, char *path)
{
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *directory = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 fileIndex = 0; fileIndex < fileCount; ++fileIndex) {
                if (directory[fileIndex].kind == type && directory[fileIndex].value == (u32)id) {
                    textFormatBuffer(path, "%s/%s", package->mountName, directory[fileIndex].name);
                    return &package->files[fileIndex];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
