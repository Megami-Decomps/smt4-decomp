#include "common.h"

extern "C" {

void FUN_0010f930(u32 arg);
void nnosInitAddressSpaceApplication(void);
void nnosInitAddressSpaceHeap(void);
void FUN_0010fb54(void);
void FUN_00138350(void);

/* Runs the five-step sequence, starting from `arg`. */
void FUN_00106db8(u32 arg)
{
    FUN_0010f930(arg);
    FUN_0010fb54();
    nnosInitAddressSpaceHeap();
    nnosInitAddressSpaceApplication();
    FUN_00138350();
}

} /* extern "C" */
