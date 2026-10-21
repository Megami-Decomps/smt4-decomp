#include "common.h"
struct ResourceOwner { u8 unk00[16]; void *resource; };
extern "C" {
void *FUN_001642e4(const char *name,u32 flags,u32 mode,u32 alignment);
/* Loads the named resource into its owner. */
void FUN_0040aa6c(ResourceOwner *owner,const char *name) { owner->resource=FUN_001642e4(name,0,1,128); }
}
