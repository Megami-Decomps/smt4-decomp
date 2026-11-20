#include "addon/AocPackage.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"

/* Checks that all requested files in the package are ready. */
extern "C" u32 aocPackageAllRequestedFilesReady(AocPackage *entry)
{
    if (entry->files == NULL) {
        return 1;
    }
    if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
        dataTableGetEntries(dataTableFileGetTable((u32)entry->directoryFile, 0));
    }
    u32 count = 0;
    if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
        count = dataTableGetCount(dataTableFileGetTable((u32)entry->directoryFile, 0));
    }
    for (u32 i = 0; i < count; ++i) {
        if (entry->files[i].available == 0) {
            continue;
        }
        if (entry->files[i].data == NULL) {
            return 0;
        }
    }
    return 1;
}
