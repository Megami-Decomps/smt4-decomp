/* NON_MATCHING: retail reuses r1 for source+16 and r0 for the mode constant. */
#include "classes/Obj422594.h"
extern "C" void ARM_common_memset4_6(void *destination, u32 value);

struct Obj422594Source {
    u32 unk00;
    u32 word1;
    u32 word2;
    u32 unk0c;
};

void Obj422594::initialize(const void *source)
{
    const Obj422594Source *src = (const Obj422594Source *)source;
    state = 0;
    slots[3] = 0;
    slots[2] = 0;
    slots[1] = 0;
    slots[0] = 0;
    slots[7] = 0;
    slots[6] = 0;
    slots[5] = 0;
    slots[4] = 0;
    slots[11] = 0;
    slots[10] = 0;
    slots[9] = 0;
    slots[8] = 0;
    sourceWord1 = src->word1;
    sourceWord2 = src->word2;
    region.screen = (void *)(src + 1);
    mode = 2;
    if (region.touchCount > 0) {
        s32 i = 0;
        do {
            ifTouchRegionRemove();
            ++i;
        } while (i < region.touchCount);
    }
    region.touchCount = 0;
    ARM_common_memset4_6(&region.left, -1);
}
