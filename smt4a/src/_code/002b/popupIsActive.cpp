#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {

extern LmapEventA *g_popupState;

bool popupIsActive(void)
{
    return g_popupState->state != 0;
}

} /* extern "C" */
