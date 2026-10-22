#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_001a1648(void)
{
    MessagePanel *target = g_messageMain.banner;

    if (g_messageMain.banner != NULL) {
        target->unk30 = 1;
    }
    target->unk31 = 1;
}

} /* extern "C" */
