/* NON_MATCHING: retail copies the color vector with VFP; color-packing register allocation also differs. */
#include "gfx/RenderSubmission.h"

extern "C" {
void FUN_00246afc(RenderSubmissionPacket* packet, const f32* position, const f32* rotation, const f32* scale);
void FUN_00246bd4(void);
void asdSetNormalizedColorRgba(u32 color);
void FUN_00256a50(RenderSubmissionPacket* packet, u32 mode);
u32 FUN_00269694(RenderSubmissionOwner* owner, const u32* color, u32 frame, u32 duration);
u32 FUN_00246c28(void);
extern EffectColorProductState DAT_004ea81c;

// Apply the owner's color and draw settings to a current-frame submission.
void FUN_0031a70c(RenderSubmission* submission)
{
    RenderSubmissionOwner* owner = submission->owner;
    RenderSubmissionPacket* packet = submission->resource->packet;
    if (submission->frame > owner->frame && owner->frame != 0)
        return;

    u32 ownerColor = FUN_00269694(owner, &owner->color, submission->frame, owner->frame);
    asdSetNormalizedColorRgba(submission->color);
    DAT_004ea81c.factor = DAT_004ea81c.color;
    asdSetNormalizedColorRgba(ownerColor);
    FUN_00246bd4();
    u32 color = FUN_00246c28();
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    packet->color = packed.value;
    FUN_00246afc(packet, submission->position, submission->rotation, submission->scale);
    if (owner->depthEnabled)
        packet->flags |= 0x100;
    else
        packet->flags &= ~0x100;
    FUN_00256a50(packet, (u16)owner->drawMode);
}
}
