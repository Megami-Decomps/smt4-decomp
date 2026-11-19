#ifndef SMT4_MAP_LMAPPLAYERMODEL_H
#define SMT4_MAP_LMAPPLAYERMODEL_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/MapVector.h"

class Obj4206e8;
struct ModelPropertyController;

extern "C" {
void nodeOwnerSetTranslations(Obj4206e8 *owner, const MapVector *position);
void nodeGroupSetScale(Obj4206e8 *owner, NodeVec3 scale);
void FUN_003351e0(Obj4206e8 *owner, NodeVec3 rotation);
u32 FUN_00335118(const Obj4206e8 *owner);
void FUN_00297684(Obj4206e8 *owner);
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 part, NodeVec3 rotation);
void modelSelectSecondaryMotion(AsdMdlNode *node, s32 motion, f32 blend);
void asdModelSelectSecondaryMotion(ModelPropertyController *controller, s32 motion, f32 time);
void mapDepartSpawnPlayerEffect(s32 variant);
}

#endif
