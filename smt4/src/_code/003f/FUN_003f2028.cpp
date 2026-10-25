/* NON_MATCHING: native module constructors differ in lock-address and zero-store scheduling. */
#include "nn/os/CriticalSection.h"

struct AppletSleepModuleState {
    explicit AppletSleepModuleState(s64 initialState) : state(initialState) {}
    /* 0x00 */ u8 sleepPending;
    /* 0x01 */ u8 unk01[0x8f];
    /* 0x90 */ s64 state;
};
struct AppletSleepModuleCounters {
    AppletSleepModuleCounters(u32 first, u32 second) : first(first), second(second) {}
    u32 first;
    u32 second;
};
typedef char AppletSleepModuleStateSizeCheck[sizeof(AppletSleepModuleState) == 0x98 ? 1 : -1];
typedef char AppletSleepModuleCountersSizeCheck[sizeof(AppletSleepModuleCounters) == 8 ? 1 : -1];

AppletSleepModuleState g_appletSleepModuleState(-1);
AppletSleepModuleCounters g_appletSleepModuleCounters(0, 0);
nn::os::CriticalSection g_appletSleepCriticalSection;
