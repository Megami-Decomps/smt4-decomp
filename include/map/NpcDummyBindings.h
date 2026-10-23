#ifndef MAP_NPCDUMMYBINDINGS_H
#define MAP_NPCDUMMYBINDINGS_H
#include "shard/W5_W5Match7_ControllerPose.h"
#include <stddef.h>

struct NpcDummyModel {
    u32 unk00;
    u32 flags;
};
struct NpcDummyModelLink {
    u32 unk00;
    NpcDummyModel *model;
};
struct NpcDummyModelHolder {
    u8 unk00[0x18];
    NpcDummyModelLink *link;
};
struct NpcDummyControllerLink {
    u32 unk00;
    ControllerPose *controller;
};
struct NpcDummyBindings {
    /* 0x000 */ u8 unk000[0x1A];
    /* 0x01A */ u8 mode;
    /* 0x01B */ u8 unk01B[0x9F5];
    /* 0xA10 */ NpcDummyControllerLink *first[9];
    /* 0xA34 */ NpcDummyControllerLink *second[9];
    /* 0xA58 */ u8 initialized;
    /* 0xA59 */ u8 unkA59[0x63];
    /* 0xABC */ s32 count;
    /* 0xAC0 */ u8 unkAC0[0x21C];
    /* 0xCDC */ NpcDummyModelHolder *holder;
    /* 0xCE0 */ u8 unkCE0[8];
    /* 0xCE8 */ NpcDummyModelLink *direct;
};
typedef char NpcDummyBindingsOffsetCheck[
    offsetof(NpcDummyBindings, first) == 0xA10 &&
    offsetof(NpcDummyBindings, second) == 0xA34 &&
    offsetof(NpcDummyBindings, initialized) == 0xA58 &&
    offsetof(NpcDummyBindings, count) == 0xABC &&
    offsetof(NpcDummyBindings, holder) == 0xCDC &&
    offsetof(NpcDummyBindings, direct) == 0xCE8 ? 1 : -1];
#endif
