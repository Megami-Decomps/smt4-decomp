#ifndef SHARD_W6_W6MATCH2_TEXT_DRAW_STATE_H
#define SHARD_W6_W6MATCH2_TEXT_DRAW_STATE_H

#include "common.h"

struct TextRenderer;
struct TextFont;

struct TextDrawState {
    u32 unk00[2];           // 0x00
    TextFont* font;         // 0x08
    u32 unk0c;              // 0x0c
    TextRenderer* renderer; // 0x10
};

#endif
