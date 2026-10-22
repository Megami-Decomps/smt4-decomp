#include "ui/CommandWindow.h"

extern "C" {

void FUN_002cd750(u16 value)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 4;
    obj->value = value;
}

} /* extern "C" */
