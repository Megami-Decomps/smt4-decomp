/* Model/MoriModelManager.cpp (Apocalypse): the draw items the model manager collects from its registered model
 * objects, one per visible mesh part of a pass (modelManagerCollectDrawItems, modelManagerCollectSecondPassItems), and the list that holds them. */
#ifndef MODEL_MORIMODELDRAWLIST_H
#define MODEL_MORIMODELDRAWLIST_H

#include "common.h"
#include <stddef.h>

struct DrawVec3 {
    f32 x, y, z;
};

/* A model part's skin binding: the joint whose matrix places a skinned part. */
struct ModelPartSkin {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 joint;
};

/* A part effect: kind 4 draws the part in this pass. */
struct ModelPartEffect {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 kind;
    /* 0x05 */ u8 unk05[7];
};

struct ModelPartEffects {
    /* 0x00 */ ModelPartEffect *items;
    /* 0x04 */ u16 count;
};

/* One mesh part of a model (0x38 bytes). */
struct ModelPart {
    /* 0x00 */ u16 meshIndex;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 visibilityBit;
    /* 0x06 */ u8 unk06[0xA];
    /* 0x10 */ ModelPartSkin *skin;
    /* 0x14 */ s32 skinMode;       /* 1: placed by its skin joint in a mirrored model */
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ DrawVec3 position;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ ModelPartEffects *effects;
};

struct ModelSkeleton {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 *jointMatrices; /* 0x30 bytes each */
};

/* The parts a mesh set draws in one pass. */
struct ModelPartRange {
    ModelPart *begin;
    ModelPart *end;
};

/* A model's mesh set: its meshes and, per pass variant, the range of its parts. */
struct ModelMeshSet {
    /* 0x00 */ u8 flags;          /* bit 1: mirrored */
    /* 0x01 */ u8 unk01[0x33];
    /* 0x34 */ u8 *meshes;        /* 0x2C bytes each */
    /* 0x38 */ u8 unk38[0x10];
    /* 0x48 */ ModelPartRange parts[1];
};

/* A registered model object (only the fields read here). */
struct ModelObject {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;        /* bit 0: hidden */
    /* 0x008 */ u8 unk008[0x100];
    /* 0x108 */ ModelSkeleton *skeleton;
    /* 0x10C */ u8 *materials;    /* 0x158 bytes each: u16 flags, then the visible-part index at +0x20 */
    /* 0x110 */ u8 unk110[4];
    /* 0x114 */ u8 *visibleBits;
    /* 0x118 */ u8 unk118[4];
    /* 0x11C */ u8 secondPassEnabled; /* modelManagerCollectSecondPassItems collects only the models that set it */
    /* 0x11D */ u8 unk11D[3];
    /* 0x120 */ u8 worldMatrix[0x60];
    /* 0x180 */ u8 localMatrix[0x80];
    /* 0x200 */ u8 layer;
    /* 0x201 */ u8 unk201[0xF];
    /* 0x210 */ ModelMeshSet *meshSet;
    /* 0x214 */ u8 unk214[0x40];
    /* 0x254 */ u8 *instances;    /* 0x58 bytes each */
};

/* One collected draw item (0x30 bytes). */
struct DrawItem {
    /* 0x00 */ ModelPart *part;
    /* 0x04 */ void *mesh;
    /* 0x08 */ ModelSkeleton *skeleton;
    /* 0x0C */ u16 *material;
    /* 0x10 */ void *instance;
    /* 0x14 */ DrawVec3 position;
    /* 0x20 */ void *worldMatrix;
    /* 0x24 */ void *localMatrix;
    /* 0x28 */ u8 mirrored;
    /* 0x29 */ u8 layer;
    /* 0x2A */ u8 unk2A[2];
    /* 0x2C */ f32 depth;
};

/* The draw list: a vector of draw items, the camera and the visible-part table. */
struct DrawList {
    /* 0x00 */ DrawItem *begin;
    /* 0x04 */ DrawItem *end;
    /* 0x08 */ DrawItem *capacity;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ f32 *camera;       /* [8..11]: the view row that gives the depth */
    /* 0x18 */ u8 visibleParts[1];
};

typedef char MoriModelDrawListCheck[sizeof(ModelPart) == 0x38 && sizeof(DrawItem) == 0x30 &&
    offsetof(ModelObject, meshSet) == 0x210 && offsetof(ModelObject, instances) == 0x254 &&
    offsetof(ModelMeshSet, parts) == 0x48 && offsetof(DrawList, visibleParts) == 0x18 ? 1 : -1];

extern "C" {
/* The list's push_back slow path: grows the storage and inserts `item` at `at`. */
void FUN_00198930(DrawList *list, DrawItem *at, const DrawItem *item);
}

#endif
