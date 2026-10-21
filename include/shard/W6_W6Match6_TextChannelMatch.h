#ifndef SHARD_W6_W6MATCH6_TEXTCHANNELMATCH_H
#define SHARD_W6_W6MATCH6_TEXTCHANNELMATCH_H

#include "shard/W6_W6Match6_TextChannelParser.h"

struct TextMatchArena { u32 words[3]; };
struct TextMatchSyntax;
struct TextMatchSimple;
struct TextMatchLink { TextMatchLink *next; TextMatchLink *previous; };
struct TextMatchMask {
    u32 count;
    TextMatchLink entries;
    u32 unk0c;
    u32 byteCount;
};
struct TextMatchCompiled {
    u32 count;
    TextMatchLink entries;
    u32 unk0c[3];
};
struct TextMatchArenaSource {
    u8 unk00[0x20];
    u8 *buffer;
};

#endif
