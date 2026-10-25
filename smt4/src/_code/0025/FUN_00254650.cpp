/* NON_MATCHING: zoom helper merges eye arguments; VFP constants and scale-load scheduling differ. */
#include "camp/CampCec/OutfitPreview.h"
/* Interaction fields extend beyond the shared model-preview prefix. */
struct PreviewInteractionView {
    OutfitPreview preview;
    u32 unk20;
    u32 animation;
    s32 zoomSteps;
};
struct PreviewAnimationIds { u32 values[3]; };
typedef char PreviewInteractionOffsets[(offsetof(PreviewInteractionView, animation) == 0x24 && offsetof(PreviewInteractionView, zoomSteps) == 0x28) ? 1 : -1];
extern "C" {
extern const PreviewAnimationIds DAT_004028e0;
void FUN_0020ffe8(void *model, u32 animation, f32 start, f32 blend);
void nodeGroupSetScale(void *model, f32 x, f32 y, f32 z);
void statusCameraSetEye(f32 x, f32 y, f32 z);
void objSetAnglesDegrees(void *model, const f32 *angles);
}
static inline void updatePreviewZoom(PreviewInteractionView *work)
{
    nodeGroupSetScale(work->preview.modelGroup, work->preview.scale, work->preview.scale, work->preview.scale);
    f32 eyeY = 6.3f;
    if (work->zoomSteps > 0)
        eyeY += static_cast<f32>(work->zoomSteps) * 0.08f;
    statusCameraSetEye(0.0f, eyeY, 4.5f);
}
extern "C" void FUN_00254650(PreviewInteractionView *work, u32 action)
{
    switch (action) {
    case 0:
        if (work->preview.scale < 0.03f) {
            work->preview.scale += 0.0005f;
            ++work->zoomSteps;
        }
        updatePreviewZoom(work);
        break;
    case 1:
        if (work->preview.scale > 0.012f) {
            work->preview.scale -= 0.0005f;
            --work->zoomSteps;
        }
        updatePreviewZoom(work);
        break;
    case 2:
        work->preview.rotation[1] += 5.0f;
        if (work->preview.rotation[1] > 360.0f)
            work->preview.rotation[1] -= 360.0f;
        objSetAnglesDegrees(work->preview.modelGroup, work->preview.rotation);
        break;
    case 3:
        work->preview.rotation[1] -= 5.0f;
        if (work->preview.rotation[1] < 0.0f)
            work->preview.rotation[1] += 360.0f;
        objSetAnglesDegrees(work->preview.modelGroup, work->preview.rotation);
        break;
    case 4:
        PreviewAnimationIds ids = DAT_004028e0;
        FUN_0020ffe8(work->preview.modelGroup, ids.values[work->animation], 0.0f, 0.0f);
        break;
    }
}
