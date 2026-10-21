/* NON_MATCHING: retail uses push {r4, r5, lr} where the compiled block uses push {lr}. */
#include "common.h"

extern "C" {

u32 FUN_0018b108(u32 argument0, u32 argument1, u32 argument2,
                 u32 argument3, u32 argument4, u32 argument5,
                 u32 argument6);

u32 FUN_0017e1a0(u32 argument0, u32 argument1, u32 argument2,
                 u32 argument3, u32 argument4, u32 argument5,
                 u32 argument6)
{
    return FUN_0018b108(argument0, argument1, argument2, argument3,
                        argument4, argument5, argument6);
}

}
