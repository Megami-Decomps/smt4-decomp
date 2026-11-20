#ifndef SHOP_MENU_DATA_H
#define SHOP_MENU_DATA_H

#include "common.h"
#include <stddef.h>

struct ShopIconIndices {
    s32 first;
    s32 second;
};

union ShopHelpSelectionPresets {
    u32 packed;
    u8 values[4];
};

struct ShopHelpPagePresets {
    u8 values[12];
};

struct ShopDecorationImageGroup {
    u32 images[8];
};

struct ShopTabImageGroup {
    u32 icons[4];
};

/* The shared IV menu constants used by the decoration, tab and help renderers. */
struct ShopMenuConstants {
    /* 0x000 */ ShopHelpSelectionPresets selection;
    /* 0x004 */ u8 unk004[0xA0];
    /* 0x0A4 */ ShopDecorationImageGroup firstDecoration;
    /* 0x0C4 */ ShopDecorationImageGroup secondDecoration;
    /* 0x0E4 */ ShopTabImageGroup firstTab;
    /* 0x0F4 */ ShopTabImageGroup secondTab;
    /* 0x104 */ ShopHelpPagePresets normal;
    /* 0x110 */ ShopHelpPagePresets alternate;
};
typedef char ShopMenuConstantsLayoutCheck[offsetof(ShopMenuConstants, firstDecoration) == 0xA4 &&
    offsetof(ShopMenuConstants, firstTab) == 0xE4 && offsetof(ShopMenuConstants, normal) == 0x104 &&
    sizeof(ShopMenuConstants) == 0x11C ? 1 : -1];

extern "C" const ShopMenuConstants DAT_004074a4;

#endif
