/* NON_MATCHING: retail reads the enabled flag with `mov r0, r5; ldrsb r0, [r0, #138]`; armcc here emits `ldrb r0, [r5, #138]`. */
#include "common.h"

extern "C" {

typedef struct Widget {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 enabled;
} Widget;

typedef struct Panel {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 state;
    /* 0x18 */ s32 stateArg;
    /* 0x1C */ u8 unk1c[0xAC];
    /* 0xC8 */ u8 cursor[0x34];
    /* 0xFC */ Widget widget;
} Panel;

extern int FUN_002b8ee0(Widget *widget, int arg);
extern int FUN_00231240(u8 *cursor, u32 x, u32 y);
extern int FUN_00231184(void);
extern int FUN_00241a44(void);
extern int FUN_0029e0f8(void);
extern u32 vec2GetYInt(Widget *widget);
extern u32 vec2GetXInt(Widget *widget);

/* Re-places the cursor on the widget; when the widget is enabled and all four checks pass, switches to state 3 and resets the cursor. */
void FUN_003ab348(Panel *panel)
{
    Widget *widget = &panel->widget;
    u32 y;
    u32 x;

    FUN_002b8ee0(widget, 0);
    y = vec2GetYInt(widget);
    x = vec2GetXInt(widget);
    FUN_00231240(panel->cursor, x, y);
    if (widget->enabled != 0 && FUN_00231184() != 0 && FUN_00241a44() != 0 && FUN_0029e0f8() != 0) {
        panel->state = 3;
        panel->stateArg = 0;
        FUN_00231240(panel->cursor, 0, 0);
    }
}

}
