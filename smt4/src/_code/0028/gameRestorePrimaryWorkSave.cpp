/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void gameRestoreWorkSave(u32);

void gameRestorePrimaryWorkSave(void)
{
    gameRestoreWorkSave(0);
}

}
