#include "shard/Shard003B.h"

extern "C" {

extern StateHolder1C *g_partyPanel;

s32 FUN_003b6fc4(void)
{
    s32 value = 0;

    if (g_partyPanel != NULL) {
        value = g_partyPanel->unk3C;
    }
    return value;
}

} /* extern "C" */
