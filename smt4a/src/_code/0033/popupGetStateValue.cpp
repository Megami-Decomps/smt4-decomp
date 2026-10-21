#include "common.h"

extern "C" {

struct PopupState {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s8 value;
};
extern PopupState *g_popupState;

s8 popupGetStateValue(void)
{
    return g_popupState->value;
}

} /* extern "C" */
