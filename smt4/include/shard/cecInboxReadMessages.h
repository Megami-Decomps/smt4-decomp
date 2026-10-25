#ifndef SHARD_CECINBOXREADMESSAGES_H
#define SHARD_CECINBOXREADMESSAGES_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void cecInboxReadMessages(u32 unused, u8 *messages, int first, int count);

#ifdef __cplusplus
}
#endif

#endif
