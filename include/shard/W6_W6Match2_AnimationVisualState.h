#ifndef SHARD_W6_W6MATCH2_ANIMATION_VISUAL_STATE_H
#define SHARD_W6_W6MATCH2_ANIMATION_VISUAL_STATE_H

#include "common.h"

struct AnimationVisualPart {
    u8 unk000[0x1f6]; // 0x000
    u8 enabled;        // 0x1f6
};

struct AnimationVisualModel {
    u8 unk00[0x24];          // 0x00
    AnimationVisualPart** parts; // 0x24
};

struct AnimationVisualBinding {
    u32 unk00[2];            // 0x00
    AnimationVisualModel* model; // 0x08
};

struct AnimationVisualState {
    u8 unk00[8];               // 0x00
    AnimationVisualBinding* binding; // 0x08
    u8 unk0c[0x20];            // 0x0c
    u32 state;                  // 0x2c
};

/* Shows the part the visual state selects (state 4: the second, 5: the third, else the first) and hides
 * the other two: the body of FUN_0034d504, which the part selectors inline after setting the state. */
static __inline void animationShowSelectedPart(AnimationVisualState *visual)
{
    u32 selected = 0;
    if (visual->state == 4) {
        selected = 1;
    } else if (visual->state == 5) {
        selected = 2;
    }
    if (visual->binding != NULL) {
        visual->binding->model->parts[0]->enabled = selected == 0;
        visual->binding->model->parts[1]->enabled = selected == 1;
        visual->binding->model->parts[2]->enabled = selected == 2;
    }
}

#endif
