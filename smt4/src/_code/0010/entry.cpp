/* NON_MATCHING: retail ends with a tail `b svcExitProcess` (no prologue); built calls it with bl, which the linker emulation turns into the inlined svc. */
#include "common.h"

extern "C" {

extern void nninitRegion(void);
extern void FUN_0010236c(void);
extern void FUN_00106db4(void);
extern void asdMemInitializeDefaults(void);
extern void FUN_00100cb8(void);
extern void nninitCallStaticInitializers(void);
extern void nninitSetup(void);
extern void FUN_00101308(void);
extern void svcExitProcess(void);

/* Initializes runtime regions and services before entering the program. */
__declspec(noreturn) void entry(void)
{
    nninitRegion();
    FUN_0010236c();
    FUN_00106db4();
    asdMemInitializeDefaults();
    FUN_00100cb8();
    nninitCallStaticInitializers();
    nninitSetup();
    FUN_00101308();
    svcExitProcess();
}

} /* extern "C" */
