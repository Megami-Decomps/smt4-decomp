#include "common.h"

struct SleepHandlerSlot {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 unk04[0x3c];
    /* 0x40 */ u32 second;
};

struct SleepModuleState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ SleepHandlerSlot slot;
};

extern "C" {

extern SleepModuleState DAT_005891f4;

/* Stores the two words of the handler slot at offset 0x20. */
void FUN_00147328(u32 first, u32 second)
{
    SleepHandlerSlot *slot = &DAT_005891f4.slot;
    slot->first = first;
    slot->second = second;
}

} /* extern "C" */
