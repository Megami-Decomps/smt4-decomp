/* A thread-like kernel object (smt4): its handle and finalize flag. */
#ifndef SMT4_SYS_KERNELTHREAD_H
#define SMT4_SYS_KERNELTHREAD_H

#include "common.h"

extern "C" {

struct KernelThreadObject {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u8 finalized;
};

void nn_os_Thread_FinalizeImpl(KernelThreadObject *thread);
/* One-instruction getter (armlink inlines it): the thread's kernel handle. */
u32 threadGetHandle(const KernelThreadObject *thread);
void svcCloseHandle(s32 handle);

} /* extern "C" */

#endif
