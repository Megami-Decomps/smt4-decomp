#ifndef GFX_OBJECTREGISTRY_H
#define GFX_OBJECTREGISTRY_H

#include "common.h"
#include <vector>
#include <stddef.h>

struct ObjectRegistry;

/* An object that can be listed by one registry; `registry` is the one that holds it. */
struct RegisteredObject {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x260];
    /* 0x268 */ ObjectRegistry *registry;
};
typedef char RegisteredObjectLayoutCheck[
    offsetof(RegisteredObject, flags) == 4 &&
    offsetof(RegisteredObject, registry) == 0x268 &&
    sizeof(RegisteredObject) == 0x26C ? 1 : -1];

/* Holds the objects registered with it, in registration order. */
struct ObjectRegistry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ std::vector<RegisteredObject *> objects;
};

#endif
