#include "addon/sys/aocThread.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32 size, u32 alignment, u32 region, u32 heap, u32 pageSize, u32 flags);
void *asdOperatorNew(u32 size, u32 heap);
void resultReportIfFailed(AocThreadHandle *handle, void *stack, u32 heap);

/* Allocates the addon thread's stack and zero-initialized handle storage. */
void aocThreadAllocateStorage(AocThread *thread, u32 heap)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocThread.cpp", 40);
    thread->stack = memAlloc(0x100, 0x100, 0, heap, 0x1000, 1);
    AocThreadHandle *handle = (AocThreadHandle *)asdOperatorNew(sizeof(AocThreadHandle), heap);
    if (handle != NULL) {
        handle->unk00 = 0;
        handle->unk04 = 0;
        handle->unk08 = 0;
        handle->unk0C = 0;
        handle->unk10 = 0;
    }
    thread->handle = handle;
    resultReportIfFailed(handle, thread->stack, heap);
}
}
