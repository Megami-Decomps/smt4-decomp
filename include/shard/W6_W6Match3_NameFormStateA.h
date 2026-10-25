#ifndef SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H
#define SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H

#include "common.h"
#include "name/NameFormText.h"

// Apocalypse keeps the same phase callbacks but has a smaller form prefix.
struct NameFormStateA {
    typedef void (NameFormStateA::*Callback)();

    u8 complete;       // 0x000
    u8 phase;          // 0x001
    u8 unk002[0xa];
    u32 frame;         // 0x00c
    union {
        u8 unk010[0xc4];
        NameFormTextFields text; // 0x010: length at 0x22, characters at 0xb0
    };
    Callback handlers[12];  // 0x0d4
    u8 unk134[0x42c];
    s16 countdown;     // 0x560
};
typedef char NameFormTextAOffsetCheck[offsetof(NameFormStateA, text) == 0x10 &&
    offsetof(NameFormStateA, handlers) == 0xd4 && sizeof(NameFormStateA) == 0x564 ? 1 : -1];

extern "C" void nameFormUpdate(NameFormStateA* form);

#endif
