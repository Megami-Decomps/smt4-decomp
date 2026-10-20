#include "shard/Scene43dcf0.h"

extern "C" {

int FUN_00293348(int a, int b);

void FUN_003111e8(int flag)
{
    if (g_partyPanel == NULL) {
        return;
    }
    if (flag != 0) {
        FUN_00293348(8, 1);
        return;
    }
    FUN_00293348(0x16, 1);
}

} /* extern "C" */
