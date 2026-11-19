#include "addon/AocPackage.h"

extern "C" {

s32 objGetFlagBit0(void *flags);
s32 objGetFlagBit1(void *flags);

/* Whether the package is mounted (state bits 0 and 1 set) and its directory and file slots are loaded. */
u32 packageEntryIsLoaded(AocPackage *package)
{
    if (objGetFlagBit1(&package->id) == 0) {
        return 0;
    }
    if (objGetFlagBit0(&package->id) == 0) {
        return 0;
    }
    if (package->directoryLoaded == 0 || package->directoryFile == NULL) {
        return 0;
    }
    return package->files != NULL;
}

} /* extern "C" */
