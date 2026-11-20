/* AsdSDK/Source/Gfx/Model: the model system's two scene passes (smt4 g_asdModelSceneRoots), each walked
 * with its visitor (g_asdModelTransformBuilder) through NintendoWare's scene traverser. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDSCENEPASS_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDSCENEPASS_H

#include "common.h"
#include <stddef.h>

struct AsdSceneVisitor;

/* A scene visitor's virtual methods: slot 4 visits one scene object. */
typedef struct AsdSceneVisitorVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*visit)(struct AsdSceneVisitor *self, void *object);
} AsdSceneVisitorVtbl;

typedef struct AsdSceneVisitor {
    /* 0x00 */ AsdSceneVisitorVtbl *vtable;
} AsdSceneVisitor;

/* A scene pass: the objects the visitor walks, in order. */
typedef struct AsdScenePass {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *scene;        /* the scene the traverser begins on */
    /* 0x08 */ void *traverser;    /* nw::gfx::SceneTraverser */
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ void *initializer;  /* visited first, then finished through its object's slot 4 */
} AsdScenePass;
typedef char AsdScenePassLayoutCheck[offsetof(AsdScenePass, scene) == 0x4 &&
    offsetof(AsdScenePass, traverser) == 0x8 && offsetof(AsdScenePass, initializer) == 0x10 ? 1 : -1];
typedef char AsdSceneVisitorVtblLayoutCheck[offsetof(AsdSceneVisitorVtbl, visit) == 0x10 ? 1 : -1];

#endif
