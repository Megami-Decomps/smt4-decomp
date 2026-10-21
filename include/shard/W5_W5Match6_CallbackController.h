#ifndef SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H
#define SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H

#include "common.h"

struct CallbackController {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *work;
};
extern "C" CallbackController g_callbackController;

#endif
