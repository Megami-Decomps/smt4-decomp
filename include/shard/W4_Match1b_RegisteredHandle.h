/* A handle object registered in g_handleRegistry; it has a virtual destructor (vtable slot 1 is the deleting variant). */
#ifndef SHARD_W4_MATCH1B_REGISTEREDHANDLE_H
#define SHARD_W4_MATCH1B_REGISTEREDHANDLE_H

#include "common.h"

class RegisteredHandle {
public:
    virtual ~RegisteredHandle();

    u32 id;
};

extern "C" {
u32 flagPairCondition(s32 a, s32 b);
}

#endif
