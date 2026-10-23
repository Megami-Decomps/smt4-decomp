/* NON_MATCHING: retail uses VFP for the color-vector copy; frame-test and packed-channel registers differ. */
#include "gfx/RenderSubmission.h"

extern "C" {
void FUN_00338330(RenderSubmissionPacket *, const f32 *, const f32 *, const f32 *);
void FUN_002f8a54();
void asdGxSetEffectColorFromRGBA8(u32 color);
void FUN_002b3c9c(RenderSubmissionPacket *, u32 mode);
u32 FUN_0038136c(RenderSubmissionOwner *, const u32 *color);
u32 FUN_00221cb0();
extern EffectColorProductState DAT_006471dc;

/* Apply the owner's color, transform and depth mode while its frame is active. */
void FUN_00391288(RenderSubmission *submission)
{
    RenderSubmissionOwner *owner = submission->owner;
    RenderSubmissionPacket *packet = submission->resource->packet;
    if (submission->frame > owner->frame && owner->frame != 0)
        return;
    u32 ownerColor = FUN_0038136c(owner, &owner->color);
    asdGxSetEffectColorFromRGBA8(submission->color);
    DAT_006471dc.factor = DAT_006471dc.color;
    asdGxSetEffectColorFromRGBA8(ownerColor);
    FUN_002f8a54();
    u32 color = FUN_00221cb0();
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    packet->color = packed.value;
    FUN_00338330(packet, submission->position, submission->rotation, submission->scale);
    if (owner->depthEnabled)
        packet->flags |= 0x100;
    else
        packet->flags &= ~0x100;
    FUN_002b3c9c(packet, static_cast<u16>(owner->drawMode));
}
}
