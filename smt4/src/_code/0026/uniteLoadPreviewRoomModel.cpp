#include "camp/Unite/UniteGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

extern "C" {
void modelSetScale(AsdMdlNode *node, f32 frame);
void modelOwnerApplyAnimationTime(AsdMdlObject *model, f32 value);

// Load the fusion-room model and synchronize it with the preview sound.
void uniteLoadPreviewRoomModel(void)
{
    UniteWork *work = g_unite;
    f32 value = sndObjectForwardField8(static_cast<const AsdMdlObject *>(work->preview.previewSound));
    AsdMdlObject **slot = &work->preview.previewModel;
    if (*slot == NULL) {
        *slot = asdMdlManagerCreateLoaded("camp/jakyou_all_mido.bam", 7);
        lightOwnerRegister(*slot, 1);
        AsdMdlObject *model = *slot;
        if (model->flags & 4) {
            model->flags &= ~4;
            model->node->animationSpeed = 1.0f;
            modelSetScale(model->node, model->node->speed);
        }
        modelOwnerApplyAnimationTime(*slot, value);
    }
}
}
