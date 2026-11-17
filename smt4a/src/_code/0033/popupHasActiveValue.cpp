#include "common.h"
#include "map/PopupStateA.h"

extern "C" {

s32 popupHasActiveValue(void)
{
    s32 i = 0;
    while (i < 16) {
        PopupStateA *popup = g_popupState;
        if (popup->pending[i] != 0 || popup->pending[i + 1] != 0) {
            return 1;
        }
        i += 2;
    }
    return 0;
}

} /* extern "C" */
