#include "common.h"
#include "Model/MoriModelContent.h"

/* The enemy controller (the part its setup fills). */
struct LmapEnemyCtrl {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ MoriModelContent *enemyModel;
    /* 0x9C */ MoriModelContent *bossModel;
};

/* A registered model object; its flags word is at +4. */
struct RegisteredModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
};

extern "C" {

extern u32 g_handleRegistry;

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
MoriModelContent *modelListInit(void *mem);                 /* content constructor */
void FUN_0040aa6c(MoriModelContent *content, const char *name);
void FUN_0040aad4(MoriModelContent *content, u32 arg);
void handleRegistryRegisterObject(u32 registry, u32 object);

// Loads the field enemy and boss models and registers them.
void lmapEnemyCtrlLoadModels(LmapEnemyCtrl *ctrl)
{
    void *mem = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemyCtrl.cpp", 0xe2);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    ctrl->enemyModel = (MoriModelContent *)mem;
    FUN_0040aa6c(ctrl->enemyModel, "map/all/lmap_ene.bam");
    FUN_0040aad4(ctrl->enemyModel, 0);
    RegisteredModel *enemy = (RegisteredModel *)ctrl->enemyModel->body;
    handleRegistryRegisterObject(g_handleRegistry, (u32)enemy);
    enemy->flags |= 3;

    mem = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemyCtrl.cpp", 0xec);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    ctrl->bossModel = (MoriModelContent *)mem;
    FUN_0040aa6c(ctrl->bossModel, "map/all/lmap_boss.bam");
    FUN_0040aad4(ctrl->bossModel, 0);
    RegisteredModel *boss = (RegisteredModel *)ctrl->bossModel->body;
    handleRegistryRegisterObject(g_handleRegistry, (u32)boss);
    boss->flags |= 3;
}

}
