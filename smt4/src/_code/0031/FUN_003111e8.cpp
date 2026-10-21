#include "shard/Scene43dcf0.h"

extern "C" {

int partyPanelSetState(int a, int b);

void FUN_003111e8(int flag)
{
    if (g_partyPanel == NULL) {
        return;
    }
    if (flag != 0) {
        partyPanelSetState(8, 1);
        return;
    }
    partyPanelSetState(0x16, 1);
}

} /* extern "C" */
