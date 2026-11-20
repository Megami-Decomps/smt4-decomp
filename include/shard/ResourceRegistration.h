#ifndef SHARD_RESOURCEREGISTRATION_H
#define SHARD_RESOURCEREGISTRATION_H

#include "common.h"

/* The slots of each deferred-destruction queue. */
enum {
    DEFERRED_DESTROY_SLOTS = 64
};

/* A resource queued for destruction once its frame count runs out (resourceQueueDeferredDestroy). */
struct ResourceRegistration {
    /* 0x00 */ s32 framesRemaining;
    /* 0x04 */ void *resource;   /* NULL: the slot is free */
};

typedef char ResourceRegistrationSizeCheck[sizeof(ResourceRegistration) == 8 ? 1 : -1];

#endif
