#include "ui/CommandWindow.h"
#include "code/Code0020.h"

extern "C" {

void FUN_002009c4(s16 value)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 3;
    obj->value = value;
}

} /* extern "C" */
