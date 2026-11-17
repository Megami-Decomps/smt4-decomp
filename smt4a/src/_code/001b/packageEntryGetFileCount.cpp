#include "addon/AocPackage.h"
#include "gamedata/DataTable.h"

extern "C" {

void *dataTableFileGetTable(void *file, u32 section);

/* The number of the package's directory entries (0 when the directory is not loaded). */
u32 packageEntryGetFileCount(AocPackage *package)
{
    if (package->directoryLoaded == 0) {
        return 0;
    }
    if (package->directoryFile == NULL) {
        return 0;
    }
    return dataTableGetCount(dataTableFileGetTable(package->directoryFile, 0));
}

} /* extern "C" */
