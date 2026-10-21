#include "common.h"

struct HakaiEntry {
    u8 active;                 // 0x00
    u8 padding01[3];
    u32 value04;               // 0x04
    u32 value08;               // 0x08
    f32 value0C;               // 0x0C
    f32 value10;               // 0x10
    f32 value14;               // 0x14
    f32 value18;               // 0x18
    u32 value1C;               // 0x1C
    u8 flag20;                 // 0x20
    u8 preserved21[7];
    u8 flag28;                 // 0x28
    u8 padding29[3];
    u32 value2C;               // 0x2C
    u8 flag30;                 // 0x30
    u8 padding31[3];
    u32 value34;               // 0x34
    u32 preserved38;           // 0x38
    u32 value3C;               // 0x3C
    u32 value40;               // 0x40
    u32 value44;               // 0x44
    u32 value48;               // 0x48
    u32 value4C;               // 0x4C
    u16 value50;               // 0x50
    u16 value52;               // 0x52; stride 0x54
};

struct HakaiState {
    u32 value00;               // 0x00
    u16 value04;               // 0x04
    u16 value06;               // 0x06
    u16 value08;               // 0x08
    u16 value0A;               // 0x0A
    u32 preserved0C;           // 0x0C
    u32 value10;               // 0x10
    u8 flag14;                 // 0x14
    u8 padding15[3];
    u32 value18;               // 0x18
    u32 values1C[16];          // 0x1C
    HakaiEntry entries[16];    // 0x5C
};

extern "C" {
extern HakaiState* g_mapHakai;



void mapHakaiReset(void) {
    const f32 initialValue = 0.0f;
    HakaiState* state = g_mapHakai;
    state->value00 = 0;
    state->value04 = 0;
    state->value06 = 0;
    state->value08 = 0;
    state->value0A = 0;
    state->flag14 = 0;
    state->value18 = 0;
    state->value10 = 0;

    for (s32 index = 0; index < 16; ++index) {
        HakaiEntry& entry = state->entries[index];
        entry.active = 0;
        entry.value04 = 0;
        entry.value08 = 0;
        entry.value0C = initialValue;
        entry.value10 = initialValue;
        entry.value14 = initialValue;
        entry.value18 = initialValue;
        entry.value1C = 0;
        entry.flag20 = 0;
        entry.flag28 = 0;
        entry.value2C = 0;
        entry.flag30 = 0;
        entry.value34 = 0;
        entry.value3C = 0;
        entry.value44 = 0;
        entry.value40 = 0;
        entry.value48 = 0;
        entry.value4C = 0;
        entry.value50 = 0;
        entry.value52 = 0;
    }

    state = g_mapHakai;
    state->values1C[0] = 0;
    state->values1C[1] = 0;
    state->values1C[2] = 0;
    state->values1C[3] = 0;
    state->values1C[4] = 0;
    state->values1C[5] = 0;
    state->values1C[6] = 0;
    state->values1C[7] = 0;
    state->values1C[8] = 0;
    state->values1C[9] = 0;
    state->values1C[10] = 0;
    state->values1C[11] = 0;
    state->values1C[12] = 0;
    state->values1C[13] = 0;
    state->values1C[14] = 0;
    state->values1C[15] = 0;
}
}
