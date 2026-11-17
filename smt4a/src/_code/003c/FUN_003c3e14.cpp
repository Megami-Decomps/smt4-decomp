#include "ui/MessageMainA.h"
#include "shard/Shard003C.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

void FUN_003c3e14(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk0030 = 0;
    }
}

} /* extern "C" */
