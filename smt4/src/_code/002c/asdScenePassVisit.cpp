#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/Source/Gfx/Model/AsdScenePass.h"
#include "code/Code002c_Smt4.h"

extern "C" {

extern void asdSceneInitializerFinish(void *initializer);
extern void nw_gfx_SceneTraverser_End(void *traverser);
extern int nw_gfx_SceneTraverser_Begin(void *traverser, void *scene);

/* Walks a scene pass with a visitor: the initializer, which is then finished, and the scene
 * through the traverser, which is then ended. */
void asdScenePassVisit(AsdScenePass *pass, AsdSceneVisitor *visitor)
{
    asdDebugHookPtr(pass->initializer);
    visitor->vtable->visit(visitor, pass->initializer);
    asdSceneInitializerFinish(pass->initializer);
    nw_gfx_SceneTraverser_Begin(pass->traverser, pass->scene);
    visitor->vtable->visit(visitor, pass->traverser);
    nw_gfx_SceneTraverser_End(pass->traverser);
}

} /* extern "C" */
