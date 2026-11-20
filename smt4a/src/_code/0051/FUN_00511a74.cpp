/* NON_MATCHING: CriticalSection init store/move scheduling and NngxCmdState base register choice differ (-O2 candidate). */
#include "nn/os/CriticalSection.h"

extern const u32 g_nngxDefaultCommandState[2];

struct NngxCmdState {
    u32 value;
    NngxCmdState() : value(g_nngxDefaultCommandState[1]) {}
};

nn::os::CriticalSection g_nngxCriticalSection;
nn::os::CriticalSection g_nngxInterruptCriticalSection;
NngxCmdState g_nngxCommandState1;
NngxCmdState g_nngxGpu;
NngxCmdState g_nngxCommandState3;
