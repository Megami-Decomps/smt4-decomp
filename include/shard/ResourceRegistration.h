#ifndef SHARD_RESOURCEREGISTRATION_H
#define SHARD_RESOURCEREGISTRATION_H

#include "common.h"

struct ResourceRegistration {
    /* 0x00 */ s32 referenceCount;
    /* 0x04 */ void *resource;
};

typedef char ResourceRegistrationSizeCheck[sizeof(ResourceRegistration) == 8 ? 1 : -1];

#endif
