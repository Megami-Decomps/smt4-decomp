#include "ui/MessageMainA.h"

extern "C" {

/* Sets both flags of the record at 0x57F588 + 8 (the first one only if it exists). */
void FUN_002292ac(void)
{
    MessageWindowA *record;

    record = g_messageMain.banner;
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk0030 = 1;
    }
    record->unk0031 = 1;
}

} /* extern "C" */
