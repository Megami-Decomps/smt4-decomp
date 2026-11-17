#include "ui/UiSpriteApi.h"
#include "ui/CommandWindow.h"
#include "code/Code0017_Smt4.h"

extern "C" {


void FUN_0017fbc4(void)
{
    CommandWindow *obj = g_comWin;

    g_comWin->phase = 4;
    spriteStartAnimationByIndex(&obj->sprites[0], 1);
}

} /* extern "C" */
