#include "classes/Obj4208f8.h"

extern "C" {
void nodeSetTranslation(AsdMdlNode *node, s32 slot, Obj4208f8Vec3 *position);
void FUN_0028c618(AsdMdlNode *node, s32 slot, f32 x, f32 y, f32 z);
void modelSetPosition(AsdMdlNode *node, s32 slot, Obj4208f8Vec3 *position);
}

/* Writes the tracked positions back to the model's node. */
Obj4208f8::~Obj4208f8()
{
    nodeSetTranslation(model->node, 0, &unk90);
    FUN_0028c618(model->node, 0, unk9C.x, unk9C.y, unk9C.z);
    modelSetPosition(model->node, 0, &unkA8);
}
