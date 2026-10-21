#ifndef SHARD_W6_W6MATCH6_TEXTCHANNELPARSER_H
#define SHARD_W6_W6MATCH6_TEXTCHANNELPARSER_H

#include "common.h"

struct TextChannel { u16 text[64]; };
struct TextChannelParser {
    u8 unk00[0x1a];
    u8 skipDefaults;
    u8 flagBit;
    u8 unk1c[8];
    u16 *input; // 0x24
    u32 unk28;
    TextChannel *channels; // 0x2c
};
struct TextChannelInput;
struct TextChannelInputVtable {
    void *unk00[9];
    u32 (*size)(TextChannelInput *); // 0x24
    void *unk28;
    u32 (*read)(TextChannelInput *, void *, u32); // 0x2c
};
struct TextChannelInput { const TextChannelInputVtable *vtable; };

#endif
