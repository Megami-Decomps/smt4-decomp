/* NON_MATCHING: -O2 candidate; signed reverse load, repeated segment sign extensions, sequence cold-block layout and VFP division registers differ. */
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

static __inline void startScaleSegment(ScaleController *controller,
                                      s16 index, s8 reverse)
{
    controller->segmentIndex = index;
    controller->frame = 0;
    controller->reverse = reverse;
    controller->reset = 0;
    const ScaleSegment *segment = &controller->segments[controller->segmentIndex];
    f32 scale = reverse ? segment->end : segment->start;
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
        if (segment->loop) {
            controller->scale[0] = controller->reverse ? segment->end : segment->start;
            controller->frame = 0;
        } else {
            controller->scale[0] = controller->reverse ? segment->start : segment->end;
            if (controller->sequencing && controller->sequence != NULL &&
                controller->sequence[controller->sequenceIndex].segment != -1) {
                ++controller->sequenceIndex;
                const ScaleSequenceEntry *next = &controller->sequence[controller->sequenceIndex];
                if (next->segment != -1 && next->segment != -3) {
                    if (next->segment != -2) {
                        startScaleSegment(controller, (s16)next->segment, next->reverse);
                    } else {
                        controller->sequenceIndex = 0;
                        const ScaleSequenceEntry *first = controller->sequence;
                        startScaleSegment(controller, (s16)first->segment, first->reverse);
                    }
                } else {
                    controller->complete = 1;
                }
            } else {
                controller->complete = 1;
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
