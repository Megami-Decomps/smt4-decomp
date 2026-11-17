#include "map/PopupStateA.h"

extern "C" {

bool popupIsActive(void)
{
    return g_popupState->state != 0;
}

} /* extern "C" */
