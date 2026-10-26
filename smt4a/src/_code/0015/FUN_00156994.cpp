/* NON_MATCHING: retail tail-duplicates the whole animation/matrix block into both arms of the unk1B0 test (150 rows, r6/r7/r8/r9 saved); built keeps one copy */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

struct MatrixSlot {
    /* 0x00 */ u8 unk00[0x30];
};

struct AnimTrackInfo {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ s16 kind;
};

struct AnimTrackState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 time;
    /* 0x08 */ u32 unk08;
};

struct AnimBinding {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ AnimTrackInfo **tracks;
    /* 0x10 */ u32 trackCount;
};

struct ModelInstance {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x14];
    /* 0x01C */ s32 currentSlot;
    /* 0x020 */ u8 unk020[0x10];
    /* 0x030 */ AnimBinding *slots[1]; /* stride 0x30 */
    /* 0x034 */ u8 unk034[0x50];
    /* 0x084 */ AnimTrackState materialTrack;
    /* 0x090 */ AnimBinding *materialAnim;
    /* 0x094 */ u8 unk094[4];
    /* 0x098 */ u8 materialBindings[0x10];
    /* 0x0A8 */ u8 materialTrackKind[0xC];
    /* 0x0B4 */ AnimTrackState uvTrack;
    /* 0x0C0 */ AnimBinding *uvAnim;
    /* 0x0C4 */ u8 unk0C4[4];
    /* 0x0C8 */ u8 uvBindings[0x1C];
    /* 0x0E4 */ u8 unk0E4[0x28];
    /* 0x10C */ u8 materialStates[8];
    /* 0x114 */ u8 uvStates[0xC];
    /* 0x120 */ u8 normalMatrix[0x30];
    /* 0x150 */ u8 worldMatrix[0x30];
    /* 0x180 */ u8 normalWorld[0x30];
    /* 0x1B0 */ u32 unk1B0;
    /* 0x1B4 */ u8 unk1B4[0x4C];
    /* 0x200 */ u8 unk200;
    /* 0x201 */ u8 unk201[0x5B];
    /* 0x25C */ s32 unk25C;
};

extern "C" {
void FUN_0016a130(void *object);
void FUN_0016a220(ModelInstance *model, f32 dt);
void FUN_0017352c(void *flags, void *outMatrix, void *scratch);
void FUN_001782c8(AnimBinding *anim, void *states, void *bindings, f32 time);
void FUN_0017efa4(void *flags, void *out, s32 mode);
void FUN_0017f87c(AnimBinding *anim, void *states, void *bindings, void *trackKind, f32 time);
void trackAdvance(AnimTrackState *track, f32 dt);
void FUN_001881c8(void);
void nn_math_ARMv6_MTX34InverseAsm(void *dest, void *source);
void nn_math_ARMv6_MTX34CopyAsm(void *dest, const void *source);
void nn_math_ARMv6_MTX34InvTransposeAsm(void *dest, const void *source);
void nn_math_ARMv6_MTX34MultAsm(void *dest, const void *first, const void *second);

/* Advances the material and UV animations of a model and rebuilds its world and normal matrices. */
void FUN_00156994(ModelInstance *model, void *outMatrix, f32 dt)
{
    u8 scratch[0x3C];

    if (model->flags & 2)
        return;

    FUN_0016a130(model);
    if (model->unk1B0 == 0)
        FUN_0016a220(model, dt);

    AnimBinding *anim = model->materialAnim;
    if (anim != NULL) {
        void *trackKind = NULL;
        for (u32 i = 0; i < anim->trackCount; i++) {
            if (anim->tracks[i]->kind == 6) {
                trackKind = model->materialTrackKind;
                break;
            }
        }
        FUN_0017f87c(anim, model->materialStates, model->materialBindings, trackKind, model->materialTrack.time);
        gfxMarkMaterialAnimationCapabilities(
            reinterpret_cast<const MaterialFlagAnimation *>(model->materialAnim),
            reinterpret_cast<MaterialFlagStateArray *>(model->materialStates),
            reinterpret_cast<const MaterialFlagBindingArray *>(model->materialBindings));
        trackAdvance(&model->materialTrack, dt);
    }
    if (model->uvAnim != NULL) {
        FUN_001782c8(model->uvAnim, model->uvStates, model->uvBindings, model->uvTrack.time);
        trackAdvance(&model->uvTrack, dt);
    }

    AnimBinding *slot = *(AnimBinding **)((u8 *)model + model->currentSlot * 0x30 + 0x30);
    if (slot != NULL && (*slot->tracks)->kind == 9) {
        model->unk200 = 1;
        nn_math_ARMv6_MTX34CopyAsm(model->normalWorld, model->worldMatrix);
    } else {
        FUN_0017efa4(model->unk0E4, model->normalMatrix, 0);
        model->unk200 = 0;
        nn_math_ARMv6_MTX34InvTransposeAsm(model->normalWorld, model->normalMatrix);
        nn_math_ARMv6_MTX34MultAsm(model->normalWorld, model->worldMatrix, model->normalWorld);
    }
    nn_math_ARMv6_MTX34InverseAsm(scratch, outMatrix);
    if (model->unk0E4[0] & 1)
        FUN_0017352c(model->unk0E4, outMatrix, scratch);
    nn_math_ARMv6_MTX34CopyAsm(model->worldMatrix, outMatrix);
    if (model->unk25C != 0)
        FUN_001881c8();
}

} /* extern "C" */
