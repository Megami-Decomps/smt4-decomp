/* NON_MATCHING: the loop now stays a plain 24-iteration store loop like retail (slots are default-constructed objects), but the index and the zero swap r0/r1 and the zero is copied (mov r1, r0). */
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

struct EnvironmentBinding {
    const AsdEnvironmentCommands *commands;
    EnvironmentBinding() : commands(NULL) {}
};

extern "C" {

extern EnvironmentBinding DAT_004e9dc8[0x18];

/* Clears the 24-entry table of bound environment command blocks. */
void asdModelClearTable(void)
{
    for (s32 i = 0; i < 0x18; i++) {
        DAT_004e9dc8[i] = EnvironmentBinding();
    }
}

} /* extern "C" */
