#include "shard/Shard003A.h"

extern "C" {

extern StateHolder1C *g_partyPanel;

void FUN_003a7788(void)
{
    if (g_partyPanel != NULL) {
        g_partyPanel->unkA04 = 0;
    }
}

} /* extern "C" */
