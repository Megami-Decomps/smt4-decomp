/* NON_MATCHING: retail narrows the next segment index twice (call-site cast, then after the s16 store) and converts the frame count into s2; ours narrows once and converts in place. */
#include "common.h"

struct ScaleSegment {
    f32 start;
    f32 end;
    u16 frames;
    u8 loop;
    u8 unk0b;
};
struct ScaleSequenceEntry {
    u8 unk00[0x14];
    s32 segment;
    s8 reverse;
    u8 unk19[3];
};
struct ScaleController {
    u8 unk00[0x24];
    f32 scale[3];
    u8 unk30[0x34];
    const ScaleSegment *segments;
    s16 segmentIndex;
    s16 frame;
    s8 reverse;
    u8 unk6d[0xb];
    const ScaleSequenceEntry *sequence;
    u8 unk7c[4];
    s16 sequenceIndex;
    u8 unk82[2];
    u8 sequencing;
    u8 unk85[3];
    u8 complete;
    u8 unk89;
    u8 reset;
    u8 unk8b;
};

static __inline f32 scaleSegmentStart(const ScaleSegment *segment, s32 reverse)
{
    return reverse ? segment->end : segment->start;
}

static __inline f32 scaleSegmentEnd(const ScaleSegment *segment, s32 reverse)
{
    return reverse ? segment->start : segment->end;
}

static void startScaleSegment(ScaleController *controller,
                              s16 index, s8 reverse)
{
    controller->segmentIndex = index;
    controller->frame = 0;
    controller->reverse = reverse;
    controller->reset = 0;
    const ScaleSegment *segment = &controller->segments[index];
    f32 scale = scaleSegmentStart(segment, reverse);
    controller->scale[0] = scale;
    controller->scale[1] = scale;
    controller->scale[2] = scale;
}

extern "C" void controllerUpdateUniformScaleTrack(ScaleController *controller)
{
    if (controller->complete || controller->segments == NULL) {
        return;
    }
    const ScaleSegment *segment = &controller->segments[controller->segmentIndex];
    u32 frames = segment->frames;
    if (controller->frame >= (s32)frames) {
        s8 reverse = controller->reverse;
        if (segment->loop) {
            controller->scale[0] = scaleSegmentStart(segment, reverse);
            controller->frame = 0;
        } else {
            controller->scale[0] = scaleSegmentEnd(segment, reverse);
            if (!(controller->sequencing && controller->sequence != NULL &&
                  controller->sequence[controller->sequenceIndex].segment != -1)) {
                controller->complete = 1;
            } else {
                ++controller->sequenceIndex;
                const ScaleSequenceEntry *next = &controller->sequence[controller->sequenceIndex];
                if (next->segment == -1 || next->segment == -3) {
                    controller->complete = 1;
                } else if (next->segment == -2) {
                    controller->sequenceIndex = 0;
                    const ScaleSequenceEntry *first = controller->sequence;
                    startScaleSegment(controller, (s16)first->segment, first->reverse);
                } else {
                    startScaleSegment(controller, (s16)next->segment, next->reverse);
                }
            }
        }
    } else {
        f32 step;
        if (controller->reverse) {
            step = (segment->start - segment->end) / (f32)frames;
        } else {
            step = (segment->end - segment->start) / (f32)frames;
        }
        ++controller->frame;
        controller->scale[0] = step + controller->scale[0];
    }
    controller->scale[1] = controller->scale[0];
    controller->scale[2] = controller->scale[0];
}
