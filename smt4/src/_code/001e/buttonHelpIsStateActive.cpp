#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

u8 buttonHelpIsStateActive(void)
{
    return g_buttonHelp.work->state == 2;
}

} /* extern "C" */
