/* NON_MATCHING: retail's first erase pass loads the member list's begin/end pair with one `ldm` (begin first); the build loads end then begin. */
#include "battle/BtlMainAccess.h"

extern "C" {

// Empty the list of battle members (retail runs the erase pass twice).
u32 FUN_0038d238(void)
{
    std::vector<u16> &members = btlGetMainStateExt()->members;
    members.clear();
    members.clear();
    return 1;
}
}
