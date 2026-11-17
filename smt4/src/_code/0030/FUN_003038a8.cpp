/* NON_MATCHING: retail stores each unpacked component separately and re-reads the product from memory; armcc groups the stores into VSTM and keeps the product in registers, so the VFP schedule and the color-pack register allocation differ. */
#include "gfx/RenderSubmission.h"
#include "gfx/EffectColorUnpack.h"

extern "C" {
void FUN_00246afc(RenderSubmissionPacket* packet, const f32* position, const f32* rotation, const f32* scale);
void FUN_00256a50(RenderSubmissionPacket* packet, u32 mode);
u32 FUN_00269694(RenderSubmissionOwner* owner, const u32* color);
extern EffectColorProductState g_vectorScratch;

// Apply the owner's color and draw settings to a current-frame submission (colors inlined).
void FUN_003038a8(RenderSubmission* submission)
{
    RenderSubmissionOwner* owner = submission->owner;
    // In this variant the resource's first word is the packet pointer.
    RenderSubmissionPacket* packet = (RenderSubmissionPacket*)submission->resource->unk00;
    if (submission->frame > owner->frame && owner->frame != 0)
        return;

    u32 ownerColor = FUN_00269694(owner, &owner->color);
    effectColorUnpack(submission->color, &g_vectorScratch.factor);
    effectColorUnpack(ownerColor, &g_vectorScratch.color);
    g_vectorScratch.color.red *= g_vectorScratch.factor.red;
    g_vectorScratch.color.green *= g_vectorScratch.factor.green;
    g_vectorScratch.color.blue *= g_vectorScratch.factor.blue;
    g_vectorScratch.color.alpha *= g_vectorScratch.factor.alpha;
    u32 color = effectColorPack(&g_vectorScratch.color);
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    packet->color = packed.value;
    if (packed.channels.alpha != 0) {
        FUN_00246afc(packet, submission->position, submission->rotation, submission->scale);
        if (owner->depthEnabled)
            packet->flags |= 0x100;
        else
            packet->flags &= ~0x100;
        FUN_00256a50(packet, (u16)owner->drawMode);
    }
}
}
