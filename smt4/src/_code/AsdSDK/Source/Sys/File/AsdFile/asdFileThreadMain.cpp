/* NON_MATCHING: retail uses one pool base for the semaphore and worker state, overlays the
 * release/wait and UTF-16 stack slots differently, and lays out the state switch and queue traversal differently. */
#include <new>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "nn/Result.h"
#include "nn/fnd/TimeSpan.h"
#include "nn/os/LightEvent.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "sys/HandleWait.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern u32 g_asdFileMutex;
extern LightEvent g_asdFileEvent;
extern CriticalSection *DAT_00465124;

void nn_os_LightEvent_Wait(LightEvent *event);
void threadSleepDuration(nn::fnd::TimeSpan delay);
void *asdMemoryAllocAligned(u32 heap, u32 kind, u32 flags, u32 size, u32 alignment, s32 tag);
} /* extern "C" */

enum {
    ASD_FILE_HEAP_LARGE = 1,
    ASD_FILE_HEAP_BACK = 0x10,
    ASD_FILE_HEAP_LARGE_BACK = 0x11
};

/* Wakes on queued I/O, completes each request, and retires expired entries from the list. */
extern "C" void asdFileThreadMain(void *)
{
    for (;;) {
        nn_os_LightEvent_Wait(&g_asdFileEvent);
        if (g_asdFile.stopRequested) {
            return;
        }

        handleWait(g_asdFileMutex, -1);
        AsdFileRequest *request = g_asdFile.head;
        semaphoreRelease(g_asdFileMutex, 1);

        while (!g_asdFile.stopRequested && request != NULL) {
            bool removed = false;
            if (request->state != ASD_FILE_DONE && request->state != ASD_FILE_FAILED) {
                if (request->onOpen != NULL) {
                    handleWait(g_asdFileMutex, -1);
                    request->onOpen(request->path);
                    request->onOpen = NULL;
                    semaphoreRelease(g_asdFileMutex, 1);
                }
                switch (request->state) {
                case ASD_FILE_QUEUED: {
                    void *memory = asdOperatorNew(sizeof(Obj420c60));
                    request->stream = memory != NULL ? new (memory) Obj420c60 : NULL;
                    /* The retail worker proceeds on the assumption that this allocation succeeds. */
                    s32 openResult = fileTryInitializeNarrow(*(Obj420c60 *)request->stream, request->path, 1);
                    if (nnResultIsFailure(openResult)) {
                        request->state = ASD_FILE_FAILED;
                    }
                    request->size = (u32)((Obj420c60 *)request->stream)->size();
                    ((Obj420c60 *)request->stream)->seek(0, 0);
                    if (request->buffer == NULL) {
                        if (request->heapKind == ASD_FILE_HEAP_BACK) {
                            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 665);
                            request->buffer = asdMemoryAllocAligned(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0);
                        } else if (request->heapKind == ASD_FILE_HEAP_LARGE) {
                            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 667);
                            request->buffer = asdMemoryAllocAligned(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1);
                        } else if (request->heapKind == ASD_FILE_HEAP_LARGE_BACK) {
                            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 669);
                            request->buffer = asdMemoryAllocAligned(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 0);
                        } else {
                            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 671);
                            request->buffer = asdMemoryAllocAligned(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, request->size, request->alignment, 1);
                        }
                    }
                    u32 bytesRead = 0;
                    s32 readResult;
                    {
                        ScopedCriticalLock lock(DAT_00465124);
                        g_asdFile.reading = 1;
                        readResult = ((Obj420c60 *)request->stream)->read(&bytesRead, request->buffer, request->size);
                        g_asdFile.reading = 0;
                    }
                    if (nnResultIsFailure(readResult)) {
                        request->state = ASD_FILE_FAILED;
                    }
                    ((Obj420c60 *)request->stream)->Close();
                    delete (Obj420c60 *)request->stream;
                    request->state = ASD_FILE_READ;
                    request->stream = NULL;
                }
                    /* fall through */
                case ASD_FILE_READ:
                    request->state = ASD_FILE_DONE;
                    break;
                }
                if ((request->state == ASD_FILE_DONE || request->state == ASD_FILE_FAILED) && request->onDone != NULL) {
                    handleWait(g_asdFileMutex, -1);
                    request->onDone(request->onDoneArg != NULL ? request->onDoneArg : request);
                    semaphoreRelease(g_asdFileMutex, 1);
                }
            } else {
                handleWait(g_asdFileMutex, -1);
                request->lifetime -= request->lifetimeStep;
                if (request->lifetime <= 0) {
                    AsdFileRequest *next = request->next;
                    AsdFileRequest *prev = request->prev;
                    if (prev != NULL) {
                        prev->next = next;
                        if (next != NULL) {
                            next->prev = prev;
                        }
                    } else {
                        g_asdFile.head = next;
                        if (next != NULL) {
                            next->prev = NULL;
                        }
                    }
                    if (!request->userBuffer && request->buffer != NULL) {
                        asdMemFree(request->buffer);
                    }
                    request->buffer = NULL;
                    asdMemFree(request);
                    request = next;
                    removed = true;
                }
                semaphoreRelease(g_asdFileMutex, 1);
            }
            if (removed) {
                continue;
            }
            handleWait(g_asdFileMutex, -1);
            request = request->next;
            semaphoreRelease(g_asdFileMutex, 1);
        }

        if (g_asdFile.stopRequested) {
            return;
        }
        nn_os_LightEvent_ClearSignal(&g_asdFileEvent);
        threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(3));
    }
}
