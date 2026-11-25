/* NON_MATCHING: retail tests the count before copying it into the saved register and leaves the allocator's unused owner argument unset. */
#include "addon/AocPackage.h"
#include "gamedata/TableEntryCache.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"

extern "C" {
EntryState *__aeabi_vec_ctor_nocookie_nodtor(EntryState *, void (*)(EntryState *), u32, u32); // declcheck: local (entryStateClear is still declared as a C callback, rather than a native constructor)

/* Allocates a file slot for every entry in the package directory. */
void FUN_0038b760(AocPackage *package)
{
    if (package->directoryLoaded != 0 && package->directoryFile != NULL) {
        dataTableGetEntries(dataTableFileGetTable((u32)package->directoryFile, 0));
    }
    u32 count = 0;
    if (package->directoryLoaded != 0 && package->directoryFile != NULL) {
        count = dataTableGetCount(dataTableFileGetTable((u32)package->directoryFile, 0));
    }
    if (count != 0) {
        EntryState *files = (EntryState *)asdOperatorNewB(count * sizeof(AocPackageFile), NULL);
        if (files != NULL) {
            files = __aeabi_vec_ctor_nocookie_nodtor(files, entryStateClear, sizeof(AocPackageFile), count);
        }
        package->files = (AocPackageFile *)files;
    }
}
} /* extern "C" */
