#ifndef ASD_ENTRY_SYSTEM_H
#define ASD_ENTRY_SYSTEM_H
#include "common.h"
struct EntrySystemConfig {
    u8 unk00[8]; // 0x00
    u32 first; // 0x08
    u32 second; // 0x0C
};
struct EntrySystemCounters {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};
struct UnitScaleState {
    u8 unk00[0x14]; // 0x00
};
struct UnsetEntryState {
    u8 unk00[0x20]; // 0x00
};
struct EntrySystemState {
    f32 position[3]; // 0x00
    u8 unk0C[0x18]; // 0x0C
    u32 state; // 0x24
    u32 enabledA; // 0x28
    u32 enabledB; // 0x2C
    u32 enabledC; // 0x30
    UnitScaleState animations[10]; // 0x34
};
#endif
