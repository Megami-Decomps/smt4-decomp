#include "common.h"

extern "C" {

extern s32 FUN_00426204(u32 id);
extern u32 FUN_00439870(u32 id);

/* Result of FUN_00439870 for `id`, or the error 0xC8A0D018 when FUN_00426204 reports it unusable. */
u32 FUN_00439664(u32 id)
{
    if (FUN_00426204(id) == 0) {
        return 0xC8A0D018;
    }
    return FUN_00439870(id);
}

} /* extern "C" */
