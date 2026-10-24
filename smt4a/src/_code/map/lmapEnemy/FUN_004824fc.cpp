#include "common.h"

struct Vec3f {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
};

/* A map model: its flags word at +4. */
struct EnemyModel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

/* The list holding the enemy's model (at +4). */
struct EnemyModelList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EnemyModel *model;
};

struct MapEnemy {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 flags;
    /* 0x0D */ u8 unk0D[0x6B];
    /* 0x78 */ EnemyModelList *modelList;
};

extern "C" {

extern void *g_handleRegistry;

void *FUN_00178b04(u32 size, const char *file, u32 line);
EnemyModelList *modelListInit(void *memory);
void moriModelContentCopyBody(EnemyModelList *list, void *source, u32 flags);
void handleRegistryRegisterObject(void *registry, EnemyModel *model);
void controllerSetDestination(EnemyModel *model, Vec3f *position);
void controllerSetRotationEulerDegrees(EnemyModel *model, f32 x, f32 y, f32 z);
void controllerSetPosition(EnemyModel *model, f32 x, f32 y, f32 z);
void FUN_003fe86c(EnemyModel *model, u32 index, u8 flags, f32 time, f32 blend);

/* Builds the enemy's model from `source`, registers it and puts it at the origin with default rotation and unit scale. */
void FUN_004824fc(MapEnemy *enemy, void *source)
{
    EnemyModelList *list = static_cast<EnemyModelList *>(FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemy.cpp", 0x9a));
    if (list != NULL) {
        list = modelListInit(list);
    }
    enemy->modelList = list;
    moriModelContentCopyBody(enemy->modelList, source, 0);
    EnemyModel *model = enemy->modelList->model;
    handleRegistryRegisterObject(g_handleRegistry, model);
    model->flags |= 3;
    enemy->flags |= 2;
    Vec3f destination;
    destination.x = 0.0f;
    destination.y = 0.0f;
    destination.z = 0.0f;
    controllerSetDestination(model, &destination);
    controllerSetRotationEulerDegrees(model, 0.0f, 0.0f, 0.0f);
    controllerSetPosition(model, 1.0f, 1.0f, 1.0f);
    FUN_003fe86c(model, 0, 2, 0.0f, 0.0f);
}

} /* extern "C" */
