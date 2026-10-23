#ifndef GFX_SCENELIGHTSELECTION_H
#define GFX_SCENELIGHTSELECTION_H
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"

struct SceneLightSet {
    u8 unk00[0xC];
    AsdSceneLightObject *ambient;
    AsdSceneLightObject *hemisphere;
    u8 unk14[4];
    AsdSceneLightObject **vertexBegin;
    AsdSceneLightObject **vertexEnd;
    u8 unk20[0x24];
    AsdSceneLightObject **fragmentBegin;
    AsdSceneLightObject **fragmentEnd;
};
struct SceneLightSelection {
    AsdSceneLightObject *ambient;
    AsdSceneLightObject *hemisphere;
    u8 unk08[4];
    AsdSceneLightObject **vertex;
    u8 unk10[4];
    u32 vertexCapacityAndFlags;
    u8 unk18[0xC];
    AsdSceneLightObject **fragment;
    u8 unk28[0x68];
    SceneLightSet **sets;
    u8 unk94[8];
    s32 selected;
    u32 vertexCount;
    u32 fragmentCount;
    u8 fragmentDirty;
    u8 ambientDirty;
    u8 vertexDirty;
    u8 hemisphereDirty;
};
typedef char SceneLightSetLayoutCheck[
    offsetof(SceneLightSet, ambient) == 0xC && offsetof(SceneLightSet, vertexBegin) == 0x18 &&
    offsetof(SceneLightSet, fragmentBegin) == 0x44 && sizeof(SceneLightSet) == 0x4C ? 1 : -1];
typedef char SceneLightSelectionLayoutCheck[
    offsetof(SceneLightSelection, vertex) == 0xC && offsetof(SceneLightSelection, vertexCapacityAndFlags) == 0x14 &&
    offsetof(SceneLightSelection, fragment) == 0x24 && offsetof(SceneLightSelection, sets) == 0x90 &&
    offsetof(SceneLightSelection, selected) == 0x9C && offsetof(SceneLightSelection, vertexCount) == 0xA0 &&
    offsetof(SceneLightSelection, fragmentCount) == 0xA4 && offsetof(SceneLightSelection, ambientDirty) == 0xA9 &&
    sizeof(SceneLightSelection) == 0xAC ? 1 : -1];
#endif
