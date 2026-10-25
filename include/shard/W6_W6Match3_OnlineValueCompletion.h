#ifndef SHARD_W6_W6MATCH3_ONLINE_VALUE_COMPLETION_H
#define SHARD_W6_W6MATCH3_ONLINE_VALUE_COMPLETION_H

#include "shard/W6_W6Match5_OnlineResult.h"

struct OnlineValueJob;

extern "C" void onlineJobFinishValueRequest(OnlineValueJob *job, const OnlineCallbackResult *result);

#ifdef __cplusplus
extern "C" {
#endif

s32 asdCecInboxGetMessageCount(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 *asdListBoxGetIntValuePtr(u32 listBox, s32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned int libc_strcmp(unsigned int *param_1,unsigned int *param_2);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void effectSpawnPositionDefault(f32 x, f32 y, f32 z);

#ifdef __cplusplus
}
#endif

#endif
