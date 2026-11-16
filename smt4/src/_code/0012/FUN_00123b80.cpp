#include "common.h"

extern "C" void asdGxCommandListFinishCurrent(void);

// Forward the graphics-context update callback.
extern "C" void FUN_00123b80(void)
{
    asdGxCommandListFinishCurrent();
}
