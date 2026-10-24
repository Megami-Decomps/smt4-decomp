/* NON_MATCHING: retail stores each unpacked component separately and re-reads the product from memory; armcc groups the stores into VSTM and keeps the product in registers, so the VFP schedule and the color-pack register allocation differ. */
#include "gfx/RenderSubmission.h"
#include "gfx/EffectColorUnpack.h"

extern "C" {
void FUN_00338330(RenderSubmissionPacket* packet, const f32* position, const f32* rotation, const f32* scale);
void FUN_002b3c9c(RenderSubmissionPacket* packet, u32 mode);
u32 FUN_0038136c(RenderSubmissionOwner* owner, const u32* color);
extern EffectColorProductState DAT_006471dc;

// Apply the owner's color and draw settings to a current-frame submission (colors inlined).
void FUN_00391778(RenderSubmission* submission)
{
    RenderSubmissionOwner* owner = submission->owner;
    // In this variant the resource's first word is the packet pointer.
    RenderSubmissionPacket* packet = (RenderSubmissionPacket*)submission->resource->unk00;
    if (submission->frame > owner->frame && owner->frame != 0)
        return;

    u32 ownerColor = FUN_0038136c(owner, &owner->color);
    effectColorUnpack(submission->color, &DAT_006471dc.factor);
    effectColorUnpack(ownerColor, &DAT_006471dc.color);
    DAT_006471dc.color.red *= DAT_006471dc.factor.red;
    DAT_006471dc.color.green *= DAT_006471dc.factor.green;
    DAT_006471dc.color.blue *= DAT_006471dc.factor.blue;
    DAT_006471dc.color.alpha *= DAT_006471dc.factor.alpha;
    u32 color = effectColorPack(&DAT_006471dc.color);
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    packet->color = packed.value;
    if (packed.channels.alpha != 0) {
        FUN_00338330(packet, submission->position, submission->rotation, submission->scale);
        if (owner->depthEnabled)
            packet->flags |= 0x100;
        else
            packet->flags &= ~0x100;
        FUN_002b3c9c(packet, (u16)owner->drawMode);
    }
}
}
