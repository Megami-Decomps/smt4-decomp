/* NON_MATCHING: not matched (153 rows against 152): retail spills the object argument to a 56-byte frame (its address is taken), the mesh loop and the inlined type-chain walks are laid out differently. The null `node` dereference after the flag test mirrors retail. */
#include "common.h"

/* Runtime type information as the engine's dynamic casts see it: a chain of base types. */
struct TypeInfo {
    const TypeInfo *base;
};

/* An engine object: slot 2 of its vtable returns its TypeInfo. */
class TypedObject {
public:
    virtual ~TypedObject();
    virtual const TypeInfo *getTypeInfo();
};

/* A self-relative offset: zero for none, otherwise the target lies `value` bytes past the field. */
static inline void *resolveOffset(s32 *field)
{
    return *field != 0 ? (u8 *)field + *field : NULL;
}

/* The resource-dictionary node a shadow lookup finds (observed fields). */
struct ShadowNode {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ s32 shadowMode;
};

/* The material data of a mesh (observed fields). */
struct MeshData {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 dictionary;       /* self-relative */
    /* 0x018 */ u8 unk018[0x25C];
    /* 0x274 */ s32 textures[3];      /* self-relative */
    /* 0x280 */ u8 unk280[0xF0];
    /* 0x370 */ u32 kind;
};

struct MeshObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MeshData *data;
};

/* The model, with its mesh vector and the flag block cast of the scene object. */
struct ShadowModel {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ MeshObject **meshesBegin;
    /* 0x168 */ MeshObject **meshesEnd;
    /* 0x16C */ u8 unk16C[0xB0];
    /* 0x21C */ u32 shadowCaster;
};

/* g_gfxSettings fields used here. */
struct GfxSettingsView {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[0x5E];
    /* 0x60 */ f32 shadowDepth;
    /* 0x64 */ u8 unk64[0x1C];
    /* 0x80 */ void *modelData;     /* the loaded graphics file */
};

extern "C" {

extern GfxSettingsView g_gfxSettings;
extern TypeInfo DAT_005c0f18;
extern TypeInfo DAT_005c0f34;

u32 libc_strlen(const char *text);
ShadowNode *nw_ut_ResDicPatricia_Get(void *dictionary, const char *name, u32 length);
void FUN_001b5314(MeshObject *mesh, s32 mode, f32 depth);

/* Dynamic cast: the object if `target` is among its type's bases, else NULL. */
static inline void *castTo(TypedObject *object, const TypeInfo *target)
{
    const TypeInfo *type;

    if (object == NULL) {
        return NULL;
    }
    for (type = object->getTypeInfo(); type != NULL; type = type->base) {
        if (type == target) {
            return object;
        }
    }
    return NULL;
}

/* Looks through the model's meshes for ones whose material carries a "shadow" entry and applies it; returns
 * whether any mesh needed the shadow pass. */
u32 FUN_001acca0(TypedObject *object)
{
    u32 applied = 0;
    ShadowModel *model;
    s32 i;

    if (g_gfxSettings.enabled == 0 || g_gfxSettings.modelData == NULL) {
        return 0;
    }
    model = (ShadowModel *)castTo(object, &DAT_005c0f18);
    for (i = 0; i < model->meshesEnd - model->meshesBegin; i++) {
        MeshObject *mesh = model->meshesBegin[i];
        MeshData *data = mesh->data;
        s32 textureCount = 0;
        s32 slot;

        for (slot = 0; slot < 3; slot++) {
            void *texture = resolveOffset(&data->textures[slot]);

            if (texture != NULL && resolveOffset((s32 *)((u8 *)texture + 8)) != NULL) {
                textureCount++;
            }
        }
        if (textureCount >= 2 && (data->kind & 0xFF) == 3) {
            void *dictionary = resolveOffset(&data->dictionary);
            ShadowNode *node = NULL;

            if (dictionary != NULL) {
                ShadowNode *found = nw_ut_ResDicPatricia_Get(&dictionary, "shadow", libc_strlen("shadow"));

                if (found != NULL) {
                    node = (ShadowNode *)resolveOffset((s32 *)((u8 *)found + 0xC));
                }
            }
            if (node != NULL) {
                if ((node->flags & 0x20000000) == 0) {
                    node = NULL;
                }
                if (node->shadowMode >= 1) {
                    if (node->shadowMode == 2) {
                        if (g_gfxSettings.enabled != 0) {
                            FUN_001b5314(mesh, 0, g_gfxSettings.shadowDepth);
                        }
                        applied = 1;
                    }
                    ((ShadowModel *)castTo(object, &DAT_005c0f34))->shadowCaster = 1;
                } else {
                    if (g_gfxSettings.enabled != 0) {
                        FUN_001b5314(mesh, 0, g_gfxSettings.shadowDepth);
                    }
                    applied = 1;
                }
            }
        }
    }
    return applied;
}

} /* extern "C" */
