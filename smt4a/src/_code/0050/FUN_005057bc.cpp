/* NON_MATCHING: register allocation and instruction scheduling (retail keeps the output pointer in r6, copies the palette matrix as 8+7 floats and a single float, and loads the track record through writeback addressing) */
#include "shard/S1Skeleton.h"

extern "C" {

void FUN_0050594c(SkeletonObj *skeleton, Mtx44Data *out, SkeletonTrack *track, f32 *node, s32 flags, f32 frame);
void FUN_00505f04(SkeletonObj *skeleton, Mtx44Data *out, SkeletonTrack *track, f32 *node, s32 flags, f32 frame);
void FUN_00467684(Mtx44Data *out, void *data, f32 frame);
void FUN_0044baf4(Mtx44Data *out, f32 *rotation, f32 *scale);
void FUN_0044b864(SkeletonObj *skeleton, Mtx44Data *out);

/* Compute the matrix of a bone: copy it from the palette when one is bound, otherwise build it from
 * the animation track (or the bone's rest pose). Returns `out`, or NULL when the skeleton has no such
 * bone. */
Mtx44Data *FUN_005057bc(SkeletonObj *skeleton, Mtx44Data *out, s32 bone, s32 flags)
{
    if (!skeleton->vtbl->hasBone(skeleton, bone)) {
        return NULL;
    }
    if (skeleton->palette != skeleton->paletteEnd && !skeleton->paletteDisabled && skeleton->anim != NULL) {
        *out = skeleton->palette[skeleton->boneIndex[bone]];
        return out;
    }

    f32 *node = skeleton->model->boneNodes[bone];

    if (skeleton->anim != NULL) {
        SkeletonTrackTable *table = (SkeletonTrackTable *)skeletonRelPtrGet(&skeleton->anim->tracks);
        SkeletonTrack *track = NULL;

        if (table != NULL) {
            track = (SkeletonTrack *)skeletonRelPtrGet(&table->slots[skeleton->boneIndex[bone]].track);
        }
        switch (track->kind) {
        case 5:
            FUN_0050594c(skeleton, out, track, node, flags, skeleton->frame);
            break;
        case 8:
            FUN_00505f04(skeleton, out, track, node, flags, skeleton->frame);
            break;
        case 9:
            FUN_00467684(out, skeletonRelPtrGet(&track->data), skeleton->frame);
            break;
        }
    } else {
        out->m[12] = node[0];
        out->m[13] = node[1];
        out->m[14] = node[2];
        FUN_0044baf4(out, node + 3, node + 6);
        FUN_0044b864(skeleton, out);
    }
    return out;
}

} /* extern "C" */
