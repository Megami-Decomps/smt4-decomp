#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState DAT_005b4028;

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_001b4e80(void)
{
    if (DAT_005b4028.depth != 0) {
        if (--DAT_005b4028.depth == 0) {
            DAT_005b4028.target->value = DAT_005b4028.previous;
        }
    }
}

} /* extern "C" */
