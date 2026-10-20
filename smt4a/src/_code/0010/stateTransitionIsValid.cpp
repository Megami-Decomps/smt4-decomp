#include "common.h"

extern "C" {

/* Returns 1 when the state machine may move from state `from` to state `to`:
 * 0 -> 1, 1 -> 2/3/4, and 2/3/4 -> 0. */
u32 stateTransitionIsValid(s32 from, s32 to)
{
    if (from == 0) {
        if (to == 1) {
            return 1;
        }
    } else if (from == 1) {
        if (to == 2 || to == 3 || to == 4) {
            return 1;
        }
    } else if ((from == 2 || from == 3 || from == 4) && to == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
