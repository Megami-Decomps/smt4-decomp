#ifndef SHARD_W6_W6MATCH2_ONLINE_SCOPED_GUARD_H
#define SHARD_W6_W6MATCH2_ONLINE_SCOPED_GUARD_H

#include "common.h"

struct OnlineMutex;
struct OnlineScopedGuard;

extern "C" void FUN_002e6e34(OnlineScopedGuard* guard, OnlineMutex* mutex);
extern "C" void _ZN9Obj55b28cD1Ev(OnlineScopedGuard* guard);

struct OnlineScopedGuard {
    const void* vtable; // 0x00
    u8 locked;          // 0x04
    u8 unk05[3];        // 0x05
    OnlineMutex* mutex; // 0x08

    OnlineScopedGuard(OnlineMutex* value) { FUN_002e6e34(this, value); }
    ~OnlineScopedGuard() { _ZN9Obj55b28cD1Ev(this); }
};

#endif
