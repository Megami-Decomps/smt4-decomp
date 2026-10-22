#ifndef FONT_FORMATTEDTEXT_H
#define FONT_FORMATTEDTEXT_H

#include "common.h"

struct FormattedTextContext {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 font;
    /* 0x10 */ u32 color;
};

#endif
