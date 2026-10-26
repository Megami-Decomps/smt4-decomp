#include "shard/Shard003C.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

void FUN_003c3e14(void)
{
    if (g_messageMain.panel != NULL) {
        g_messageMain.panel->unk30 = 0;
    }
}

} /* extern "C" */
