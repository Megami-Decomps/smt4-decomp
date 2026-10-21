#ifndef SHARD_W6_W6MATCH8_SCRIPTSTATEMODE_H
#define SHARD_W6_W6MATCH8_SCRIPTSTATEMODE_H

#include "shard/Shard0032.h"

struct ScriptStateModeView {
    ScriptState state;
    u8 unkac[0x5c];
    u32 mode;
};

#endif
