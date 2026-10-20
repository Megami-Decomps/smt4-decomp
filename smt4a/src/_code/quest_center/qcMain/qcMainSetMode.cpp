/* Sets the quest center's mode. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

extern QcGlobals g_qcMain;

void qcMainSetMode(u8 mode)
{
    g_qcMain.mode = mode;
}

} /* extern "C" */
