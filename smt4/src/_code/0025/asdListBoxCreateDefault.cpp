#include "common.h"
#include "shard/asdListBoxCreateDefault.h"
extern "C" {
void *asdListBoxCreate(u32 first,u32 second,u32 third,u32 fourth,u32 option);
/* Create a list box with its optional mode disabled. */
void *asdListBoxCreateDefault(u32 first,u32 second,u32 third,u32 fourth) { return asdListBoxCreate(first,second,third,fourth,0); }
}
