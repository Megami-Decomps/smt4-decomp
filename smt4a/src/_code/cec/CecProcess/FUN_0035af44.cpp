/* NON_MATCHING: callable/argument stack placement and result-failure branch predication differ. */
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/asdCecInboxGetMessageCount.h"

struct CecProcess;
typedef void (*CecThreadEntry)(CecProcess*);
struct CecThreadCallDescriptor {
    u32 argumentSize;
    void (*copy)(CecProcess* const* source, CecProcess** destination);
    void (*destroy)(CecProcess** argument);
    void (*invoke)(CecThreadEntry entry, CecProcess** argument);
};
typedef char CecThreadCallDescriptorLayoutCheck[sizeof(CecThreadCallDescriptor) == 0x10 &&
    offsetof(CecThreadCallDescriptor, copy) == 4 &&
    offsetof(CecThreadCallDescriptor, destroy) == 8 &&
    offsetof(CecThreadCallDescriptor, invoke) == 0xC ? 1 : -1];

extern "C" {
extern const char DAT_0052f4b0[];
void nn_os_CriticalSection_Initialize(void* section);
void* memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option, u32 mode);
void resultReportIfFailed(void* object, void* buffer, u32 size);
void FUN_00514a44(CecProcess* const* source, CecProcess** destination);
void FUN_00514b7c(CecProcess** argument);
void FUN_00514afc(CecThreadEntry entry, CecProcess** argument);
void FUN_0028196c(CecProcess* process);
s32 FUN_002fb0d4(ThreadHandleState* thread, const CecThreadCallDescriptor* descriptor,
                 CecThreadEntry entry, CecProcess* const* argument, void* stackTop,
                 u32 priority, s32 processor, u32 flags);
void FUN_002e3140(s32 result);

// Initialize inbox accounting, allocate its worker stack, and start the CEC thread.
void FUN_0035af44(CecProcess* process)
{
    // The stack-memory object overlaps the older partial thread view; do not reshape it.
    struct StackMemoryView {
        u32 unk00;
        u32 handle;
        u8* base;
        u32 size;
    };
    struct ThreadView {
        u8 unk000[0xD34];
        ThreadHandleState thread;
        StackMemoryView stack;
    };
    typedef char ThreadOffsets[offsetof(ThreadView, thread) == 0xD34 &&
        offsetof(ThreadView, stack) == 0xD3C &&
        offsetof(ThreadView, stack.base) == 0xD44 &&
        offsetof(ThreadView, stack.size) == 0xD48 ? 1 : -1];
    AsdCecProcessWork* work = reinterpret_cast<AsdCecProcessWork*>(process);
    ThreadView* worker = reinterpret_cast<ThreadView*>(process);
    nn_os_CriticalSection_Initialize(work->inbox.lock);
    work->inbox.receivedCount = 0;
    work->inbox.requestedCount = asdCecInboxGetMessageCount();
    work->inbox.producedBatches = 0;
    work->inbox.consumedBatches = 0;
    asdDebugTrace(DAT_0052f4b0, 215);
    work->buffer = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    resultReportIfFailed(&worker->stack, work->buffer, 0x1000);
    CecThreadCallDescriptor descriptor;
    descriptor.argumentSize = sizeof(CecProcess*);
    descriptor.copy = FUN_00514a44;
    descriptor.destroy = FUN_00514b7c;
    descriptor.invoke = FUN_00514afc;
    CecProcess* argument = process;
    s32 result = FUN_002fb0d4(&worker->thread, &descriptor, FUN_0028196c, &argument,
                             worker->stack.base + worker->stack.size, 17, -2, 0);
    if ((u32(result) & 0x07E00000) != 0x00600000 && result < 0) {
        FUN_002e3140(result);
    }
}
}
