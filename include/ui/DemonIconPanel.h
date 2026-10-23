#ifndef UI_DEMONICONPANEL_H
#define UI_DEMONICONPANEL_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

struct DemonIconPanel {
    /* 0x000 */ u8 unk000[0xC8];
    /* 0x0C8 */ AsdTextureRegion region;
};

typedef char DemonIconPanelRegionOffsetCheck[
    offsetof(DemonIconPanel, region) == 0xC8 ? 1 : -1];

#endif
