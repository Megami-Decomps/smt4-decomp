/* NON_MATCHING: native two-lock construction moves r0 before each zero store rather than after. */
#include "nn/os/CriticalSection.h"

nn::os::CriticalSection g_asdCecMessageBoxCriticalSection;
nn::os::CriticalSection g_asdCecMessageBoxStateCriticalSection;
