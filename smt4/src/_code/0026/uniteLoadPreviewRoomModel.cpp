#include "camp/Unite/UniteGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

// The playback fields follow the shared model-node prefix.
struct UniteModelPlayback : AsdMdlNode {
    u8 unk30[0x44];
    f32 speed; // 0x74
    f32 frame; // 0x78
};

extern "C" {
f32 sndObjectForwardField8(void *sound);
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, s32 bank);
void modelSetScale(AsdMdlNode *node, f32 frame);
void FUN_00210194(AsdMdlObject *model, f32 value);

// Load the fusion-room model and synchronize it with the preview sound.
void uniteLoadPreviewRoomModel(void)
{
    UniteWork *work = g_unite;
    f32 value = sndObjectForwardField8(work->preview.previewSound);
    AsdMdlObject **slot = &work->preview.previewModel;
    if (*slot == NULL) {
        *slot = asdMdlManagerCreateLoaded("camp/jakyou_all_mido.bam", 7);
        lightOwnerRegister(*slot, 1);
        AsdMdlObject *model = *slot;
        if (model->flags & 4) {
            model->flags &= ~4;
            UniteModelPlayback *playback = (UniteModelPlayback *)model->node;
            playback->speed = 1.0f;
            modelSetScale(model->node, ((UniteModelPlayback *)model->node)->frame);
        }
        FUN_00210194(*slot, value);
    }
}
}
