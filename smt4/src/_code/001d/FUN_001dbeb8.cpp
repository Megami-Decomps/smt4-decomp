#include "common.h"

struct CampState {
    u8 unk000[0xD2C];  // 0x000
    s32 state;         // 0xD2C
    u8 unkD30[4];      // 0xD30
    s32 substate;      // 0xD34
};

extern "C" {

s32 campCecEditExists(void);
s32 campCecEditGetFlag125(void);
void campCecEditDestroy(void);
void buttonHelpSetPreset(s32 preset);
void FUN_0026b9bc(void);
void FUN_0028a924(s32 a, s32 b, s32 c);
void FUN_0028a368(s32 a);
void FUN_002d67fc(s32 a);

/* Closes the camp CEC edit screen once it signals completion; returns 2 when the camp state moved to 6. */
s32 FUN_001dbeb8(CampState *camp)
{
    s32 result = 0;

    if (campCecEditExists() == 0) {
        FUN_002d67fc(0);
    } else if (campCecEditGetFlag125() != 0) {
        campCecEditDestroy();
        buttonHelpSetPreset(3);
        camp->state = 6;
        camp->substate = 0;
        FUN_0026b9bc();
        FUN_0028a924(1, 0, -1);
        FUN_0028a368(1);
        result = 2;
    }
    return result;
}

} /* extern "C" */
