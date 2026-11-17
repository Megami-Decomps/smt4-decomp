#include "map/PopupStateA.h"

extern "C" {

void dialogClose(s32 arg);

void popupStateClose(void)
{
    PopupStateA *popup = g_popupState;

    popup->state = 0;
    popup->timer = 0;
    dialogClose(1);
}

} /* extern "C" */
