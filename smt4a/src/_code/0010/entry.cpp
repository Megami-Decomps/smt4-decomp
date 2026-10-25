/* NON_MATCHING: retail ends with a tail `b svcExitProcess` (no prologue); built calls it with bl, which the linker emulation turns into the inlined svc. */
#include "common.h"

extern "C" {

extern void nninitRegion(void);
extern void FUN_00136c40(void);
extern void FUN_0016f854(void);
extern void asdMemoryInitializeDefault(void);
extern void FUN_00102c80(void);
extern void nninitCallStaticInitializers(void);
extern void nninitSetup(void);
extern void FUN_00135c30(void);
extern void svcExitProcess(void);

/* Initializes runtime regions and services before entering the program. */
__declspec(noreturn) void entry(void)
{
    nninitRegion();
    FUN_00136c40();
    FUN_0016f854();
    asdMemoryInitializeDefault();
    FUN_00102c80();
    nninitCallStaticInitializers();
    nninitSetup();
    FUN_00135c30();
    svcExitProcess();
}

} /* extern "C" */
