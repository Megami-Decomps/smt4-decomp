/* NON_MATCHING: the state stores are scheduled differently (the constant is materialised in r1 after the flags load, and the second store uses a writeback address). */
#include "common.h"

extern "C" {

#define WIDGET_FLAG_READY 0x2
#define WIDGET_FLAG_SHOWN 0x1000000

typedef struct Widget {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;      /* 0: not shown yet, 1: waiting for its animation, 2: done */
    /* 0x00C */ u8 unk00c[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x150];
    /* 0x164 */ u8 sprite[0x14];
    /* 0x178 */ u8 shadow[0xAC];
    /* 0x224 */ s32 position[2];
} Widget;

extern s32 FUN_002bf818(s32 *position);
extern s32 FUN_0026b564(void);
extern s32 vec2GetXInt(s32 *position);
extern s32 vec2GetYInt(s32 *position);
extern void FUN_00231240(void *sprite, s32 x, s32 y);
extern void FUN_00233240(void *shadow, s32 value);

/* Per-frame update of the widget: shows it, then moves its sprite with the position once that settles. */
void FUN_0039c9d4(Widget *widget)
{
    s32 *position;

    if (widget->state == 0) {
        FUN_00233240(widget->shadow, 1);
        widget->flags |= WIDGET_FLAG_SHOWN;
        widget->state = 1;
    } else if (widget->state == 1) {
        position = widget->position;
        if (FUN_002bf818(position) != 0 && FUN_0026b564() != 0) {
            widget->state = 2;
            widget->flags |= WIDGET_FLAG_READY;
        }
        FUN_00231240(widget->sprite, vec2GetXInt(position), vec2GetYInt(position));
    }
}

}
