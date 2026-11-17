#include "addon/AocPackage.h"
#include "gamedata/DataTable.h"

extern "C" {

void *dataTableFileGetTable(void *file, u32 section);

/* The package's directory entries: section 0 of its directory file, or NULL when the directory is not loaded. */
AocPackageDirectoryEntry *packageEntryGetDirectory(AocPackage *package)
{
    if (package->directoryLoaded == 0) {
        return NULL;
    }
    if (package->directoryFile == NULL) {
        return NULL;
    }
    return (AocPackageDirectoryEntry *)dataTableGetEntries(dataTableFileGetTable(package->directoryFile, 0));
}

} /* extern "C" */
