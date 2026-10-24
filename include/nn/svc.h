/* CTR-SDK kernel call (svc) and CP15 declarations, armcc style: system calls are __svc(N)
 * functions, the thread pointer and the barrier are CP15 registers. Game code includes this header
 * and calls them like ordinary functions. */
#ifndef NN_SVC_H
#define NN_SVC_H

#include "common.h"

/* The wrappers retail keeps as functions (svc N; bx lr) are written with the intrinsics below;
 * armlink replaces each call to them with the svc instruction, so callers use them as functions. */
extern "C" s32 svcCloseHandle(u32 handle);
extern "C" s64 svcGetSystemTick(void);

namespace nn {
namespace svc {

__svc(0x0c) s32 SetThreadPriority(u32 thread, s32 priority);
__svc(0x14) s32 ReleaseMutex(u32 mutex);
__svc(0x18) s32 SignalEvent(u32 event);
__svc(0x19) s32 ClearEvent(u32 event);
__svc(0x1f) s32 MapMemoryBlock(u32 handle, u32 address, u32 myPermission, u32 otherPermission);
__svc(0x23) s32 CloseHandle(u32 handle);
/* The 64-bit timeout travels in r2:r3 (r1 is skipped by the calling convention). */
__svc(0x24) s32 WaitSynchronization1(u32 handle, u32 skipped, u32 timeoutLow, u32 timeoutHigh);
__svc(0x28) s64 GetSystemTick(void);
__svc(0x32) s32 SendSyncRequest(u32 session);

} // namespace svc

namespace os {
namespace detail {

/* CP15 c13, c0, 3: the thread-local storage pointer; c7, c10, 5: data memory barrier; c7, c10, 4:
 * data synchronization barrier. */
register unsigned int threadLocalStorage __asm("cp15:0:c13:c0:3");
register unsigned int dataMemoryBarrier __asm("cp15:0:c7:c10:5");
register unsigned int dataSynchronizationBarrier __asm("cp15:0:c7:c10:4");

} // namespace detail

/* The IPC command buffer: word 0 is the command header, the rest parameters and descriptors. */
typedef struct IpcCommandBuffer {
    /* 0x00 */ u32 header;
    /* 0x04 */ u32 words[63];
} IpcCommandBuffer;

static __inline void *GetThreadLocalStorage(void)
{
    return (void *)detail::threadLocalStorage;
}

/* The command buffer is at thread-local storage + 0x80. */
static __inline IpcCommandBuffer *GetIpcCommandBuffer(void)
{
    return (IpcCommandBuffer *)((u8 *)GetThreadLocalStorage() + 0x80);
}

static __inline void DataMemoryBarrier(void)
{
    detail::dataMemoryBarrier = 0;
}

static __inline void DataSynchronizationBarrier(void)
{
    detail::dataSynchronizationBarrier = 0;
}

} // namespace os
} // namespace nn

#endif
