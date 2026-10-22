/* NON_MATCHING: final branch targets 0x101300; no function symbol names this call target. */
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

/* Initializes runtime regions and services before entering the program. */
void entry(void)
{
    nninitRegion();
    FUN_0010236c();
    FUN_00106db4();
    asdMemInitializeDefaults();
    FUN_00100cb8();
    nninitCallStaticInitializers();
    nninitSetup();
    FUN_00101308();
}

} /* extern "C" */
