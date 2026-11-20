/* NON_MATCHING: written with the Thread::Start helper of uniteCreate/campCecCreate; the code matches except the frame: retail reserves 36 bytes with the descriptor at sp+16 and the argument at sp+32, this build 52 with the argument at sp+20 and the descriptor at sp+32 (a by-value copy of the argument inside the helper matches, but breaks uniteCreate and the other thread starts, so it is not written). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "nn/Result.h"
#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

/* The CEC inbox reader as its initialisation sees it. */
struct CecInboxReader {
    /* 0x000 */ u8 unk000[0x6c];
    /* 0x06C */ s32 nextMessageIndex;
    /* 0x070 */ s32 messageCount;
    /* 0x074 */ u32 unk74;
    /* 0x078 */ u32 writeCount;
    /* 0x07C */ u32 readCount;
    /* 0x080 */ u8 unk080[0x3a0];
    /* 0x420 */ u8 lock[0xc];
    /* 0x42C */ u8 thread[8];
    /* 0x434 */ ThreadStackStorage stack;
    /* 0x44C */ void *stackMemory;
};

extern "C" {
extern const char DAT_00403530[];
void nn_os_CriticalSection_Initialize(void *section);
void resultReportIfFailed(void *stack, void *memory, u32 size);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(CecInboxReader *),
                        CecInboxReader **argument, u32 stackTop, s32 priority, s32 affinity, s32 flag);
void FUN_001dc684(CecInboxReader *reader);
void FUN_003f6e94(const u32 *source, u32 *destination);
void FUN_003f6fe8(void);
u32 FUN_003f6f5c(u32 (*callback)(u32), const u32 *value);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is fatal. */
static __inline void cecStartThread(void *thread, void (*entry)(CecInboxReader *), CecInboxReader *argument,
                                    ThreadStackStorage &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = (void (*)(void))FUN_003f6e94;
    descriptor.callbacks[1] = FUN_003f6fe8;
    descriptor.callbacks[2] = (void (*)(void))FUN_003f6f5c;
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority, processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Sets up the CEC inbox reader and starts its worker thread on a fresh 4 KB stack. */
void FUN_002e1a00(CecInboxReader *reader)
{
    nn_os_CriticalSection_Initialize(reader->lock);
    reader->nextMessageIndex = 0;
    reader->messageCount = asdCecInboxGetMessageCount();
    reader->writeCount = 0;
    reader->readCount = 0;
    asdDebugTrace(DAT_00403530, 202);
    reader->stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    resultReportIfFailed(&reader->stack, reader->stackMemory, 0x1000);
    cecStartThread(reader->thread, FUN_001dc684, reader, reader->stack, 17, -2);
}

} /* extern "C" */
