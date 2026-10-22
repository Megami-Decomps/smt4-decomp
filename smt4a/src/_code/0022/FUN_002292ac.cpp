#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobalsA g_messageMain;

/* Sets both flags of the record at 0x57F588 + 8 (the first one only if it exists). */
void FUN_002292ac(void)
{
    MessagePanelA *record;

    record = g_messageMain.panel;
    if (g_messageMain.panel != NULL) {
        g_messageMain.panel->unk30 = 1;
    }
    record->unk31 = 1;
}

} /* extern "C" */
