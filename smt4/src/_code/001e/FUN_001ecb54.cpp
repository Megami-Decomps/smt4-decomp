#include "ui/CommandWindow.h"

extern "C" {

void FUN_001ecb54(u16 value)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 5;
    obj->value = value;
}

} /* extern "C" */
