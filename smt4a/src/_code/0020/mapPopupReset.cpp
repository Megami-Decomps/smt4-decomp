#include "common.h"
#include "map/PopupStateA.h"

extern "C" {
void mapDialogRequestsClear(void);

void mapPopupReset(void)
{
    PopupStateA* popup = g_popupState;
    if (popup->state != 0) {
        popup->state = 0;
        popup->timer = 0;
    }
    mapDialogRequestsClear();
}
}
