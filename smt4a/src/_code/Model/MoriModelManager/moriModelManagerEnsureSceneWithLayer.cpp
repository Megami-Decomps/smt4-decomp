/* NON_MATCHING: retail reserves eight more stack bytes; all other instructions match. */
#include "Model/MoriModelResource.h"
#include "Model/MoriScene.h"
#include <new>
extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void FUN_00406834(UiLookupObj *scene, UiOwner *owner);
void moriModelShadowMapBuild(MoriModelShadowMap *shadowMap, Obj557b68Layer *layer);

/* Creates a scene with the requested fog layer, then installs its render pass. */
void moriModelManagerEnsureSceneWithLayer(Obj557c48 *manager, u16 layer, s32 attach)
{
    if (manager->scene() == NULL) {
        void *storage = asdMemoryAllocTraced(sizeof(Obj557b68),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x196);
        Obj557b68 *scene = (Obj557b68 *)storage;
        if (scene != NULL)
            scene = new (storage) Obj557b68;
        manager->setScene(scene);
        {
            MoriSceneConfig fog;
            fog.unk0A = 0;
            fog.unk0B = 0;
            fog.unk0D = 0;
            enum { FOG_DEFAULT_MODE = 2, FOG_DEFAULT_RANGE = 0xffff };
            fog.mode = FOG_DEFAULT_MODE;
            fog.range = FOG_DEFAULT_RANGE;
            fog.layer = layer;
            fog.enabled = 1;
            fog.unk0C = 1;
            moriSceneSetFogDefaults(manager->scene(), &fog);
        }
        Obj557b68 *current = manager->scene();
        FUN_00406834((UiLookupObj *)current, (UiOwner *)moriModelResourceCreate(
            &MoriModelRequest().bindTarget(manager->sceneResource()).setResourceMode(true)));
        if (attach != 0 && manager->scene() != NULL)
            moriModelShadowMapBuild(manager->shadowMap(), &manager->scene()->layer);
    }
}
} /* extern "C" */
