/* NON_MATCHING: svc 0x18 (SignalEvent) matches through nn/svc.h and the start-up sequence is recovered; retail shares the event temporary with the outgoing argument area (frame 48, handle at sp+0), passes an unset second argument (mov r1, r6) to asdOperatorNew, and keeps separate zero registers for the three 64-bit position stores. */
#include "mobiclip_ctrl/S4FsReader.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* The storage that owns the reader thread's stack (nn::os::ThreadStackStorage). */
struct ReaderStack {
    u32 unk00;
    u32 unk04;
    u32 address;  // 0x08
    u32 size;     // 0x0c
    u8 owned;     // 0x10
    u8 unk11[7];

    ReaderStack() : unk00(0), unk04(0), address(0), size(0), owned(0) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
};

/* What the reader thread runs on: the heap block of its stack and the stack storage. */
struct ReaderThreadStack {
    void *memory;         // 0x0
    ReaderStack *stack;   // 0x4
};

/* What the thread entry receives: the pointer it copies and its argument descriptor. */
struct ReaderStartContext {
    S4FsReader *reader;
    ThreadArgumentDescriptor descriptor;
};

extern "C" {
extern ReaderThreadStack DAT_0044d130;

void nn_os_CriticalSection_Initialize(void *section);
s32 FUN_002b5820(u32 *handle, u32 resetType);
void FUN_002c526c(s32 result, bool failed);
void resultReportIfFailed(void *stack, void *memory, u32 size);
void *memAlloc(s32 heap, s32 alignment, s32 flags, s32 size, s32 stackAlignment, s32 clear);
s32 FUN_002bcc60(u32 *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *),
                 const void *argument, u32 stackTop, s32 priority, s32 processor, u32 options);
void FUN_0034e020(void *reader);
void FUN_003f6ed4(void);
void FUN_003f6ff8(void);
void FUN_003f6f8c(void);

/* Starts the movie reader: allocates its ring buffer, creates its two events and starts the
 * reader thread on its own 4 KiB stack, then signals the thread to begin reading. */
u32 FUN_0034dddc(S4FsReader *reader, S4StreamSource *source, S4Allocator *allocator)
{
    reader->source = source;
    reader->limit = source->getSize();
    reader->allocator = allocator;
    reader->ring = (u8 *)allocator->allocate(S4_FS_READER_RING_SIZE, 4);
    reader->consumed = 0;
    reader->produced = 0;
    reader->requested = 0;
    nn_os_CriticalSection_Initialize(reader->lock);

    u32 handle = 0;
    u32 result = FUN_002b5820(&handle, 0);
    if (!nnResultIsFailure(result)) {
        reader->dataEvent = handle;
        result = 0;
    }
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    handle = 0;
    result = FUN_002b5820(&handle, 0);
    if (!nnResultIsFailure(result)) {
        reader->stopEvent = handle;
        result = 0;
    }
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    reader->wakeup[0] = (u32)&reader->dataEvent;
    reader->wakeup[1] = (u32)&reader->stopEvent;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\helper_S4FsReader.cpp", 295);
    DAT_0044d130.memory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    DAT_0044d130.stack = new ReaderStack();
    resultReportIfFailed(DAT_0044d130.stack, DAT_0044d130.memory, 0x1000);

    ReaderStartContext context;
    context.descriptor.argumentSize = sizeof(reader);
    context.reader = reader;
    context.descriptor.callbacks[0] = FUN_003f6ed4;
    context.descriptor.callbacks[1] = FUN_003f6ff8;
    context.descriptor.callbacks[2] = FUN_003f6f8c;
    result = FUN_002bcc60(&reader->threadHandle, &context.descriptor, FUN_0034e020, &context.reader,
                          DAT_0044d130.stack->address + DAT_0044d130.stack->size, 4, -2, 0);
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    result = nn::svc::SignalEvent(reader->dataEvent);
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    return 1;
}

} /* extern "C" */
