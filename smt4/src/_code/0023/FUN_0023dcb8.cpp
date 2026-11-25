#include "battle/btlAction.h"
#include "code/Code0023.h"

/* Tests the active quest's flag. The linker removes the tail branch to the next function. */
extern "C" s32 FUN_0023dcb8(void)
{
    return questCurrentIsFlagged();
}
