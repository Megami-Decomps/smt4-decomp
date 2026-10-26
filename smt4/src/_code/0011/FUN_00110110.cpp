#include "common.h"

struct SleepHandlerSlot {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 unk04[0x3c];
    /* 0x40 */ u32 second;
};

struct SleepModuleState {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ SleepHandlerSlot slot;
};

extern "C" {

extern SleepModuleState g_appletSleepModuleState;

/* Stores the two words of the handler slot at offset 0x2c. */
void FUN_00110110(u32 first, u32 second)
{
    SleepHandlerSlot *slot = &g_appletSleepModuleState.slot;
    slot->first = first;
    slot->second = second;
}

} /* extern "C" */
