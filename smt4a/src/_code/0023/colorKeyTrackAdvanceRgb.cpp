/* NON_MATCHING: key-search register allocation and RGB division operand scheduling differ from retail. */
#include "shard/W6_W6Match8_ColorKeys.h"

// Advance to the next later key and calculate the per-frame RGB changes.
extern "C" void colorKeyTrackAdvanceRgb(ColorKeyTrack *track, const ColorKey *timing)
{
    s32 skip = 1;
    s32 current = track->nextKey;
    if (current < 3) {
        for (; current + skip < 4; ++skip) {
            track->duration = timing[current + skip].frame - timing[current].frame;
            if (track->duration > 0) {
                ColorKey *start = &track->keys[current];
                ColorKey *end = &track->keys[current + skip];
                track->redStep = static_cast<f32>(end->red - start->red) / (end->frame - start->frame);
                track->greenStep = static_cast<f32>(end->green - start->green) / (end->frame - start->frame);
                track->blueStep = static_cast<f32>(end->blue - start->blue) / (end->frame - start->frame);
                track->targetRed = static_cast<f32>(static_cast<u32>(end->red));
                track->targetGreen = static_cast<f32>(static_cast<u32>(end->green));
                track->targetBlue = static_cast<f32>(static_cast<u32>(end->blue));
                track->nextKey = current + skip;
                return;
            }
        }
    } else {
        track->nextKey = 4;
    }
}
