/* An owner (base game) holding two models it links once their textures are loaded. */
#ifndef SHARD_X14_MODELPAIR_H
#define SHARD_X14_MODELPAIR_H

#include "common.h"
#include <stddef.h>

/* A model that can be bound to another; 0x108 is cleared when it is bound. */
typedef struct PairedModel {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 unk108;
} PairedModel;

typedef struct ModelPairOwner {
    /* 0x0000 */ u8 unk0000[0x3564];
    /* 0x3564 */ PairedModel *model;
    /* 0x3568 */ PairedModel *bound;    /* model once bound to target */
    /* 0x356C */ void *target;
    /* 0x3570 */ void *resource;
} ModelPairOwner;

typedef char ModelPairOwnerOffsets[offsetof(ModelPairOwner, model) == 0x3564 &&
    offsetof(ModelPairOwner, resource) == 0x3570 && offsetof(PairedModel, unk108) == 0x108 ? 1 : -1];

#endif
