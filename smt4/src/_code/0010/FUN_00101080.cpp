/* NON_MATCHING: retail uses the ARMv5TE Thumb movs encoding and places the push before loading 12; the current MPCore flags emit mov and hoist that load. */
#include "common.h"

extern "C" void runtimeNoOpHook(u32 bytes, u32 value);

/* Apply the 12-byte runtime operation to the supplied value. */
extern "C" void FUN_00101080(u32 value)
{
    runtimeNoOpHook(12, value);
}
