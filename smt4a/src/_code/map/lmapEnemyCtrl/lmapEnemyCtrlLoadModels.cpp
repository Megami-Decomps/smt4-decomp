#include "common.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "Model/MoriModelManager.h"

/* The enemy controller (the part its setup fills). */
struct LmapEnemyCtrl {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ MoriModelContent *enemyModel;
    /* 0x9C */ MoriModelContent *bossModel;
};

extern "C" {

void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */

// Loads the field enemy and boss models and registers them.
void lmapEnemyCtrlLoadModels(LmapEnemyCtrl *ctrl)
{
    void *mem = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemyCtrl.cpp", 0xe2);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    ctrl->enemyModel = static_cast<MoriModelContent *>(mem);
    resourceOwnerLoadFileSync(ctrl->enemyModel, "map/all/lmap_ene.bam");
    moriModelContentLoadBody(ctrl->enemyModel, 0);
    Obj557b18 *enemy = ctrl->enemyModel->body;
    handleRegistryRegisterObject(g_handleRegistry, enemy);
    enemy->flags |= 3;

    mem = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemyCtrl.cpp", 0xec);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    ctrl->bossModel = static_cast<MoriModelContent *>(mem);
    resourceOwnerLoadFileSync(ctrl->bossModel, "map/all/lmap_boss.bam");
    moriModelContentLoadBody(ctrl->bossModel, 0);
    Obj557b18 *boss = ctrl->bossModel->body;
    handleRegistryRegisterObject(g_handleRegistry, boss);
    boss->flags |= 3;
}

}
