#include "common.h"
struct ResourceOwner { u8 unk00[56]; void *resource; };
extern "C" {
void *asdLoadFileSyncNoContext(const char *name,u32 flags,u32 mode,u32 alignment);
/* Loads the named resource into its owner. */
void resourceOwnerLoadNamed(ResourceOwner *owner,const char *name) { owner->resource=asdLoadFileSyncNoContext(name,0,1,128); }
}
