#include "ui/CommandWindow.h"
#include "code/Code0017_Smt4.h"

extern "C" {

int spriteStartAnimationByIndex(void *obj, int value);

void FUN_0017fbc4(void)
{
    CommandWindow *obj = g_comWin;

    g_comWin->unk08 = 4;
    spriteStartAnimationByIndex(obj->unk3C, 1);
}

} /* extern "C" */
