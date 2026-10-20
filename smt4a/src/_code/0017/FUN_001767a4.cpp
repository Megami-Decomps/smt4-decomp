#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* Table of virtual methods: slot 4 (+0x10) takes the object and a handle. */
typedef struct VisitorVtbl {
    void *slots[4]; /* 0x00 */
    void (*visit)(struct Visitor *self, void *handle); /* 0x10 */
} VisitorVtbl;

typedef struct Visitor {
    VisitorVtbl *vtbl; /* 0x00 */
} Visitor;

/* Pair of scene handles drawn one after the other. */
typedef struct ScenePass {
    u32 unk00;     /* 0x00 */
    void *sceneB;  /* 0x04 */
    void *sceneA;  /* 0x08 */
    u32 unkC;      /* 0x0c */
    void *handle;  /* 0x10 */
} ScenePass;

extern void FUN_0015d434(void *handle);
extern void FUN_0018d01c(void *handle);
extern int nw_gfx_SceneTraverser_Begin(void *sceneA, void *sceneB);

void FUN_001767a4(ScenePass *pass, Visitor *visitor)
{
    asdDebugHookPtr(pass->handle);
    visitor->vtbl->visit(visitor, pass->handle);
    FUN_0015d434(pass->handle);
    nw_gfx_SceneTraverser_Begin(pass->sceneA, pass->sceneB);
    visitor->vtbl->visit(visitor, pass->sceneA);
    FUN_0018d01c(pass->sceneA);
}

} /* extern "C" */
