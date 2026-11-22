/* NON_MATCHING: readable rewrite of the render context set-up (Apocalypse's twin is asdRenderContextInitialize); retail loads the eye vector constants before the camera address, and the slot-flag loop takes its zero from the other counter (30 lines). */
#include "common.h"
#include "map/MapVector.h"
#include "AsdSDK/FileLoadSync.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

/* One render slot (0x20 bytes): FUN_0011b468 resets it for its index. */
typedef struct RenderContextSlot {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 enabled;
    /* 0x19 */ u8 unk19[7];
} RenderContextSlot;

/* unit-local: the render context's layout is only known from this set-up (IV offsets). */
typedef struct RenderContext {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ void *shader;                  /* the default texture shader (0x12A48 bytes) */
    /* 0x0530 */ u8 unk0530[0x80];
    /* 0x05B0 */ u8 unk05B0;
    /* 0x05B1 */ u8 unk05B1[3];
    /* 0x05B4 */ f32 identity[4][4];
    /* 0x05F4 */ u8 unk05F4;
    /* 0x05F5 */ u8 unk05F5[3];
    /* 0x05F8 */ f32 screenProjections[2][4][4]; /* pixel orthographic projections of the top and bottom screens */
    /* 0x0678 */ f32 unitProjections[2][4][4];   /* fixed orthographic projections */
    /* 0x06F8 */ u8 unk06F8[4];
    /* 0x06FC */ u8 cameras[2][0x508];
    /* 0x110C */ u8 unk110C[0xD0];
    /* 0x11DC */ u8 unk11DC;
    /* 0x11DD */ u8 unk11DD[4];
    /* 0x11E1 */ u8 unk11E1;
    /* 0x11E2 */ u8 unk11E2[6];
    /* 0x11E8 */ u8 unk11E8;
    /* 0x11E9 */ u8 unk11E9;
    /* 0x11EA */ u8 unk11EA[2];
    /* 0x11EC */ RenderContextSlot slots[12];
    /* 0x136C */ u32 slotWords[12];
} RenderContext;

extern const char DAT_004091b8[]; /* "DefaultTextureVS.shbin" */

void *FUN_0011b588(void *owner);
s32 modelShaderLoad(void *owner, const void *binary, u32 size, s32 unused);
u32 asdGxPresetsGetHeightByKind(u32 kind);
u32 asdGxPresetsGetByKind(u32 kind);
f32 (*mtx44OrthoC(f32 (*matrix)[4], f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane))[4];
void nn_math_ARMv6_MTX44PivotC_FAST(f32 (*matrix)[4], u32 pivot);
void cameraMatrixCacheReset(void *camera, s32 enabled);
void cameraMatrixCacheSetLookAt(void *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void stereoCameraSetPerspective(void *camera, u32 pivot, f32 fovy, f32 nearZ, f32 farZ, f32 aspect);
f32 (*mathCopyIdentityMatrix(f32 (*matrix)[4]))[4];
void FUN_0011b468(RenderContextSlot *slot, s32 index);
u32 FUN_0011a1a8(s32 index);

/* Sets up the render context: its flags, the default texture shader, the screen projections, the two
 * cameras and the twelve render slots. */
void asdRenderContextInitialize(RenderContext *context)
{
    context->unk11E8 = 1;
    context->unk11E9 = 3;
    context->unk05B0 = 1;
    context->unk11DC = 1;
    context->unk11E1 = 1;
    context->unk05F4 = 0;
    for (s32 i = 0; i < 12; i++)
        context->slots[i].enabled = 1;

    void *shader = asdOperatorNew(0x12A48);
    context->shader = shader != NULL ? FUN_0011b588(shader) : NULL;
    /* Block scope: retail gives the size's stack slot to the camera vectors below. */
    {
        u32 size;
        const void *binary = asdLoadFileSync(DAT_004091b8, &size, 1, 0x80);
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
        u8 *camera = context->cameras[0];
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
        cameraMatrixCacheReset(camera, 1);
        cameraMatrixCacheSetLookAt(camera, &eye, &target, &up);
        stereoCameraSetPerspective(camera, 1, 30.0f, 20.0f, 25600.0f, 400.0f / 240.0f);
        camera = context->cameras[1];
        cameraMatrixCacheReset(camera, 1);
        cameraMatrixCacheSetLookAt(camera, &eye, &target, &up);
        stereoCameraSetPerspective(camera, 1, 30.0f, 20.0f, 25600.0f, 320.0f / 240.0f);
    }

    mathCopyIdentityMatrix(context->identity);
    for (s32 i = 0; i < 12; i++) {
        FUN_0011b468(&context->slots[i], (u8)i);
        context->slotWords[i] = FUN_0011a1a8((u8)i);
    }
}

} /* extern "C" */
