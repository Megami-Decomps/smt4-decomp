#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void gameRestoreWorkSave(s16 slot);

/* Script command: restores the work save slot given as argument. */
u32 scrComm_Game_RestoreWorkSave(void)
{
    gameRestoreWorkSave(scrGetArg(0));
    return 1;
}

} /* extern "C" */
