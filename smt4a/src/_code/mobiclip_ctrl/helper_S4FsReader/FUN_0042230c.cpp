/* NON_MATCHING: readable rebuild of the reader start-up. Retail passes a stale r6 as the second argument of asdOperatorNew (no source value exists for it), and keeps the three-callback table and the thread arguments in the order the stack shows; the register allocation of those stores and the event-creation guards differs. */
#include "mobiclip_ctrl/S4FsReader.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/svc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* The reader thread's stack block: the memory and the allocator object that describes it. */
struct S4ThreadStack {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 base;
    /* 0x0C */ u32 size;
    /* 0x10 */ u8 unk10;
};
struct S4ThreadStackBlock {
    /* 0x00 */ void *memory;
    /* 0x04 */ S4ThreadStack *stack;
};

/* The thread's start description: callbacks the thread library invokes. */
struct S4ThreadHooks {
    s32 version;
    const void *onStart;
    const void *onExit;
    const void *onFree;
};

extern "C" {
extern const char DAT_00532ab8[]; /* "c:\\SMT4F\\SMT4F\\mobiclip_ctrl\\helper_S4FsReader.cpp": __FILE__ */
extern S4ThreadStackBlock DAT_005880f8;

void *memAlloc(int, int, int, s32 size, int align, int);
void resultReportIfFailed(S4ThreadStack *stack, void *memory, u32 size);
void nn_os_CriticalSection_Initialize(void *lock);
s32 FUN_0017fd20(u32 *handle, u32 resetType); /* creates an event */
void FUN_002e3140(s32 result);                /* throws a fatal error */
s32 FUN_002fb0d4(u32 *thread, const S4ThreadHooks *hooks, void (*entry)(void *), void *argument, u32 stackTop, u32 alignment, s32 priority, s32 affinity);
void FUN_00422534(void *reader);
void FUN_00514a74(void);
void FUN_00514b20(void);
void FUN_00514b88(void);

static void createEventOnce(u32 *slot)
{
    s32 result = (s32)0xE0A0183B; /* already created */
    u32 handle = 0;
    if (*slot == 0) {
        result = FUN_0017fd20(&handle, 0);
        if (result >= 0) {
            *slot = handle;
            result = 0;
        }
    }
    if (result < 0)
        FUN_002e3140(result);
}

/* Starts the movie reader: sizes it from the source, allocates the ring buffer, creates the data and
 * stop events and the worker thread, and wakes the thread once. */
u32 FUN_0042230c(S4FsReader *reader, S4StreamSource *source, S4Allocator *allocator)
{
    reader->source = source;
    reader->limit = source->getSize();
    reader->allocator = allocator;
    reader->ring = (u8 *)allocator->allocate(S4_FS_READER_RING_SIZE, 4);
    reader->consumed = 0;
    reader->produced = 0;
    reader->requested = 0;
    nn_os_CriticalSection_Initialize(reader->lock);
    createEventOnce(&reader->dataEvent);
    createEventOnce(&reader->stopEvent);
    reader->wakeup[0] = (u32)&reader->dataEvent;
    reader->wakeup[1] = (u32)&reader->stopEvent;

    asdDebugTrace(DAT_00532ab8, 295);
    DAT_005880f8.memory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    S4ThreadStack *stack = (S4ThreadStack *)asdOperatorNew(sizeof(S4ThreadStack), 0);
    if (stack != NULL) {
        stack->unk00 = 0;
        stack->unk04 = 0;
        stack->base = 0;
        stack->size = 0;
        stack->unk10 = 0;
    }
    DAT_005880f8.stack = stack;
    resultReportIfFailed(stack, DAT_005880f8.memory, 0x1000);

    S4ThreadHooks hooks = { 4, (const void *)FUN_00514a74, (const void *)FUN_00514b88, (const void *)FUN_00514b20 };
    void *argument = reader;
    s32 result = FUN_002fb0d4(&reader->threadHandle, &hooks, FUN_00422534, &argument,
                              DAT_005880f8.stack->base + DAT_005880f8.stack->size, 4, -2, 0);
    if (result < 0)
        FUN_002e3140(result);
    result = nn::svc::SignalEvent(reader->dataEvent);
    if (result < 0)
        FUN_002e3140(result);
    return 1;
}

} /* extern "C" */
