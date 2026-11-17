#include "common.h"
#include "map/PopupStateA.h"

extern "C" {

/* Raises the pending request flag on the popup work. */
void popupRequest(void)
{
    g_popupState->requested = 1;
}
}
