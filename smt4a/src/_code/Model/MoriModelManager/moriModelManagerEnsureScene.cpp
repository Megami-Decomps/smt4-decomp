#include "Model/MoriModelResource.h"
#include "Model/MoriScene.h"
#include <new>
extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void FUN_00406834(UiLookupObj *scene, UiOwner *owner);
void moriModelShadowMapBuild(MoriModelShadowMap *shadowMap, Obj557b68Layer *layer);

/* Allocates the manager's render scene once, binds its target and optionally attaches its shadow map. */
void moriModelManagerEnsureScene(Obj557c48 *manager, s32 attach)
{
    if (manager->scene() == NULL) {
        void *storage = asdMemoryAllocTraced(sizeof(Obj557b68),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x17f);
        Obj557b68 *scene = (Obj557b68 *)storage;
        if (scene != NULL)
            scene = new (storage) Obj557b68;
        manager->setScene(scene);
        moriSceneSetFogDefaults(manager->scene(), NULL);
        {
            Obj557b68 *current = manager->scene();
            FUN_00406834((UiLookupObj *)current, (UiOwner *)moriModelResourceCreate(
                &MoriModelRequest().bindTarget(manager->sceneResource()).setResourceMode(true)));
        }
        if (attach != 0 && manager->scene() != NULL)
            moriModelShadowMapBuild(manager->shadowMap(), &manager->scene()->layer);
    }
}
} /* extern "C" */
