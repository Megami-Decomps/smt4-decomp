/* NON_MATCHING: native dynamic scalar initialization uses different load/store registers. */
#include "nn/os/CriticalSection.h"

extern const u32 g_moduleDefaultState[2];
u32 g_moduleInitialState = g_moduleDefaultState[1];
nn::os::CriticalSection g_moduleStateCriticalSection;
