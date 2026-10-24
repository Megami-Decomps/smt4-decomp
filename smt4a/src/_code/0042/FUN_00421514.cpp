/* NON_MATCHING: first rewrite from the asm (189 rows against 204): retail spills self/owner/value (push {r0,r1}, vpush {d0}) and keeps the 128-halfword marked list plus its count in stack slots with two further 0-initialised stack words stored per slot (two 8-byte {f32,u32} locals), ours keeps the loop state in registers */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define MAX_MARKED_PARTS 64
#define MATERIAL_SLOTS 3

struct MaterialSlotRef {
    u8 pad00[0x1C];
    u32 name;                        /* 0x1C */
};

/* Material record, stride 0x2C (observed fields only). */
struct Material {
    u8 pad00[4];
    MaterialSlotRef *slot[MATERIAL_SLOTS]; /* 0x04, 0x08, 0x0C */
    u8 pad10[0x2C - 0x10];
};

/* Mesh part, stride 0x38 (observed fields only). */
struct MeshPart {
    u16 material;                    /* 0x00 */
    u8 pad02[0x36];
};

struct Mesh {
    u8 pad00[0x34];
    Material *materials;             /* 0x34 */
    u8 pad38[8];
    MeshPart *parts;                 /* 0x40 */
    s32 partCount;                   /* 0x44 */
};

/* Per-part slot record of the node, stride 0x158. */
struct PartState {
    u16 flags;                       /* 0x00 */
    u8 pad02[1];
    u8 pad03[0xEC - 3];
    f32 pointA[MATERIAL_SLOTS][2];   /* 0xF0, stride 0x18 per slot */
    u8 pad108[0x140 - 0x108];
};

struct SceneNode {
    u8 pad000[0x10C];
    u8 *parts;                       /* 0x10C: PartState array, stride 0x158 */
    u8 pad110[0x210 - 0x110];
    Mesh *mesh;                      /* 0x210 */
};

struct SceneList {
    u8 pad00[0x10];
    s32 nodeCount;                   /* 0x10 */
};

struct SceneHolder {
    u8 pad00[8];
    SceneList *list;                 /* 0x08 */
};

struct ParallaxOwner {
    u8 pad00[8];
    u8 *model;                       /* 0x08 */
    u8 pad0C[4];
    u32 offset[3];                   /* 0x10 */
};

struct MarkOwner {
    u8 pad00[4];
    ParallaxOwner *parallax;         /* 0x04 */
    SceneHolder *scene;              /* 0x08 */
    u8 pad0C[0x30 - 0x0C];
    f32 value;                       /* 0x30 */
};

struct MarkedPart {
    s16 part;
    s16 slot;
};

s32 FUN_004019c0(ParallaxOwner *owner, u8 buffer[28]);
s32 FUN_00401a74(ParallaxOwner *owner, f32 *a, f32 *b);
SceneNode *FUN_0040619c(SceneList *list, s32 index);
s32 tripleOwnerSetValue(SceneNode *node, u8 buffer[28]);
s32 FUN_00102c30(u32 name, const char *key);

/* Marks, on every scene node, the mesh parts whose material slots carry a "dami" name, and
 * stores the owner's parallax offsets and flags on those part slots. */
void FUN_00421514(MarkOwner *self, ParallaxOwner *owner, f32 value)
{
    u8 buffer[28];

    self->parallax = owner;
    self->value = value;
    FUN_004019c0(owner, buffer);
    if (self->scene != 0) {
        s32 nodeCount = self->scene->list->nodeCount;
        for (s32 n = 0; n < nodeCount; n++) {
            MarkedPart marked[MAX_MARKED_PARTS];
            s32 markedCount = 0;
            SceneNode *node = FUN_0040619c(self->scene->list, n);
            if (node != 0) {
                tripleOwnerSetValue(node, buffer);
            }
            Mesh *mesh = node->mesh;
            for (s32 p = 0; p < mesh->partCount; p++) {
                MeshPart *part = &mesh->parts[p];
                Material *material = &mesh->materials[part->material];
                for (s32 slot = 0; slot < MATERIAL_SLOTS; slot++) {
                    MaterialSlotRef *ref = material->slot[slot];
                    if (ref != 0 && FUN_00102c30(ref->name, "dami") != 0) {
                        s32 k;
                        for (k = 0; k < markedCount; k++) {
                            if (marked[k].part == (s32)part->material) {
                                break;
                            }
                        }
                        if (k == markedCount) {
                            marked[markedCount].part = (s16)part->material;
                            marked[markedCount].slot = (s16)slot;
                            markedCount++;
                        }
                    }
                }
            }

            f32 a;
            f32 b;
            ParallaxOwner *parallax = self->parallax;
            FUN_00401a74(parallax, &a, &b);
            b = -(b * (1.0f / a));
            u32 offset0 = parallax->offset[0];
            u32 offset1 = parallax->offset[1];
            u32 offset2 = parallax->offset[2];
            u8 kind = *(u8 *)(*(u8 **)(*(u8 **)(parallax->model + 8) + 0xC) + 0x34);
            for (s32 m = 0; m < markedCount; m++) {
                s32 slot = marked[m].slot;
                u8 *state = node->parts + marked[m].part * 0x158;
                u16 *flags = (u16 *)state;
                if (slot == 0) {
                    *flags |= 0x1000;
                } else if (slot == 1) {
                    *flags |= 0x2000;
                } else if (slot == 2) {
                    *flags |= 0x4000;
                }
                f32 *slotFloats = (f32 *)(state + 0xF0 + slot * 0x18);
                slotFloats[0] = a;
                *(u32 *)(slotFloats + 1) = 0;
                slotFloats[3] = b;
                *(u32 *)(slotFloats + 4) = 0;
                u32 *slotValue = (u32 *)(state + 0x140);
                if (slot == 0) {
                    *slotValue = offset0;
                } else if (slot == 1) {
                    *slotValue = offset1;
                } else if (slot == 2) {
                    *slotValue = offset2;
                } else {
                    continue;
                }
                *(u16 *)(state + 0x144) = 12;
                *(u16 *)(state + 0x146) = 0;
                if (kind == 12) {
                    state[2] = state[2] | 1;
                } else {
                    state[2] = state[2] & 0xFE;
                }
            }
        }
    }
}

} /* extern "C" */
