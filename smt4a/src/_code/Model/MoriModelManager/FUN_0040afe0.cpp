/* NON_MATCHING: retail reserves eight more frame bytes and schedules pass/fog stores differently. */
#include "Model/MoriScene.h"
#include <new>
class Obj557d00;
extern "C" {
void *FUN_00178b04(u32 size, const char *file, u32 line);
Obj557d00 *FUN_001581dc(void *owner);
void FUN_00406834(UiLookupObj *scene, UiOwner *owner);
void FUN_003fed38(Obj557b28 *shadowMap, Obj557b68Layer *layer);

// Create a scene with the requested fog layer, then install its render pass.
void FUN_0040afe0(Obj557c48 *manager, u16 layer, s32 attach)
{
    if (manager->scene() == NULL) {
        void *storage = FUN_00178b04(sizeof(Obj557b68),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x196);
        Obj557b68 *scene = static_cast<Obj557b68 *>(storage);
        if (scene != NULL)
            scene = new (storage) Obj557b68;
        manager->setScene(scene);
        MoriPassConfig pass;
        MoriSceneConfig fog;
        fog.unk0A = 0;
        fog.unk0B = 0;
        fog.unk0D = 0;
        fog.mode = 2;
        fog.range = 0xffff;
        fog.layer = layer;
        fog.enabled = 1;
        fog.unk0C = 1;
        moriSceneSetFogDefaults(manager->scene(), &fog);
        Obj557b68 *current = manager->scene();
        pass.enabled = 0;
        pass.width = 0x30000;
        pass.height = 0x10000;
        pass.depth = 0x10000;
        pass.unk14 = 0;
        pass.target = manager->sceneResource();
        pass.enabled = 1;
        FUN_00406834(reinterpret_cast<UiLookupObj *>(current),
            reinterpret_cast<UiOwner *>(FUN_001581dc(&pass)));
        if (attach != 0 && manager->scene() != NULL)
            FUN_003fed38(manager->shadowMap(), &manager->scene()->layer);
    }
}
}
