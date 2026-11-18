#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionChannelApi.h"
// Existing secondary-channel local declaration debt; actual owner signatures verified.
struct ModelPropertyController;
extern "C" void modelSelectSecondaryMotion(AsdMdlNode *model, s32 index, f32 blend);
extern "C" void asdModelSelectSecondaryMotion(ModelPropertyController *controller, s32 index, f32 blend);
extern "C" void modelSetAnimationChannels(AsdMdlObject *owner, s32 index, f32 blend)
{
    modelSelectPrimaryMotion(owner->node, index, blend);
    modelSelectSecondaryMotion(owner->node, index, blend);
    // The third channel still has an existing partial controller view of this node.
    asdModelSelectSecondaryMotion(reinterpret_cast<ModelPropertyController *>(owner->node), index, blend);
}
