#include "common.h"

extern "C" {
void FUN_00146eb0();
void FUN_0013eb10();
void FUN_0013f53c();
void FUN_001432e4();
}

// Initialize the three subsystems before resetting their shared state.
extern "C" void systemInitializeAndResetSharedState()
{
    FUN_00146eb0();
    FUN_0013eb10();
    FUN_0013f53c();
    FUN_001432e4();
}
