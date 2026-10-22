#include "common.h"

extern "C" void FUN_0010fcdc(void);
extern "C" void FUN_0010a23c(void);
extern "C" void FUN_0010a780(void);
extern "C" void FUN_0010dc18(void);

/* Initialize the three subsystems before resetting their shared state. */
extern "C" void initializeAndResetSubsystems(void)
{
    FUN_0010fcdc();
    FUN_0010a23c();
    FUN_0010a780();
    FUN_0010dc18();
}
