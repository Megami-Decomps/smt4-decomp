/* NON_MATCHING: retail initialises the handle with three separate stores (post-indexed) and the desc tail with stm {0, 1}; ours merges id/resource into one stm and swaps r5/r6. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00409488[];

typedef struct AsdFloatColor {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} AsdFloatColor;

/* The light data of a scene ambient light: only its colour fields are known. */
typedef struct AsdAmbientLightData {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ AsdFloatColor color;
    /* 0xC8 */ u32 picaColor;
} AsdAmbientLightData;

typedef struct AsdAmbientLightResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdAmbientLightData *data;
} AsdAmbientLightResource;

/* The build description FUN_0011d9c4 takes. */
typedef struct AsdAmbientLightDesc {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
} AsdAmbientLightDesc;

/* A scene ambient light handle. */
typedef struct AsdAmbientLight {
    /* 0x00 */ s32 id;
    /* 0x04 */ AsdAmbientLightResource *resource;
    /* 0x08 */ AsdAmbientLightData *data;
} AsdAmbientLight;

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdMemoryGetDefaultAllocator(void);
AsdAmbientLightResource *FUN_0011d9c4(const AsdAmbientLightDesc *desc, void *allocator);
u32 nw_ut_FloatColor_ToPicaU32(const AsdFloatColor *color);

/* Creates an ambient light with a dim grey (0.2) colour. */
AsdAmbientLight *FUN_002cb80c(void)
{
    AsdAmbientLight *light;
    AsdAmbientLightDesc desc;
    void *allocator;

    asdDebugTrace(DAT_00409488, 688);
    light = (AsdAmbientLight *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdAmbientLight), 1);
    light->resource = NULL;
    light->id = -1;
    light->data = NULL;
    allocator = asdMemoryGetDefaultAllocator();
    desc.unk00 = 1;
    desc.unk01 = 1;
    desc.unk04 = 0;
    desc.unk08 = 0;
    desc.unk0C = 1;
    light->resource = FUN_0011d9c4(&desc, allocator);
    light->data = light->resource->data;
    light->data->color.r = 0.2f;
    light->data->color.g = 0.2f;
    light->data->color.b = 0.2f;
    light->data->color.a = 1.0f;
    light->data->picaColor = nw_ut_FloatColor_ToPicaU32(&light->data->color);
    return light;
}

} /* extern "C" */
