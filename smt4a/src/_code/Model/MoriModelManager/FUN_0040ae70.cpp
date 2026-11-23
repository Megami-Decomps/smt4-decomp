/* NON_MATCHING: scoped pass configuration restores the retail shadow-attachment tail call; setup packet constant/store scheduling still differs. */
#include "Model/MoriScene.h"
#include <new>
class Obj557d00;
extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
Obj557d00 *FUN_001581dc(void *owner);
void FUN_00406834(UiLookupObj *scene, UiOwner *owner);
void moriModelShadowMapBuild(MoriModelShadowMap *shadowMap, Obj557b68Layer *layer);

// Allocate the manager's render scene once, bind its target and optionally attach its shadow map.
void FUN_0040ae70(Obj557c48 *manager, s32 attach)
{
    if (manager->scene() == NULL) {
        void *storage = asdMemoryAllocTraced(sizeof(Obj557b68),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x17f);
        Obj557b68 *scene = static_cast<Obj557b68 *>(storage);
        if (scene != NULL)
            scene = new (storage) Obj557b68;
        manager->setScene(scene);
        moriSceneSetFogDefaults(manager->scene(), NULL);
        {
            Obj557b68 *current = manager->scene();
            MoriPassConfig pass;
            pass.width = 0x30000;
            pass.enabled = 0;
            pass.height = 0x10000;
            pass.depth = 0x10000;
            pass.unk14 = 0;
            pass.target = manager->sceneResource();
            pass.enabled = 1;
            FUN_00406834(reinterpret_cast<UiLookupObj *>(current),
                reinterpret_cast<UiOwner *>(FUN_001581dc(&pass)));
        }
        if (attach != 0 && manager->scene() != NULL)
            moriModelShadowMapBuild(manager->shadowMap(), &manager->scene()->layer);
    }
}
}
