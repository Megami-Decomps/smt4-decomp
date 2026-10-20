#include "common.h"

extern "C" {

int FUN_002a215c(u32 a, int b);
int FUN_002c4038(int obj);
int FUN_0037b140(int slot);
int FUN_0037bd18(int slot);
int nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(int player);
extern u32 FUN_002a2174(void);

void FUN_0037f700(int player)
{
    u32 a;
    u32 i;

    *(u8 *)(player + 0xf) = 1;
    nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(player);
    if (*(char *)(player + 0xc) != 0) {
        a = FUN_002a2174();
        FUN_002a215c(a, player + 0x44);
        *(u8 *)(player + 0xc) = 0;
    }
    i = 0;
    do {
        FUN_0037b140(player + i * 0xc + 0x130);
        FUN_0037bd18(player + i * 0x10 + 0xf0);
        i = i + 1;
    } while (i < 4);
    FUN_002c4038(player);
}

} /* extern "C" */
