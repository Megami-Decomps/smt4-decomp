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

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_003a6f84(u32 kind);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned short buttonHelpGetEntryValue(unsigned int param_1);

#ifdef __cplusplus
}
#endif

#endif
