#include "gfx/RenderSubmission.h"

extern "C" {
void FUN_00338330(RenderSubmissionPacket *, const f32 *, const f32 *, const f32 *);
void FUN_002f8a54(void);
void asdGxSetEffectColorFromRGBA8(u32);
void FUN_002b3c9c(RenderSubmissionPacket *, u32);
u32 FUN_0038136c(RenderSubmissionOwner *, const u32 *, u32, u32);
u32 FUN_00221cb0(void);
extern EffectColorProductState DAT_006471dc;

void FUN_003b3fac(RenderSubmission *submission)
{
    RenderSubmissionOwner *owner = submission->owner;
    RenderSubmissionPacket *packet = submission->resource->packet;
    if (submission->frame > owner->frame && owner->frame)
        return;
    u32 ownerColor = FUN_0038136c(owner, &owner->color, submission->frame, owner->frame);
    asdGxSetEffectColorFromRGBA8(submission->color);
    effectColorCopy(&DAT_006471dc.color, &DAT_006471dc.factor);
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
