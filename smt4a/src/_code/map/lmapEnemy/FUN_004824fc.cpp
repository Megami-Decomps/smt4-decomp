#include "common.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

struct MapEnemy {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 flags;
    /* 0x0D */ u8 unk0D[0x6B];
    /* 0x78 */ MoriModelContent *modelList;
};

extern "C" {

void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);

/* Builds the enemy's model from `source`, registers it and puts it at the origin with default rotation and unit scale. */
void FUN_004824fc(MapEnemy *enemy, MoriModelContent *source)
{
    MoriModelContent *list = static_cast<MoriModelContent *>(asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapEnemy.cpp", 0x9a));
    if (list != NULL) {
        list = modelListInit(list);
    }
    enemy->modelList = list;
    moriModelContentCopyBody(enemy->modelList, source, 0);
    Obj557b18 *model = enemy->modelList->body;
    handleRegistryRegisterObject(g_handleRegistry, model);
    model->flags |= 3;
    enemy->flags |= 2;
    MapVector destination;
    destination.x = 0.0f;
    destination.y = 0.0f;
    destination.z = 0.0f;
    controllerSetDestination(model, &destination);
    controllerSetRotationEulerDegrees(model, 0.0f, 0.0f, 0.0f);
    controllerSetPosition(model, 1.0f, 1.0f, 1.0f);
    modelPlayClip(model, 0, 2, 0.0f, 0.0f);
}

} /* extern "C" */
