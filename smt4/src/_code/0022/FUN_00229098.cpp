/* NON_MATCHING: loop shape: retail clears entry 0 first and then runs the (2x unrolled) loop from entry 1 with the index scaled by 0x288 each time; written that way the build rebases the induction variable (mov r3, #648). */
#include "battle/ListedEntry.h"

extern "C" {

/* Clears the 0x400 flag of every battle entry. */
void FUN_00229098(ListedState **battle)
{
    for (s32 i = 0; i < 109; i++) {
        (*battle)->entries[i].flags &= ~0x400u;
    }
}

} /* extern "C" */
