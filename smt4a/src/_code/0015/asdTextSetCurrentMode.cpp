#include "common.h"

extern "C" {

struct TextState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 value;
};
extern TextState g_inputResetState;
void asdTextSetCurrentMode(u32 value)
{
    g_inputResetState.value = value;
}

} /* extern "C" */
