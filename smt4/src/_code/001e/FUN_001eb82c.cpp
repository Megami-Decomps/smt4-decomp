#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

u8 FUN_001eb82c(void)
{
    return g_buttonHelp.work->state == 2;
}

} /* extern "C" */
