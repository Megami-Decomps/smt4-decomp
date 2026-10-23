/* NON_MATCHING: Color-vector copy uses integer registers rather than VFP; frame-test and packed-channel registers differ. */
#include "gfx/RenderSubmission.h"

extern "C" {
void FUN_00246afc(RenderSubmissionPacket *, const f32 *, const f32 *, const f32 *);
void FUN_00246bd4(void);
void asdSetNormalizedColorRgba(u32 color);
void FUN_00256a50(RenderSubmissionPacket *, u32 mode);
u32 FUN_00269694(RenderSubmissionOwner *, const u32 *color);
u32 FUN_00246c28(void);
extern EffectColorProductState DAT_004ea81c;

/* Applies the owner color, transform, and depth mode to a visible effect submission. */
void FUN_002f974c(RenderSubmission *submission)
{
    RenderSubmissionOwner *owner = submission->owner;
    RenderSubmissionPacket *packet = submission->resource->packet;
    if (submission->frame > owner->frame && owner->frame != 0) {
        return;
    }
    u32 ownerColor = FUN_00269694(owner, &owner->color);
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
    if (owner->depthEnabled != 0) {
        packet->flags |= 0x100;
    } else {
        packet->flags &= ~0x100;
    }
    FUN_00256a50(packet, (u16)owner->drawMode);
}
}
