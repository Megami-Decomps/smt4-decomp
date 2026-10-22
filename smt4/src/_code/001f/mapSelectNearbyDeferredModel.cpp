#include "map/mapDepart.h"

struct DeferredModel1fa800 {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[0x5];
    /* 0x12 */ s16 kind;
    /* 0x14 */ s16 modelId;
    /* 0x16 */ u8 unk16[0x6];
    /* 0x1C */ MapVector position;
    /* 0x28 */ u8 unk28[0x10];
};

struct DeferredModels1fa800 {
    /* 0x000 */ DeferredModel1fa800 models[64];
    /* 0xE00 */ u8 unkE00[0xC];
    /* 0xE0C */ u8 nearActive;
    /* 0xE0D */ u8 unkE0D[0x3];
    /* 0xE10 */ s32 nearIndex;
    /* 0xE14 */ s32 nearKind;
    /* 0xE18 */ u8 unkE18[0x4];
    /* 0xE1C */ char nearName[1];
};

struct ModelInfo1fa800 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ char name[1];
};

extern "C" {

extern DeferredModels1fa800 *g_deferredMapModels;
f32 mathDistanceBetweenPoints(MapVector a, MapVector b);
ModelInfo1fa800 *FUN_00266f30(s32 modelId);
void FUN_00266fac(s32 found, s32 index);
char *libc_strcpy(char *dest, const char *src);

// Remember the first active deferred model within 200 units of `point`, or clear the selection.
void mapSelectNearbyDeferredModel(MapVector point)
{
    for (s32 i = 0; i < 64; i++) {
        if (g_deferredMapModels->models[i].active &&
            mathDistanceBetweenPoints(point, g_deferredMapModels->models[i].position) < 200.0f) {
            ModelInfo1fa800 *info = FUN_00266f30(g_deferredMapModels->models[i].modelId);
            g_deferredMapModels->nearActive = 1;
            g_deferredMapModels->nearIndex = i;
            g_deferredMapModels->nearKind = g_deferredMapModels->models[i].kind;
            libc_strcpy(g_deferredMapModels->nearName, info->name);
            FUN_00266fac(1, i);
            return;
        }
    }
    FUN_00266fac(0, 0);
    g_deferredMapModels->nearActive = 0;
}

} /* extern "C" */
