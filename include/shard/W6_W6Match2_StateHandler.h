#ifndef SHARD_W6_W6MATCH2_STATE_HANDLER_H
#define SHARD_W6_W6MATCH2_STATE_HANDLER_H

#include "common.h"

class StateHandler {
public:
    typedef void (StateHandler::*Callback)();
    u32 unk00;             // 0x00
    s32 state;             // 0x04
    u8 unk08[0x158];       // 0x08
    Callback handlers[1];   // 0x160
};

#endif
