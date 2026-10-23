#ifndef MAP_SAVEDMAPTRANSITION_H
#define MAP_SAVEDMAPTRANSITION_H
#include "common.h"
#include <stddef.h>

struct SavedMapTransition {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 map;
    /* 0x02 */ u8 area;
    /* 0x03 */ u8 entrance;
    /* 0x04 */ f32 position[3];
    /* 0x10 */ f32 heading;
    /* 0x14 */ f32 cameraHeading;
};
typedef char SavedMapTransitionLayoutCheck[
    offsetof(SavedMapTransition, position) == 4 &&
    offsetof(SavedMapTransition, heading) == 0x10 &&
    offsetof(SavedMapTransition, cameraHeading) == 0x14 && sizeof(SavedMapTransition) == 0x18 ? 1 : -1];
#endif
