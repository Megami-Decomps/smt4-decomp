#ifndef GFX_OBJECTREGISTRY_H
#define GFX_OBJECTREGISTRY_H

#include "common.h"
#include <vector>

struct ObjectRegistry;

/* An object that can be listed by one registry; `registry` is the one that holds it. */
struct RegisteredObject {
    /* 0x000 */ u8 unk000[0x268];
    /* 0x268 */ ObjectRegistry *registry;
};

/* Holds the objects registered with it, in registration order. */
struct ObjectRegistry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ std::vector<RegisteredObject *> objects;
};

#endif
