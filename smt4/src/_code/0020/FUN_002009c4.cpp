#include "ui/CommandWindow.h"
#include "util/FUN_002009c4.h"

extern "C" {

void FUN_002009c4(u16 value)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 3;
    obj->value = value;
}

} /* extern "C" */
