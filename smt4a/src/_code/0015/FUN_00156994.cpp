/* NON_MATCHING: material and UV animations are now real sub-blocks (MaterialSlot/UvSlot, base pointers in r5 as in retail) and the material block is duplicated into both arms of the unk1B0 test as retail does; retail keeps the constants 1 and 0 in r6/r7 for the whole function (r4-r9 saved, 150 rows) and ends through a shared return block, the build has 128 rows and a conditional tail call. */
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

/* The material animation of a model: its track, animation and the per-material bindings. */
struct MaterialSlot {
    /* 0x00 */ AnimTrackState track;
    /* 0x0C */ AnimBinding *anim;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 bindings[0x10];
    /* 0x24 */ u8 trackKind[0xC];
};

/* The UV animation of a model. */
struct UvSlot {
    /* 0x00 */ AnimTrackState track;
    /* 0x0C */ AnimBinding *anim;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 bindings[0x1C];
};

struct ModelInstance {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x14];
    /* 0x01C */ s32 currentSlot;
    /* 0x020 */ u8 unk020[0x10];
    /* 0x030 */ AnimBinding *slots[1]; /* stride 0x30 */
    /* 0x034 */ u8 unk034[0x50];
    /* 0x084 */ MaterialSlot material;
    /* 0x0B4 */ UvSlot uv;
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
typedef char ModelInstanceSlotOffsetsCheck[
    offsetof(ModelInstance, material) == 0x84 && offsetof(ModelInstance, uv) == 0xB4 &&
    offsetof(ModelInstance, unk0E4) == 0xE4 ? 1 : -1];

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

/* Advances the material animation of a model. */
static __inline void updateMaterialAnimation(ModelInstance *model, f32 dt)
{
    MaterialSlot *slot = &model->material;
    AnimBinding *anim = slot->anim;
    if (anim != NULL) {
        void *trackKind = NULL;
        u32 i = 0;
        while (i < anim->trackCount) {
            if (anim->tracks[i]->kind == 6) {
                trackKind = slot->trackKind;
                break;
            }
            i++;
        }
        FUN_0017f87c(anim, model->materialStates, slot->bindings, trackKind, slot->track.time);
        gfxMarkMaterialAnimationCapabilities(
            reinterpret_cast<const MaterialFlagAnimation *>(slot->anim),
            reinterpret_cast<MaterialFlagStateArray *>(model->materialStates),
            reinterpret_cast<const MaterialFlagBindingArray *>(slot->bindings));
        trackAdvance(&slot->track, dt);
    }
}

/* Advances the material and UV animations of a model and rebuilds its world and normal matrices. */
void FUN_00156994(ModelInstance *model, void *outMatrix, f32 dt)
{
    u8 scratch[0x3C];

    if (model->flags & 2)
        return;

    FUN_0016a130(model);
    if (model->unk1B0 == 0) {
        FUN_0016a220(model, dt);
        updateMaterialAnimation(model, dt);
    } else {
        updateMaterialAnimation(model, dt);
    }
    UvSlot *uv = &model->uv;
    if (uv->anim != NULL) {
        FUN_001782c8(uv->anim, model->uvStates, uv->bindings, uv->track.time);
        trackAdvance(&uv->track, dt);
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
