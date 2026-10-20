/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_002b8244(u32 a);
void FUN_00297050(u32 a);
void FUN_002c5758(u32 a);
void gameDataFlagsClearAndRefresh(u32 a);

void FUN_002c5700(void)
{
    FUN_002b8244(0);
    FUN_00297050(1);
    FUN_002c5758(4);
    gameDataFlagsClearAndRefresh(4);
}

}
