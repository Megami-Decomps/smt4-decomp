/* NON_MATCHING: register allocation, and the 64-byte transform copy (retail splits its last VFP store into vstmia s0-s6 + vstr s7). */
#include "common.h"
#include "shard/S3GfxAnim.h"

extern "C" {

void FUN_00236350(GfxTransform *transform, f32 *rotation, f32 *scale);
void FUN_00380e30(GfxTransform *out, void *data, f32 frame);
void nw_gfx_TransformAnimEvaluator_EvaluateMemberAnim(GfxAnimEvaluator *evaluator, GfxTransform *out, GfxAnimEntry *entry, GfxAnimMember *member, s32 arg4, f32 frame);
void nw_gfx_TransformAnimEvaluator_EvaluateMemberBakedAnim(GfxAnimEvaluator *evaluator, GfxTransform *out, GfxAnimEntry *entry, GfxAnimMember *member, s32 arg4, f32 frame);
void nw_gfx_TransformAnimEvaluator_UpdateFlags(GfxAnimEvaluator *evaluator, GfxTransform *transform);

/* Evaluates the transform of member `index` into `out` (from the baked table when there is one,
 * else from the member's animation record, else from its static pose); returns `out`, or NULL
 * when the member does not exist. */
GfxTransform *FUN_003e4548(GfxAnimEvaluator *evaluator, GfxTransform *out, s32 index, s32 arg3)
{
    if (!evaluator->vtbl->hasMember(evaluator, index)) {
        return NULL;
    }
    if (evaluator->bakedTransforms != evaluator->bakedTransformsEnd && evaluator->baked == 0 && evaluator->animData != NULL) {
        *out = evaluator->bakedTransforms[evaluator->recordIndex[index]];
    } else {
        GfxAnimMember *member = evaluator->model->members[index];

        if (evaluator->animData != NULL) {
            u8 *table = (u8 *)gfxRelativePointer(&evaluator->animData->tableOffset);
            GfxAnimEntry *entry = NULL;

            if (table != NULL) {
                entry = (GfxAnimEntry *)gfxRelativePointer((s32 *)(table + evaluator->recordIndex[index] * 16 + 0x28));
            }
            switch (entry->type) {
            case GFX_ANIM_MEMBER_ANIM:
                nw_gfx_TransformAnimEvaluator_EvaluateMemberAnim(evaluator, out, entry, member, arg3, evaluator->frame);
                break;
            case GFX_ANIM_BAKED_ANIM:
                nw_gfx_TransformAnimEvaluator_EvaluateMemberBakedAnim(evaluator, out, entry, member, arg3, evaluator->frame);
                break;
            case GFX_ANIM_FRAME_DATA:
                FUN_00380e30(out, gfxRelativePointer(&entry->dataOffset), evaluator->frame);
                break;
            }
        } else {
            out->m[12] = member->translation[0];
            out->m[13] = member->translation[1];
            out->m[14] = member->translation[2];
            FUN_00236350(out, member->rotation, member->scale);
            nw_gfx_TransformAnimEvaluator_UpdateFlags(evaluator, out);
        }
    }
    return out;
}

} /* extern "C" */
