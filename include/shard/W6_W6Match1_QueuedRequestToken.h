#ifndef SHARD_W6_W6MATCH1_QUEUEDREQUESTTOKEN_H
#define SHARD_W6_W6MATCH1_QUEUEDREQUESTTOKEN_H

#include "shard/W6_W6Match5_QueuedRequest.h"

struct QueuedRequestHandle {
    u32 value;
    u32 token;
};

struct QueuedRequestTokenState {
    QueuedRequestState state;
    u32 unkd5c;
    u32 token;
};

#endif
