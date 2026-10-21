#include "common.h"

struct PopupState {
    u32 active; // 0x00
    u32 unk04;  // 0x04
};

extern "C" {
extern PopupState* g_popupState;
void FUN_002d868c(void);

void mapPopupReset(void)
{
    PopupState* popup = g_popupState;
    if (popup->active != 0) {
        popup->active = 0;
        popup->unk04 = 0;
    }
    FUN_002d868c();
}
}
