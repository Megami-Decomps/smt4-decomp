#include "ui/MessageMain.h"

extern "C" {

void FUN_001a1648(void)
{
    MessageWindow *target = g_messageMain.banner;

    if (g_messageMain.banner != NULL) {
        target->unk030 = 1;
    }
    target->unk031 = 1;
}

} /* extern "C" */
