/* NON_MATCHING: compiler unrolls the slot loop and omits two retail NOP hints. */
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" void *dataTableFileGetTable(void *, u32);

/* Requested table files must all be present before the entry is ready. */
extern "C" u32 FUN_004743e4(AocPackage *entry)
{
    if (entry->files != NULL) {
        if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
            dataTableGetEntries(dataTableFileGetTable(entry->directoryFile, 0));
        }
        if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
            u32 count = dataTableGetCount(dataTableFileGetTable(entry->directoryFile, 0));
            for (u32 i = 0; i < count; ++i) {
                if (entry->files[i].available != 0 && entry->files[i].data == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
