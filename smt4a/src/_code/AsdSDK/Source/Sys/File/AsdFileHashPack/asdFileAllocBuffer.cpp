#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void *FUN_001858ec(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront, const char *tag);
void asdMemorySetReleaseCallback(void *buffer, const void *callback, void *worker);
void resourceSlotsClearEntry(void *object, void *worker); /* releases the buffer from the worker's slot list */
extern const char DAT_0053d484[]; /* the source file path (__FILE__) */

/* The file worker's thread state; only its flag word is used here. */
typedef struct AsdFileWorker {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 flags;
} AsdFileWorker;

/* Allocates the buffer for a request from the heap its `heapKind` names (front or back of it) and,
 * when the worker has bit 0 set, hands the buffer to its callback. Returns the buffer. */
void *asdFileAllocBuffer(AsdFileWorker *worker, AsdFileRequest *request)
{
    void *buffer;

    if (request->heapKind == 0x10) {
        asdDebugTrace(DAT_0053d484, 482);
        buffer = FUN_001858ec(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0, request->path);
    } else if (request->heapKind == 1) {
        asdDebugTrace(DAT_0053d484, 486);
        buffer = FUN_001858ec(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1, request->path);
    } else if (request->heapKind == 0x11) {
        asdDebugTrace(DAT_0053d484, 490);
        buffer = FUN_001858ec(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0, request->path);
    } else {
        asdDebugTrace(DAT_0053d484, 494);
        buffer = FUN_001858ec(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1, request->path);
    }
    if ((worker->flags & 1) != 0) {
        asdMemorySetReleaseCallback(buffer, (const void *)resourceSlotsClearEntry, worker);
    }
    return buffer;
}

} /* extern "C" */
