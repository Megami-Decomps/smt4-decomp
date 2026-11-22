/* NON_MATCHING: 191 lines, written as modelManagerCollectDrawItems with the model's second-pass flag tested. Left, as there: retail
 * spills both parameters (push {r0, r1}), reads `variant` from its slot for every model, keeps the object's field
 * addresses (+0x114, +0x120, +0x180, +0x200) in registers and stack slots, and lays out the frame differently. */
#include "common.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelDrawList.h"


extern "C" {

void nn_math_ARMv6_VEC3TransformAsm_2AD44C(DrawVec3 *out, const void *matrix, const DrawVec3 *in);

/* Appends a draw item for every visible part in pass `variant` of every registered model that enables the
 * second pass, with its view-space depth (modelManagerCollectDrawItems with the model's pass flag tested). */
void modelManagerCollectSecondPassItems(DrawList *list, s32 variant)
{
    u32 *end = g_handleRegistry->objects.end();

    for (u32 *it = g_handleRegistry->objects.begin(); it != end; it++) {
        ModelObject *object = (ModelObject *)*it;

        if ((object->flags & 1) != 0 || object->meshSet == NULL || object->secondPassEnabled == 0)
            continue;
        ModelPartRange range = object->meshSet->parts[variant];

        for (ModelPart *part = range.begin; part < range.end; part++) {
            if ((object->visibleBits[part->visibilityBit >> 3] & (1 << (part->visibilityBit & 7))) == 0)
                continue;

            DrawItem item;
            const void *matrix;

            item.part = part;
            item.skeleton = object->skeleton;
            item.worldMatrix = object->worldMatrix;
            item.localMatrix = object->localMatrix;
            item.mirrored = (object->meshSet->flags & 2) >> 1;
            item.layer = object->layer;
            if (item.mirrored != 0 && part->skinMode == 1)
                matrix = item.skeleton->jointMatrices + part->skin->joint * 0x30;
            else
                matrix = object->worldMatrix;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&item.position, matrix, &part->position);

            f32 *camera = list->camera;
            item.depth = -(camera[8] * item.position.x + camera[9] * item.position.y + camera[10] * item.position.z + camera[11]);

            ModelPartEffects *effects = item.part->effects;
            if (effects != NULL) {
                u32 i;

                for (i = 0; i < effects->count; i++) {
                    if (effects->items[i].kind == 4)
                        break;
                }
                if (i >= effects->count)
                    continue;
            }

            item.mesh = object->meshSet->meshes + part->meshIndex * 0x2C;
            item.material = (u16 *)(object->materials + part->meshIndex * 0x158);
            if (list->visibleParts[item.material[0x10]] != 0)
                item.material[0] |= 0x100;
            item.instance = object->instances + part->meshIndex * 0x58;

            DrawItem *slot = list->end;
            if (slot != list->capacity) {
                list->end = slot + 1;
                if (slot != NULL)
                    *slot = item;
            } else {
                FUN_00198930(list, slot, &item);
            }
        }
    }
}

} /* extern "C" */
