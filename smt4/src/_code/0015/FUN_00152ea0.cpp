#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState DAT_00465120;

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_00152ea0(void)
{
    if (DAT_00465120.depth != 0) {
        if (--DAT_00465120.depth == 0) {
            DAT_00465120.target->value = DAT_00465120.previous;
        }
    }
}

} /* extern "C" */
