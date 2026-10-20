/* Begins a scene traversal of the owner's scene and lets the visitor visit it, then hands the scene to
 * the function that follows (a tail call). */
#include "common.h"

extern "C" {

struct Visitor0018cfe4 {
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void visit(void *scene);
};

struct Owner0018cfe4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *traverser;
    /* 0x08 */ void *scene;
};

void nw_gfx_SceneTraverser_Begin(void *scene, void *traverser);
void FUN_0018d01c(void *scene);

void sceneTraverserVisit(Owner0018cfe4 *owner, Visitor0018cfe4 *visitor)
{
    nw_gfx_SceneTraverser_Begin(owner->scene, owner->traverser);
    visitor->visit(owner->scene);
    FUN_0018d01c(owner->scene);
}

}
