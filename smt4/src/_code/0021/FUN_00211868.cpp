#include "ui/CommandWindow.h"
#include "gamedata/SaveLoadProcess.h"

extern "C" {

void FUN_00211868(s16 value, u8 flag)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 2;
    obj->value = value;
    obj->unk11 = flag;
}

} /* extern "C" */
