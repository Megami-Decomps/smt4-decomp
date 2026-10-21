#include "common.h"

extern "C" {

void runtimeInitializeSharedHandle(u32 arg);
void nnosInitAddressSpaceApplication(void);
void nnosInitAddressSpaceHeap(void);
void FUN_0010fb54(void);
void sysThreadStorageReset(void);

/* Runs the five-step sequence, starting from `arg`. */
void FUN_00106db8(u32 arg)
{
    runtimeInitializeSharedHandle(arg);
    FUN_0010fb54();
    nnosInitAddressSpaceHeap();
    nnosInitAddressSpaceApplication();
    sysThreadStorageReset();
}

} /* extern "C" */
