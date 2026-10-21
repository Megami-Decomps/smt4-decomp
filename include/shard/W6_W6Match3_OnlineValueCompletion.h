#ifndef SHARD_W6_W6MATCH3_ONLINE_VALUE_COMPLETION_H
#define SHARD_W6_W6MATCH3_ONLINE_VALUE_COMPLETION_H

#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineValueJob;

extern "C" void onlineJobFinishValueRequest(OnlineValueJob *job, const OnlineCallbackResult *result);

#endif
