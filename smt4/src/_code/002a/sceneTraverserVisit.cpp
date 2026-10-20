/* Begins a scene traversal of the owner's scene and lets the visitor visit it, then hands the scene to
 * the function that follows (a tail call). */
#include "common.h"

extern "C" {

struct Visitor002abb24 {
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void visit(void *scene);
};

struct Owner002abb24 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *traverser;
    /* 0x08 */ void *scene;
};

void nw_gfx_SceneTraverser_Begin(void *scene, void *traverser);
void FUN_002abb5c(void *scene);

void sceneTraverserVisit(Owner002abb24 *owner, Visitor002abb24 *visitor)
{
    nw_gfx_SceneTraverser_Begin(owner->scene, owner->traverser);
    visitor->visit(owner->scene);
    FUN_002abb5c(owner->scene);
}

}
