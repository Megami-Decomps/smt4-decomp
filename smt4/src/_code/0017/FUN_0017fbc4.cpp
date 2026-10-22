#include "ui/CommandWindow.h"

extern "C" {

int FUN_002bee58(void *obj, int value);

void FUN_0017fbc4(void)
{
    CommandWindow *obj = g_comWin;

    g_comWin->unk08 = 4;
    FUN_002bee58(obj->unk3C, 1);
}

} /* extern "C" */
