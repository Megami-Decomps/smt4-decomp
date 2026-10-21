#ifndef SHARD_W6_W6MATCH7_FONTRESOURCE_H
#define SHARD_W6_W6MATCH7_FONTRESOURCE_H

#include "shard/S2NwFont.h"

struct NwFontFileHeader {
    /* 0x00 */ u32 signature;
    /* 0x04 */ u16 byteOrder;
    /* 0x06 */ u16 headerSize;
    /* 0x08 */ u32 version;
    /* 0x0c */ u32 fileSize;
    /* 0x10 */ u16 blockCount;
    /* 0x12 */ u16 reserved;
};

extern "C" {
bool nw_font_ResFontSetResource(NwResFontBase* font, NwFontFileHeader* file);
void nw_font_ResFontSetResourceBuffer(NwResFontBase* font, NwFontFileHeader* file, NwFontInfo* info);
}

#endif
