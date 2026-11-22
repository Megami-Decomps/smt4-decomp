/* NON_MATCHING: 176 lines. The colour step is the siblings' calls inlined (FUN_00382d24, FUN_003b3fac): the
 * submission colour unpacked into the second scratch slot, the owner's into the first, FUN_002f8a54's scale and the
 * pack; the alpha test reads the packet's byte back. Left: retail gives the unpacked channels registers out of
 * order and stores them one by one (built: vstmia), which moves the whole VFP schedule and the pack's registers. */
#include "gfx/RenderSubmission.h"
#include "gfx/EffectColorUnpack.h"
#include "gfx/VectorScratch.h"

extern "C" {
void FUN_00338330(RenderSubmissionPacket* packet, const f32* position, const f32* rotation, const f32* scale);
void renderSubmissionDrawPacket(RenderSubmissionPacket* packet, u32 mode);
u32 FUN_0038136c(RenderSubmissionOwner* owner, const u32* color, u32 frame, u32 duration);

/* color *= factor, component by component (FUN_002f8a54's body; the sibling effect updates inline it too). */
static void effectColorScale(const EffectColor *factor, EffectColor *color)
{
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}

// Apply the owner's color and draw settings to a current-frame submission (colors inlined).
void effPolyRingGeom1Draw(RenderSubmission* submission)
{
    RenderSubmissionOwner* owner = submission->owner;
    // In this variant the resource's first word is the packet pointer.
    RenderSubmissionPacket* packet = (RenderSubmissionPacket*)submission->resource->unk00;
    if (submission->frame > owner->frame && owner->frame != 0)
        return;

    u32 ownerColor = FUN_0038136c(owner, &owner->color, submission->frame, owner->frame);
    effectColorUnpack(submission->color, &g_vectorScratch.second.color);
    effectColorUnpack(ownerColor, &g_vectorScratch.first.color);
    effectColorScale(&g_vectorScratch.second.color, &g_vectorScratch.first.color);
    u32 color = effectColorPack(&g_vectorScratch.first.color);
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    packet->color = packed.value;
    if (packet->tint[3] != 0) {
        FUN_00338330(packet, submission->position, submission->rotation, submission->scale);
        if (owner->packetDepthEnabled)
            packet->flags |= 0x100;
        else
            packet->flags &= ~0x100;
        renderSubmissionDrawPacket(packet, (u16)owner->drawMode);
    }
}
}
