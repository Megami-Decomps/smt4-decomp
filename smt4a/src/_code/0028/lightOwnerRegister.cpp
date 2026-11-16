#include "shard/S1Light.h"

extern "C" {

void sceneNodeCollectionRegisterGroup(LightNode *node, s32 kind);

/* Clear the pending flag and register the owner's node as a light of the given kind. */
void lightOwnerRegister(LightOwner *owner, s32 kind)
{
    owner->flags &= ~LIGHT_OWNER_PENDING;
    sceneNodeCollectionRegisterGroup(owner->node, kind);
}

} /* extern "C" */
