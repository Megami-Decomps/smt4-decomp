/* NON_MATCHING: rewritten from the draft; the thread start block is built in a different stack and register order (retail: parameter-ops at sp+16, argument at sp+32, stack top computed last into r4). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

/* The memory a thread runs on: base and size of the block. */
struct CecThreadStack {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 base;
    /* 0x0C */ u32 size;
};


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
    /* 0x434 */ CecThreadStack stack;
    /* 0x444 */ u8 unk444[8];
    /* 0x44C */ void *stackMemory;
};

extern "C" {
/* How a thread start copies, destroys and calls its one-word parameter (the SDK's typed start). */
struct ThreadParameterOps {
    /* 0x00 */ u32 size;
    /* 0x04 */ void (*copy)(const u32 *source, u32 *destination);
    /* 0x08 */ void (*destroy)(void);
    /* 0x0C */ u32 (*invoke)(u32 (*callback)(u32), const u32 *value);
};

extern const char DAT_00403530[];
void nn_os_CriticalSection_Initialize(void *section);
void resultReportIfFailed(void *stack, void *memory, u32 size);
nn::Result FUN_002bcc60(void *thread, const ThreadParameterOps *ops, void (*entry)(CecInboxReader *),
                        CecInboxReader **argument, u32 stackTop, s32 priority, s32 affinity, s32 flag);
void FUN_001dc684(CecInboxReader *reader);
void FUN_003f6e94(const u32 *source, u32 *destination);
void FUN_003f6fe8(void);
u32 FUN_003f6f5c(u32 (*callback)(u32), const u32 *value);

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
    ThreadParameterOps ops = {4, FUN_003f6e94, FUN_003f6fe8, FUN_003f6f5c};
    CecInboxReader *argument = reader;
    nn::Result result = FUN_002bcc60(reader->thread, &ops, FUN_001dc684, &argument,
                                     reader->stack.base + reader->stack.size, 17, -2, 0);
    if ((result & 0x7e00000) != 0x600000 && nnResultIsFailure(result)) {
        resultHandleFailure(result);
    }
}
}
