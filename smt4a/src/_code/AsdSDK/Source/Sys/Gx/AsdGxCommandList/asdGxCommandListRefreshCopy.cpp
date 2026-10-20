#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char g_asdGxCommandListSourcePath[]; /* __FILE__ of AsdGxCommandList.cpp */
u32 FUN_00196068(u32 id, u32 a, u32 b, u32 c, u32 d, u32 size, void *buffer);
void *asdMemoryAllocAligned(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront);
void nngxGetError(void);
void asdMemFree(void *block);

/* Refreshes the heap copy of a list's first state entry: frees the old copy, asks the library
 * for the state size, allocates (16-byte aligned) and fills it. */
void asdGxCommandListRefreshCopy(AsdGxCommandList *list)
{
    if (list->entries[0].copy != NULL) {
        asdMemFree(list->entries[0].copy);
        list->entries[0].copy = NULL;
    }
    if (list->entries[0].values[1] != 0) {
        list->entries[0].copySize = FUN_00196068(list->id, list->entries[0].values[0], list->entries[0].values[1],
                                                 list->entries[0].values[2], list->entries[0].values[3], 0, NULL);
        asdDebugTrace(g_asdGxCommandListSourcePath, 211);
        list->entries[0].copy = asdMemoryAllocAligned(0x100, 0x100, 0, list->entries[0].copySize, 0x10, 1);
        FUN_00196068(list->id, list->entries[0].values[0], list->entries[0].values[1], list->entries[0].values[2],
                     list->entries[0].values[3], list->entries[0].copySize, list->entries[0].copy);
        nngxGetError();
    }
}

} /* extern "C" */
