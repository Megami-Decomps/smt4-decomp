#include "common.h"

extern "C" {

void FUN_00106144(u32 a, u32 b);
u32 FUN_002ecf28(void);

typedef struct Widget Widget;
typedef struct WidgetVtbl {
    /* 0x00 */ void *unk00[10];
    /* 0x28 */ void (*setValue)(Widget *widget, s32 value);
} WidgetVtbl;
struct Widget {
    /* 0x00 */ const WidgetVtbl *vtbl;
};

typedef struct WidgetHolder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Widget *widget;
} WidgetHolder;

typedef struct Panel {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ WidgetHolder *holder;
} Panel;

typedef struct Screen {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ Panel *panel;
    /* 0x7C */ u8 unk7C[8];
    /* 0x84 */ u32 arg;
} Screen;

/* Calls FUN_00106144 with FUN_002ecf28's result and the screen's argument, then sets the panel's widget to 100. */
void FUN_0010d108(Screen *screen)
{
    u32 value;
    Widget *widget;

    value = FUN_002ecf28();
    FUN_00106144(value, screen->arg);
    widget = screen->panel->holder->widget;
    widget->vtbl->setValue(widget, 100);
}

} /* extern "C" */
