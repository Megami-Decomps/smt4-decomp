/* NON_MATCHING: retail error reporter receives the exact current PC; source supplies the function's entry address instead. */
#include "common.h"
extern "C" {
extern u32 DAT_0053f350;
s32 FUN_00189738(u32 *value,u32 size,u32 flags);
void FUN_0016e800(s32 result,const void *location);
/* Queries the module value and returns its high byte. */
u32 FUN_00430f5c(){u32 value=DAT_0053f350;s32 result=FUN_00189738(&value,4,0xB0000);if(result<0)FUN_0016e800(result,(const void *)&FUN_00430f5c);return value>>24;}
}
