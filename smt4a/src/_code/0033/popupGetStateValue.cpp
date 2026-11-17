#include "common.h"
#include "map/PopupStateA.h"

extern "C" {

s8 popupGetStateValue(void)
{
    return g_popupState->requested;
}

} /* extern "C" */
