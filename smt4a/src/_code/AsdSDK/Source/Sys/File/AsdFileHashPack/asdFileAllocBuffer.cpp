/* NON_MATCHING: the retail build has stripped debug calls (file/line setup + nop) before each allocation. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void *FUN_001858ec(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront, const char *tag);
void FUN_0019dfe4(void *buffer, const void *callback, void *worker);
extern u8 LAB_0019eab0;

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

    switch (request->heapKind) {
    case 0x10:
        buffer = FUN_001858ec(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0, request->path);
        break;
    case 1:
        buffer = FUN_001858ec(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1, request->path);
        break;
    case 0x11:
        buffer = FUN_001858ec(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0, request->path);
        break;
    default:
        buffer = FUN_001858ec(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1, request->path);
        break;
    }
    if ((worker->flags & 1) != 0) {
        FUN_0019dfe4(buffer, &LAB_0019eab0, worker);
    }
    return buffer;
}

} /* extern "C" */
