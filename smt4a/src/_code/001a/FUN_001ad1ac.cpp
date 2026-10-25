#include "event/bustupEvent/BustupCutAnim.h"

struct BustupPlacement {
    u8 unk00[8];  // 0x00
    f32 x;        // 0x08
};

extern "C" {

extern BustupCutAnimA *g_bustupCutAnim;
extern u32 g_bustupCutAnimSlotTable[]; /* 0x57f538 */

s32 modelHasLoadedAttachment(void);
s32 FUN_001ad7cc(u32 job, u32 slot, BustupPlacement *placement);

/* Places the active bust-up slot job; the first slot is shifted by the animation's x offset. Returns 1 when there is no job to place. */
s32 FUN_001ad1ac(BustupPlacement *placement, s32 slot)
{
    BustupCutAnimA *anim = g_bustupCutAnim;
    s32 result;

    if (anim == NULL) {
        return 0;
    }
    if (anim->object == NULL || modelHasLoadedAttachment() == 0) {
        return 1;
    }
    result = FUN_001ad7cc(anim->object->job, g_bustupCutAnimSlotTable[slot], placement);
    if (slot == 0) {
        placement->x += anim->offsetX;
    }
    return result;
}

} /* extern "C" */
