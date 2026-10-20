#include "common.h"

extern "C" {

extern s32 DAT_005b40e0;

/* Adds `amount` to the word at 0x5B40E0. */
void asdModelAdvanceCommandCursor(s32 amount)
{
    DAT_005b40e0 = amount + DAT_005b40e0;
}

} /* extern "C" */
