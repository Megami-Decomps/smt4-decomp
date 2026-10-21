/* NON_MATCHING: final branch targets 0x135c28; no function symbol names this call target. */
#include "common.h"

extern "C" {

extern void nninitRegion(void);
extern void FUN_00136c40(void);
extern void FUN_0016f854(void);
extern void FUN_001396c8(void);
extern void FUN_00102c80(void);
extern void nninitCallStaticInitializers(void);
extern void nninitSetup(void);
extern void FUN_00135c30(void);

/* Initializes runtime regions and services before entering the program. */
void entry(void)
{
    nninitRegion();
    FUN_00136c40();
    FUN_0016f854();
    FUN_001396c8();
    FUN_00102c80();
    nninitCallStaticInitializers();
    nninitSetup();
    FUN_00135c30();
}

} /* extern "C" */
