#include "shard/S1Light.h"

extern "C" {

void FUN_00280c70(LightNode *node, s32 kind);

/* Clear the pending flag and register the owner's node as a light of the given kind. */
void FUN_00280c5c(LightOwner *owner, s32 kind)
{
    owner->flags &= ~LIGHT_OWNER_PENDING;
    FUN_00280c70(owner->node, kind);
}

} /* extern "C" */
