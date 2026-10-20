/* NON_MATCHING: the vtable address and the constant 1 are held in swapped registers (r2/r1). */
#include "common.h"

extern "C" {

typedef struct Widget {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 base[0x0D];
    /* 0x11 */ u8 flag11;
    /* 0x12 */ u8 flag12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u16 value14;
    /* 0x16 */ u16 value16;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u8 unk28;
} Widget;

extern u8 DAT_005596a4;

Widget *FUN_002ed074(Widget *self, u32 kind);
u16 FUN_002f7270(void);

/* Constructs a Widget (kind 0xb) with its vtable and default state. */
Widget *FUN_0011456c(Widget *self)
{
    Widget *widget = FUN_002ed074(self, 0xb);

    widget->vtbl = &DAT_005596a4;
    widget->flag11 = 0;
    widget->flag12 = 1;
    widget->value14 = FUN_002f7270();
    widget->value16 = 0;
    widget->unk18 = 0;
    widget->unk1C = 0;
    widget->unk20 = 0;
    widget->unk24 = 0;
    widget->unk28 = 0;
    return widget;
}

} /* extern "C" */
