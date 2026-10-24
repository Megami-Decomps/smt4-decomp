/* NON_MATCHING: draw-item collection over the registered models; the transform/depth float chain and the vector append (inline fast path + FUN_00198930 slow path) are written plainly and not compared with retail */
#include "common.h"

struct DrawVec3 {
    f32 x, y, z;
};

/* One mesh part of a model: its index, visibility bit, skin binding and local position. */
struct ModelPart {
    /* 0x00 */ u16 meshIndex;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 visibilityBit;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u16 skin;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u8 unk0C[0x04];
    /* 0x10 */ DrawVec3 position;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ struct { u32 *kinds; u16 count; } *effects;
    /* 0x38 */ u8 unk38[4];
};

/* One collected draw item (0x30 bytes). */
struct DrawItem {
    /* 0x00 */ ModelPart *part;
    /* 0x04 */ void *mesh;
    /* 0x08 */ void *parentMatrix;
    /* 0x0C */ u16 *material;
    /* 0x10 */ void *instance;
    /* 0x14 */ DrawVec3 position;
    /* 0x20 */ void *localMatrix;
    /* 0x24 */ void *worldMatrix;
    /* 0x28 */ u32 flags;
    /* 0x2C */ f32 depth;
};

struct DrawList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ DrawItem *end;
    /* 0x08 */ DrawItem *capacity;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ f32 *camera;   /* [8..11]: view row used for the depth */
    /* 0x18 */ u8 visibleParts[1];
};

struct HandleRegistry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 **modelsBegin;
    /* 0x1C */ u32 **modelsEnd;
};

extern "C" {
extern HandleRegistry *g_handleRegistry;

void FUN_00198930(DrawList *list, DrawItem *at, ModelPart **part);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(DrawVec3 *out, void *matrix, DrawVec3 *in);

/* Appends a draw item for every visible part of every registered model that has a mesh variant
 * `variant`, computing its view-space depth. */
void FUN_0016bb74(DrawList *list, s32 variant)
{
    u32 **model = g_handleRegistry->modelsBegin;
    u32 **modelsEnd = g_handleRegistry->modelsEnd;
    for (; model != modelsEnd; model++) {
        u8 *object = (u8 *)*model;
        u8 *meshSet = *(u8 **)(object + 0x210);
        if ((*(u32 *)(object + 4) & 1) != 0 || meshSet == NULL)
            continue;
        ModelPart *part = *(ModelPart **)(meshSet + 0x48 + variant * 8);
        ModelPart *partsEnd = *(ModelPart **)(meshSet + 0x4C + variant * 8);
        for (; part < partsEnd; part = (ModelPart *)((u8 *)part + 0x38)) {
            u8 visibleMask = (*(u8 **)(object + 0x114))[part->visibilityBit >> 3];
            if ((visibleMask & (1 << (part->visibilityBit & 7))) == 0)
                continue;

            void *parentMatrix = *(void **)(object + 0x108);
            void *localMatrix = object + 0x180;
            void *worldMatrix = object + 0x120;
            u32 mirrored = (*meshSet & 2) >> 1;
            u32 flags = ((u32)object[0x200] << 8) | (u8)mirrored;
            void *matrix = worldMatrix;
            if (mirrored != 0 && *(s32 *)((u8 *)part + 0x28) == 1)
                matrix = *(u8 **)((u8 *)parentMatrix + 0x14) + **(u16 **)((u8 *)part + 0x20) * 0x30;

            DrawVec3 position;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&position, matrix, &part->position);
            f32 *camera = *(f32 **)((u8 *)list + 0x14);
            f32 depth = -(camera[9] * position.y + camera[10] * position.z + camera[11] + camera[8] * position.x);

            u32 *effects = *(u32 **)((u8 *)part + 0x34);
            bool drawn = effects == NULL;
            if (!drawn) {
                for (u32 i = 0; i < *(u16 *)(effects + 1); i++) {
                    if (*(s8 *)(*effects + i * 0xC + 4) == 4) {
                        drawn = true;
                        break;
                    }
                }
            }
            if (!drawn)
                continue;

            void *mesh = *(u8 **)(meshSet + 0x34) + part->meshIndex * 0x2C;
            u16 *material = (u16 *)(*(u8 **)(object + 0x10C) + part->meshIndex * 0x158);
            if (*((u8 *)list + 0x18 + material[0x10]) != 0)
                material[0] |= 0x100;
            void *instance = *(u8 **)(object + 0x254) + part->meshIndex * 0x58;

            DrawItem *slot = list->end;
            if (slot != list->capacity) {
                list->end = slot + 1;
                if (slot != NULL) {
                    slot->part = part;
                    slot->mesh = mesh;
                    slot->parentMatrix = parentMatrix;
                    slot->material = material;
                    slot->instance = instance;
                    slot->position = position;
                    slot->localMatrix = worldMatrix;
                    slot->worldMatrix = localMatrix;
                    slot->flags = flags;
                    slot->depth = depth;
                }
            } else {
                FUN_00198930(list, slot, &part);
            }
        }
    }
}

} /* extern "C" */
