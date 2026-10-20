#include "shard/Shard003C.h"

extern "C" {

extern StateHolder1C *g_partyPanel;

void FUN_003c1094(s32 flag)
{
    u32 value;

    if (g_partyPanel != NULL) {
        value = (flag != 0) ? 8 : 0x18;
        g_partyPanel->unk20 = value;
    }
}

} /* extern "C" */
