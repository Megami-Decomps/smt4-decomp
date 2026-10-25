#include "ui/CommandWindow.h"
#include "gamedata/SaveLoadProcess.h"

extern "C" {

void FUN_001ecb54(s32 value)
{
    CommandWindow *obj = g_comWin;

    g_comWin->state = 5;
    obj->value = value;
}

} /* extern "C" */
