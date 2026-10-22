#include "ui/CommandWindow.h"

extern "C" {

void FUN_00211868(u16 value, u8 flag)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 2;
    obj->value = value;
    obj->unk11 = flag;
}

} /* extern "C" */
