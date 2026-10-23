#ifndef MAP_PICK_OBJECT_RESOURCES_H
#define MAP_PICK_OBJECT_RESOURCES_H
#include "common.h"
#include <stddef.h>

struct PickObjectResource {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

/* Resource-loading prefix of the pick-object controller. */
struct PickObjectResources {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 phase;
    /* 0x00C */ u8 unk00C[0xE];
    /* 0x01A */ u8 mode;
    /* 0x01B */ u8 unk01B[0x269];
    /* 0x284 */ void *primaryData;
    /* 0x288 */ void *primaryInfo;
    /* 0x28C */ PickObjectResource *primary;
    /* 0x290 */ void *secondaryData;
    /* 0x294 */ void *secondaryInfo;
    /* 0x298 */ PickObjectResource *secondary;
};
typedef char PickObjectResourceOffsets[
    offsetof(PickObjectResource, state) == 0x108 &&
    sizeof(PickObjectResource) == 0x10C ? 1 : -1];
typedef char PickObjectResourcesOffsets[
    offsetof(PickObjectResources, state) == 4 &&
    offsetof(PickObjectResources, phase) == 8 &&
    offsetof(PickObjectResources, mode) == 0x1A &&
    offsetof(PickObjectResources, primaryData) == 0x284 &&
    offsetof(PickObjectResources, primaryInfo) == 0x288 &&
    offsetof(PickObjectResources, primary) == 0x28C &&
    offsetof(PickObjectResources, secondaryData) == 0x290 &&
    offsetof(PickObjectResources, secondaryInfo) == 0x294 &&
    offsetof(PickObjectResources, secondary) == 0x298 &&
    sizeof(PickObjectResources) == 0x29C ? 1 : -1];
#endif
