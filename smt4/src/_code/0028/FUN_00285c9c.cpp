/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void gameRestoreWorkSave(u32);

void FUN_00285c9c(void)
{
    gameRestoreWorkSave(0);
}

}
