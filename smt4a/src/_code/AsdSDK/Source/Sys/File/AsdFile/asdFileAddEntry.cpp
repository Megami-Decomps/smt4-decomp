#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern u32 g_asdFileMutex; /* nn::os mutex handle guarding the loader's lists */

void syncWaitHandleForever(u32 *handle);
s32 FUN_0019a364(s32 *previousCount, u32 handle, s32 releaseCount);
void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags, u32 size, s32 fromFront);
void sysMemClear(void *block, u32 size);
void FUN_002e59f8(const void *src, void *dst, u32 size);

/* Releases the mutex once, calling the failure handler if the kernel refuses. */
static void syncReleaseMutex(u32 *handle)
{
    s32 previousCount;
    s32 result = FUN_0019a364(&previousCount, *handle, 1);

    if (nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
}

/* Appends a new entry holding a copy of `record` to the loader's entry list and returns it. */
AsdFileEntry *asdFileAddEntry(const void *record)
{
    AsdFileEntry *entry;
    AsdFileEntry *last;

    syncWaitHandleForever(&g_asdFileMutex);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 206);
    entry = (AsdFileEntry *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdFileEntry), 1);
    sysMemClear(entry, sizeof(AsdFileEntry));
    if (g_asdFile.entries == NULL) {
        g_asdFile.entries = entry;
    } else {
        AsdFileEntry *next;
        last = g_asdFile.entries;
        do {
            next = last->next;
            if (next != NULL) {
                last = next;
            }
        } while (next != NULL);
        last->next = entry;
        entry->prev = last;
    }
    FUN_002e59f8(record, entry, sizeof(entry->data));
    syncReleaseMutex(&g_asdFileMutex);
    return entry;
}

} /* extern "C" */
