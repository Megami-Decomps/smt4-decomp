/* AsdSDK/Source/Gfx/Model/AsdMdlManager.c: model objects created and tracked by the model manager.
 *
 * A model object (AsdMdlObject, 0x1C bytes) is the handle the game keeps. It points at its model
 * (AsdMdlNode, 0xA8 bytes, allocated by AsdModel.cpp), which holds the loaded model image, the
 * motion tables and the attribute records, and at the model's scene node (AsdMdlSceneNode, the
 * nw::gfx skeletal model the renderer draws: transform, world matrix, skeleton and animation
 * tracks). Both games share these layouts. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMDLMANAGER_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "shard/W4_Match1b_Node.h"

struct ModelBoneResource;
struct ModelBoneMatrixProvider;
struct ModelBoneAnimationTarget;

/* The scene node a model draws through (the nw::gfx skeletal model; observed fields). */
typedef struct AsdMdlSceneNode {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ ModelBoneResource *boneResource;  /* the model resource the node was built from */
    /* 0x00C */ u8 unk00c[0x1C];
    /* 0x028 */ AsdTrackList *trackList;          /* the animation tracks */
    /* 0x02C */ u8 unk02c[0x20];
    /* 0x04C */ NodeTransform transform;          /* local transform, scale and change flags */
    /* 0x08C */ SkeletonMatrix34 worldMatrix;
    /* 0x0BC */ u8 unk0bc[0x8C];
    /* 0x148 */ s32 secondaryActive;              /* a secondary motion track exists */
    /* 0x14C */ s32 secondaryIndex;               /* its track index */
    /* 0x150 */ u8 unk150[0x6C];
    /* 0x1BC */ SkeletonMatrix34 viewMatrix;
    /* 0x1EC */ u8 unk1ec[0xA];
    /* 0x1F6 */ u8 positionFollowed;              /* set when an effect takes over the model's position */
    /* 0x1F7 */ u8 unk1f7[0x29];
    /* 0x220 */ ModelBoneMatrixProvider *skeleton;
    /* 0x224 */ u32 unk224;
    /* 0x228 */ ModelBoneAnimationTarget *activeTarget;
    /* 0x22C */ s32 activeIndex;                  /* the primary motion's track index */
} AsdMdlSceneNode;

/* A model (0xA8 bytes): the loaded model image, its scene node, the motion tables, the playing
 * motion, a pending replacement and the attribute records. */
typedef struct AsdMdlNode {
    /* 0x00 */ u32 flags;                /* bit 0: a pending motion should replace the playing one; bit 1: shared */
    /* 0x04 */ AsdModelFile *file;       /* the loaded model image (reference counted) */
    /* 0x08 */ u32 drawMask;             /* caller supplied parameter, 7 by default */
    /* 0x0C */ s32 unk0c;                /* -1 by default */
    /* 0x10 */ s32 unk10;                /* -1 by default */
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ void **table;             /* count entries, the first is the scene node */
    /* 0x28 */ s32 count;
    /* 0x2C */ AsdMdlSceneNode *sceneNode;
    /* 0x30 */ void **motionTable;
    /* 0x34 */ s32 motionCount;
    /* 0x38 */ s32 currentMotion;
    /* 0x3C */ u8 unk3c[0x10];
    /* 0x4C */ AsdMotionInstance *active;
    /* 0x50 */ AsdMotionInstance *pending;
    /* 0x54 */ void **secondaryMotionTable;
    /* 0x58 */ s32 secondaryMotionCount;
    /* 0x5C */ s32 secondaryCurrentMotion;
    /* 0x60 */ AsdMotionInstance *secondaryInstance;
    /* 0x64 */ u32 unk64[3];
    /* 0x70 */ u8 unk70[4];
    /* 0x74 */ f32 animationSpeed;       /* 1 by default */
    /* 0x78 */ f32 speed;                /* primary motion rate */
    /* 0x7C */ f32 secondarySpeed;       /* secondary motion rate */
    /* 0x80 */ f32 unk80;                /* 1 by default */
    /* 0x84 */ f32 offset[3];
    /* 0x90 */ u8 unk90;
    /* 0x91 */ u8 unk91[3];
    /* 0x94 */ AsdModelAttrContainers containers;
    /* 0x98 */ u8 unk98[8];
    /* 0xA0 */ AsdModelAttrRecords records;
} AsdMdlNode;

/* One record of a model object's record array (0x1C bytes). */
typedef struct AsdMdlRecord {
    /* 0x00 */ void *data;      /* freed with the object: `count` 0x84-byte entries */
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ f32 radius;      /* furthest horizontal extent of the record's parts */
    /* 0x18 */ f32 height;      /* highest vertical extent */
} AsdMdlRecord;

/* A model object (0x1C bytes). */
typedef struct AsdMdlObject {
    /* 0x00 */ u32 flags;       /* 0x200000 once initialized (and once marked for destruction) */
    /* 0x04 */ void *request;   /* the queued file request the model data is loaded from */
    /* 0x08 */ AsdMdlNode *node;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ AsdMdlRecord *records; /* node->count records */
} AsdMdlObject;

typedef char AsdMdlRecordLayoutCheck[sizeof(AsdMdlRecord) == 0x1C && offsetof(AsdMdlRecord, height) == 0x18 ? 1 : -1];
typedef char AsdMdlObjectLayoutCheck[sizeof(AsdMdlObject) == 0x1C && offsetof(AsdMdlObject, node) == 8 &&
    offsetof(AsdMdlObject, records) == 0x18 ? 1 : -1];
