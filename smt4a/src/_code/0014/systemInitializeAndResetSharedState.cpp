#include "common.h"

extern "C" {
void FUN_00146eb0();
void FUN_0013eb10();
void touchInputReset();
void accelerometerInitialize();
}

// Initialize the three subsystems before resetting their shared state.
extern "C" void systemInitializeAndResetSharedState()
{
    FUN_00146eb0();
    FUN_0013eb10();
    touchInputReset();
    accelerometerInitialize();
}
