/* NON_MATCHING: paired-lock move/store order and GPU scalar address walking differ. */
#include "nn/os/CriticalSection.h"

extern const u32 g_nngxDefaultCommandState[2];

nn::os::CriticalSection g_nngxCriticalSection;
nn::os::CriticalSection g_nngxInterruptCriticalSection;
u32 g_nngxCommandState1 = g_nngxDefaultCommandState[1];
u32 g_nngxGpu = g_nngxDefaultCommandState[1];
u32 g_nngxCommandState3 = g_nngxDefaultCommandState[1];
