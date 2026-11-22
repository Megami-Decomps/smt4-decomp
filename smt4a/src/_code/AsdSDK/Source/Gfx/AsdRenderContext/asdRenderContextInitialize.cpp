/* NON_MATCHING: readable rewrite of the render context set-up, ported from IV's FUN_0010f144 with Apocalypse's offsets and callees; not yet compared with retail. */
#include "common.h"
#include "map/MapVector.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "classes/Obj557b58.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtx.h"

extern "C" {

/* One render slot (0x20 bytes): FUN_00156fd8 resets it for its index. */
typedef struct RenderContextSlot {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 enabled;
    /* 0x19 */ u8 unk19[7];
} RenderContextSlot;

/* unit-local: the render context's layout is only known from this set-up (Apocalypse offsets). */
typedef struct RenderContext {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ void *shader;                  /* the default texture shader (0x12A48 bytes) */
    /* 0x0534 */ u8 unk0534[0x80];
    /* 0x05B4 */ u8 unk05B4;
    /* 0x05B5 */ u8 unk05B5[3];
    /* 0x05B8 */ f32 identity[4][4];
    /* 0x05F8 */ u8 unk05F8;
    /* 0x05F9 */ u8 unk05F9[3];
    /* 0x05FC */ f32 screenProjections[2][4][4]; /* pixel orthographic projections of the top and bottom screens */
    /* 0x067C */ f32 unitProjections[2][4][4];   /* fixed orthographic projections */
    /* 0x06FC */ u8 unk06FC[4];
    /* 0x0700 */ AsdCamera cameras[2];
    /* 0x1118 */ u8 unk1118[0xD0];
    /* 0x11E8 */ u8 unk11E8;
    /* 0x11E9 */ u8 unk11E9[4];
    /* 0x11ED */ u8 unk11ED;
    /* 0x11EE */ u8 unk11EE[6];
    /* 0x11F4 */ u8 unk11F4;
    /* 0x11F5 */ u8 unk11F5;
    /* 0x11F6 */ u8 unk11F6[2];
    /* 0x11F8 */ RenderContextSlot slots[12];
    /* 0x1378 */ u32 slotWords[12];
} RenderContext;

extern const char DAT_0053cd14[]; /* "c:\SMT4F\SMT4F\AsdSDK\Source\Gfx\AsdRenderContext.cpp" */
extern const char DAT_0053cd4c[]; /* "DefaultTextureVS.shbin" */

void *FUN_00157acc(void *owner);
s32 modelShaderLoad(void *owner, const void *binary, u32 size, s32 unused);
f32 (*mtx44OrthoC(f32 (*matrix)[4], f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane))[4];
void nn_math_ARMv6_MTX44PivotC_FAST(f32 (*matrix)[4], u32 pivot);
void cameraMatrixCacheSetLookAt(void *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void stereoCameraSetPerspective(void *camera, u32 pivot, f32 fovy, f32 nearZ, f32 farZ, f32 aspect);
f32 (*mathCopyIdentityMatrix(f32 (*matrix)[4]))[4];
void FUN_00156fd8(RenderContextSlot *slot, s32 index);
u32 FUN_00154c94(s32 index);

/* Sets up the render context: its flags, the default texture shader, the screen projections, the two
 * cameras and the twelve render slots. */
void asdRenderContextInitialize(RenderContext *context)
{
    context->unk11F4 = 1;
    context->unk11F5 = 3;
    context->unk05B4 = 1;
    context->unk11E8 = 1;
    context->unk11ED = 1;
    context->unk05F8 = 0;
    for (s32 i = 0; i < 12; i++)
        context->slots[i].enabled = 1;

    void *shader = asdMemoryAllocTraced(0x12A48, DAT_0053cd14, 612);
    context->shader = shader != NULL ? FUN_00157acc(shader) : NULL;
    /* Block scope: retail gives the size's stack slot to the camera vectors below. */
    {
        u32 size;
        const void *binary = asdLoadFileSyncNoContext(DAT_0053cd4c, &size, 1, 0x80);
        modelShaderLoad(context->shader, binary, size, 0);
    }

    f32 height = (f32)asdGxPresetsGetHeightByKind(0);
    f32 width = (f32)asdGxPresetsGetByKind(0);
    mtx44OrthoC(context->screenProjections[0], 0.0f, height, width, 0.0f, 0.0f, -1.0f);
    nn_math_ARMv6_MTX44PivotC_FAST(context->screenProjections[0], 1);
    height = (f32)asdGxPresetsGetHeightByKind(2);
    width = (f32)asdGxPresetsGetByKind(2);
    mtx44OrthoC(context->screenProjections[1], 0.0f, height, width, 0.0f, 0.0f, -1.0f);
    nn_math_ARMv6_MTX44PivotC_FAST(context->screenProjections[1], 1);
    mtx44OrthoC(context->unitProjections[0], -5.0f, 5.0f, 3.0f, -3.0f, 10.0f, -10.0f);
    nn_math_ARMv6_MTX44PivotC_FAST(context->unitProjections[0], 1);
    mtx44OrthoC(context->unitProjections[1], -4.0f, 4.0f, 3.0f, -3.0f, 10.0f, -10.0f);
    nn_math_ARMv6_MTX44PivotC_FAST(context->unitProjections[1], 1);

    {
        AsdCamera *camera = &context->cameras[0];
        MapVector eye;
        MapVector up;
        MapVector target;
        eye.x = 0.0f;
        eye.y = 100.0f;
        eye.z = 600.0f;
        up.x = 0.0f;
        up.y = 1.0f;
        up.z = 0.0f;
        target.x = 0.0f;
        target.y = 0.0f;
        target.z = 0.0f;
        asdCameraInitializeDefaults(camera, 1);
        cameraMatrixCacheSetLookAt(camera, &eye, &target, &up);
        stereoCameraSetPerspective(camera, 1, 30.0f, 20.0f, 25600.0f, 400.0f / 240.0f);
        camera = &context->cameras[1];
        asdCameraInitializeDefaults(camera, 1);
        cameraMatrixCacheSetLookAt(camera, &eye, &target, &up);
        stereoCameraSetPerspective(camera, 1, 30.0f, 20.0f, 25600.0f, 320.0f / 240.0f);
    }

    mathCopyIdentityMatrix(context->identity);
    for (s32 i = 0; i < 12; i++) {
        FUN_00156fd8(&context->slots[i], (u8)i);
        context->slotWords[i] = FUN_00154c94((u8)i);
    }
}

} /* extern "C" */
