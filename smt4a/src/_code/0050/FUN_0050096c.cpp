/* NON_MATCHING: retail error reporter receives the exact current PC; source supplies the function's entry address instead. */
#include "common.h"
struct ResourceHolder {u32 unk00;void *resource;};
extern "C" {
void FUN_0016e800(s32 result,const void *location);
/* Reports a missing resource before returning the held pointer. */
void *FUN_0050096c(ResourceHolder *holder){
    if(holder->resource==NULL)FUN_0016e800((s32)0xE0A046DA,(const void *)&FUN_0050096c);
    return holder->resource;
}
}
