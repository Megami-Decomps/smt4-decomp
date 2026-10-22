#include "shard/Shard003C.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

void FUN_003c1060(void)
{
    if (g_messageMain.panel != NULL) {
        g_messageMain.panel->unk30 = 1;
    }
}

} /* extern "C" */
