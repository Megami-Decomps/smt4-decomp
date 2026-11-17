#include "ui/UiSpriteApi.h"
#include "camp/CampState.h"

extern "C" {

/* Reports whether the camp exists and is in state forty-eight. */
bool FUN_0017fb54(void)
{
    CampState *work = g_camp;
    if (work == NULL) {
        return false;
    }
    return work->state == 48;
}

} /* extern "C" */
