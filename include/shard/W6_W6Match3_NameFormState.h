#ifndef SHARD_W6_W6MATCH3_NAMEFORMSTATE_H
#define SHARD_W6_W6MATCH3_NAMEFORMSTATE_H

#include "common.h"

// Known prefix of the name-entry form; its initializer installs twelve member callbacks.
struct NameFormState {
    typedef void (NameFormState::*Callback)();

    u8 complete;       // 0x000
    u8 phase;          // 0x001
    u8 unk002[0xa];
    u32 frame;         // 0x00c
    u8 unk010[0xc4];
    Callback handlers[12];  // 0x0d4
    u8 unk134[0x80e];
    s16 countdown;     // 0x942
};

extern "C" void nameFormUpdate(NameFormState* form);


#endif
