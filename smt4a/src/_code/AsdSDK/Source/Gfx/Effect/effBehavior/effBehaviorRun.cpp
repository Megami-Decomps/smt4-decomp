#include "shard/W5_W5Match2_EffectBehaviorQuery.h"

struct EffectBehaviorElement {
    u8 unk00[0x10];  // 0x00
    s32 frame;       // 0x10
    u8 unk14[0x14];  // 0x14
};

struct EffectBehavior {
    u16 index;                       // 0x00
    u8 unk02[6];                     // 0x02
    u32 elementCount;                // 0x08
    u8 unk0c[4];                     // 0x0C
    s32 time;                        // 0x10
    u8 unk14[4];                     // 0x14
    EffectBehaviorElement *elements; // 0x18
};

extern "C" {
extern EffectBehaviorEntry DAT_005c1d60[];
s32 effGetFrameStep(void);

/* Resets the elements' frames on the first step, runs the behavior's callback and advances its time. */
void effBehaviorRun(EffectBehavior *behavior)
{
    if (behavior->time == 0) {
        /* Sets every element's frame word to -1, two at a time; the walk starts one element (10 words) before the first frame word. */
        u32 count = behavior->elementCount;
        u32 *elements = (u32 *)behavior->elements;

        if (count != 0) {
            u32 *frame = elements + 4 - 10;

            if (count & 1) {
                frame += 10;
                *frame = 0xFFFFFFFF;
            }
            for (count >>= 1; count != 0; count--) {
                frame[10] = 0xFFFFFFFF;
                frame += 20;
                *frame = 0xFFFFFFFF;
            }
        }
    }
    DAT_005c1d60[behavior->index].run(behavior);
    behavior->time += effGetFrameStep();
}

} /* extern "C" */
