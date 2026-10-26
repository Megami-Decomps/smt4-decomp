#include "common.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
extern "C" {
void *FUN_0035a574(u32 first,u32 second,u32 third,u32 fourth,u32 option);
/* Create a list box (the job handle its callers keep) with its optional mode disabled. */
u32 FUN_0035a404(u32 first,u32 second,u32 third,u32 fourth) { return reinterpret_cast<u32>(FUN_0035a574(first,second,third,fourth,0)); }
}
