/* NON_MATCHING: retail evaluates dimensions through separate this-pointer/accessor sequences; direct fields are hoisted and use fewer saved registers. */
#include "common.h"

struct WidgetPoint {
    f32 x, y;
};

struct FrameWidget {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 kind;
    /* 0x3c */ u8 unk3c[0x14];
    /* 0x50 */ void *texture;
    /* 0x54 */ s16 width;
    /* 0x56 */ s16 height;
    /* 0x58 */ s16 border;
    /* 0x5a */ u8 unk5a[0xa];
    /* 0x64 */ u32 positionId;
};

extern "C" {
void pairCopy(u32 positionId, WidgetPoint *);
void FUN_00290994(void *texture, s32 x, s32 y, s32 center,
                 s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g,
                 s32 border, s32 width, s32 height, u32 color, s32 flags);

// Draw the framed widget with the alternate sprite set for kind nine.
void uiDrawFrameWidget(FrameWidget *widget, u32 color)
{
    WidgetPoint position;
    pairCopy(widget->positionId, &position);
    if (widget->kind != 9) {
        FUN_00290994(widget->texture, static_cast<s32>(position.x), static_cast<s32>(position.y),
                     0x2b, 0x3d, 0x3e, 0x3f, 0x39, 0x3b, 0x3a, 0x3c,
                     widget->border, widget->width, widget->height, color, 0);
        return;
    }
    FUN_00290994(widget->texture, static_cast<s32>(position.x), static_cast<s32>(position.y),
                 0x2b, 0x44, 0x45, 0x46, 0x40, 0x42, 0x41, 0x43,
                 widget->border, widget->width, widget->height, color, 0);
}
}