typedef char AsdMdlNodeLayoutCheck[
    offsetof(AsdMdlNode, file) == 4 && offsetof(AsdMdlNode, drawMask) == 8 &&
    offsetof(AsdMdlNode, table) == 0x24 && offsetof(AsdMdlNode, sceneNode) == 0x2C &&
    offsetof(AsdMdlNode, motionCount) == 0x34 && offsetof(AsdMdlNode, active) == 0x4C &&
    offsetof(AsdMdlNode, secondaryMotionTable) == 0x54 && offsetof(AsdMdlNode, secondaryInstance) == 0x60 &&
    offsetof(AsdMdlNode, speed) == 0x78 && offsetof(AsdMdlNode, secondarySpeed) == 0x7C &&
    offsetof(AsdMdlNode, offset) == 0x84 && offsetof(AsdMdlNode, unk90) == 0x90 &&
    offsetof(AsdMdlNode, containers) == 0x94 && offsetof(AsdMdlNode, records) == 0xA0 &&
    sizeof(AsdMdlNode) == 0xA8 ? 1 : -1];
typedef char AsdMdlSceneNodeLayoutCheck[
    offsetof(AsdMdlSceneNode, boneResource) == 8 && offsetof(AsdMdlSceneNode, trackList) == 0x28 &&
    offsetof(AsdMdlSceneNode, transform) == 0x4C && offsetof(AsdMdlSceneNode, worldMatrix) == 0x8C &&
    offsetof(AsdMdlSceneNode, secondaryActive) == 0x148 && offsetof(AsdMdlSceneNode, viewMatrix) == 0x1BC &&
    offsetof(AsdMdlSceneNode, positionFollowed) == 0x1F6 && offsetof(AsdMdlSceneNode, skeleton) == 0x220 &&
    offsetof(AsdMdlSceneNode, activeTarget) == 0x228 && sizeof(AsdMdlSceneNode) == 0x230 ? 1 : -1];

/* A vector for the node setters, which take theirs by value . */
static __inline NodeVec3 nodeVec3(f32 x, f32 y, f32 z)
{
    NodeVec3 vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

/* The longest blend the playing motion allows; 0 when nothing is playing. */
static __inline f32 asdMotionModelBlendLimit(const AsdMdlNode *model)
{
    if (model->motionCount <= 0 || model->active == NULL) {
        return 0.0f;
    }
    return model->active->blendLimit;
}

#ifdef __cplusplus
extern "C" {
#endif
/* Allocates a model object and its model, and marks it initialized. */
AsdMdlObject *asdMdlObjectNew(void);
/* Creates a model object from the model file at `path` (loaded synchronously); `drawMask` goes to the model. */
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 drawMask);
/* Creates a model object like asdMdlManagerCreateLoaded, keeping it on the manager's second list. */
AsdMdlObject *asdMdlManagerCreateSecondList(const char *path, u32 drawMask);
/* Creates a model object from a model image already in memory. */
AsdMdlObject *asdMdlManagerCreateFromSource(void *source, u32 size, u32 drawMask);
/* Creates a model object from a model image in memory, building its node with FUN_003289d8 (smt4). */
AsdMdlObject *asdMdlManagerCreateFromSourceB(void *source, u32 size, u32 drawMask);
/* Creates a model object from a model image in memory whose node is built against `other`'s (smt4). */
AsdMdlObject *asdMdlManagerCreateFromSourceAndNode(void *source, u32 size, u32 drawMask, AsdMdlObject *other);
/* Creates a model object that shares `src`'s model data (mode 1: also its scene resources). */
AsdMdlObject *asdMdlManagerClone(AsdMdlObject *src, u32 mode);
/* Destroys a model object: releases its node data and records, removes it from the model list and frees it. */
void asdMdlManagerDestroy(AsdMdlObject *obj);
/* Marks a model object for destruction by the manager. */
void asdMdlManagerMarkDestroy(AsdMdlObject *obj);
/* Builds the per-part bounds records of a model object. */
u32 asdMdlObjectBuildBounds(AsdMdlObject *object);
/* Builds a model's scene node and tables from its loaded image. */
void asdMdlNodeInit(AsdMdlNode *node, u32 drawMask);
/* Copies a model: shares the model image and builds a scene node for the copy. */
void asdMdlNodeCopyData(AsdMdlNode *dest, AsdMdlNode *source, s32 mode);
/* Releases a model's scene resources. */
void asdMdlManagerReleaseResources(AsdMdlNode *node, void *request);
/* Sets the translation column of the model's scene-node transform and flags it as changed. */
void nodeSetTranslation(AsdMdlNode *node, s32 index, const f32 *position);
#ifdef __cplusplus
}
#endif

extern "C" {
void FUN_0029c4c8(u8 value);
/* Clears the model's initialized flag and registers its node with scene node collection `group`. */
void lightOwnerRegister(AsdMdlObject *model, u32 group);
}

extern "C" {
s32 arrayContainsU16(const u16 *values, s32 count, u32 value);
}

extern "C" {
void gameCounterAddSaturating(int index, u32 amount);
}

extern "C" {
s8 gameGetFlagByte12e8(void);
}

extern "C" {
u8 FUN_0029e0f8(void);
}

#endif
