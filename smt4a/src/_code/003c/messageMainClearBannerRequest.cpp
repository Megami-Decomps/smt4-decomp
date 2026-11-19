#include "ui/MessageMainA.h"
#include "shard/Shard003C.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

void messageMainClearBannerRequest(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk0030 = 0;
    }
}

} /* extern "C" */
