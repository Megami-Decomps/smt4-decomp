#include "common.h"

extern "C" {

int FUN_00282924(u32 btl, u32 id);
extern u32 btlGetMainState(void);

u32 FUN_003bf554(u32 id)
{
    u32 btl = btlGetMainState();

    FUN_00282924(btl, id);
    return 0;
}

} /* extern "C" */
