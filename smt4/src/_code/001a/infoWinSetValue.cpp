#include "common.h"

struct InformationState {
    /* 0x00 */ u8 padding[0x0C];
    /* 0x0C */ u32 value;
};

extern "C" {

extern InformationState *g_infoWin;

/* Updates the information work area's current value. */
void infoWinSetValue(u32 value)
{
    g_infoWin->value = value;
}

} /* extern "C" */
