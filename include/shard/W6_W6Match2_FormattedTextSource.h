#ifndef SHARD_W6_W6MATCH2_FORMATTED_TEXT_SOURCE_H
#define SHARD_W6_W6MATCH2_FORMATTED_TEXT_SOURCE_H

#include "common.h"

struct FormattedTextItem {
    u32 id;          // 0x00
    u8 unk04[8];     // 0x04
    char text[1];    // 0x0c
};

struct FormattedTextPrefix {
    u32 unk00;       // 0x00
    const char* text; // 0x04
};

struct FormattedTextSource {
    u8 unk00[0x30];              // 0x00
    FormattedTextItem* item;      // 0x30
    u8 unk34[0x14];              // 0x34
    FormattedTextPrefix* prefix;  // 0x48
};

extern "C" s32 textFormatBuffer(char* output, const char* format, ...);

#endif
