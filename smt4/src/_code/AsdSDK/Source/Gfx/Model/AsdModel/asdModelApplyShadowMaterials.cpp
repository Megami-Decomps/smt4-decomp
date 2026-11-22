/* NON_MATCHING: retail spills the object argument (push {r0}) and the result into a 56-byte frame, hoists NULL, 628 and "shadow" into registers, keeps the dictionary and value lookups unthreaded (`b` over a `mov r0, #0`) and reads g_gfxSettings.modelData as `add r0, r6, #128; ldr r0, [r0]`; sibling of FUN_002fb604. */
#include "common.h"
#include "nw/ut/RuntimeTypeInfo.h"
#include "gfx/GfxSettings.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

/* A scene object that reports its runtime type through vtable slot 2. */
class GfxSceneObject {
public:
    virtual ~GfxSceneObject();
    virtual const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() const;
};

/* The "shadow" value of a material dictionary. */
struct GfxMaterialValue {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ s32 mode;
};

struct GfxDictionaryNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ ResourceRelativePointer<GfxMaterialValue> value;
};

struct GfxDictionaryData;

/* nw::ut::ResDicPatricia: a dictionary viewed through its data pointer. */
struct GfxDictionary {
    GfxDictionaryData *data;

    GfxDictionary(GfxDictionaryData *dictionary) : data(dictionary) {}
    inline GfxMaterialValue *find(const char *key) const;
};

struct GfxTextureMapper {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ResourceRelativePointer<void> texture;
};

struct GfxMeshResource {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ ResourceRelativePointer<GfxDictionaryData> dictionary;
    /* 0x018 */ u8 unk018[0x158];
    /* 0x170 */ u32 kind;
    /* 0x174 */ u8 unk174[0x100];
    /* 0x274 */ ResourceRelativePointer<GfxTextureMapper> textureMappers[3];
};

struct GfxMesh {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ GfxMeshResource *resource;
};

/* The shadow switch of a model, kept as a small record. */
struct GfxShadowState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];

    GfxShadowState(u8 value) : active(value) {}
};

class GfxModel : public GfxSceneObject {
public:
    /* 0x004 */ u8 unk004[0x160];
    /* 0x164 */ GfxMesh **meshesBegin;
    /* 0x168 */ GfxMesh **meshesEnd;
    /* 0x16C */ u8 unk16C[0xB0];
    /* 0x21C */ GfxShadowState shadow;
};

extern "C" {
extern nw::ut::RuntimeTypeInfo DAT_00472180;
extern nw::ut::RuntimeTypeInfo DAT_00472288;

u32 libc_strlen(const char *text);
GfxDictionaryNode *nw_ut_ResDicPatricia_Get(const GfxDictionary *dictionary, const char *name, u32 length);
void FUN_002a3204(GfxMesh *mesh, s32 flag, f32 strength);
}

inline GfxMaterialValue *GfxDictionary::find(const char *key) const
{
    if (data != NULL && key != NULL) {
        GfxDictionaryNode *node = nw_ut_ResDicPatricia_Get(this, key, libc_strlen(key));
        if (node != NULL) {
            return node->value.get();
        }
    }
    return NULL;
}

/* Looks through the model's meshes for ones whose material carries a "shadow" entry and applies it; returns
 * whether any mesh needed the shadow pass. */
extern "C" u32 asdModelApplyShadowMaterials(GfxSceneObject *object)
{
    if (!g_gfxSettings.initialized) {
        return 0;
    }
    if (g_gfxSettings.modelData == NULL) {
        return 0;
    }
    u32 applied = 0;
    GfxModel *model = nw::ut::DynamicCast<GfxModel>(object, &DAT_00472180);
    for (s32 i = 0; i < model->meshesEnd - model->meshesBegin; i++) {
        GfxMesh *mesh = model->meshesBegin[i];
        GfxMeshResource *resource = mesh->resource;
        s32 textureCount = 0;
        for (s32 slot = 0; slot < 3; slot++) {
            GfxTextureMapper *mapper = resource->textureMappers[slot].get();
            if (mapper != NULL && mapper->texture.get() != NULL) {
                textureCount++;
            }
        }
        if (textureCount > 1 && (resource->kind & 0xFF) == 3) {
            GfxDictionary dictionary(resource->dictionary.get());
            GfxMaterialValue *value = dictionary.find("shadow");
            if (value != NULL) {
                if (!(value->flags & 0x20000000)) {
                    value = NULL;
                }
                if (value->mode > 0) {
                    if (value->mode == 2) {
                        if (g_gfxSettings.initialized) {
                            FUN_002a3204(mesh, 0, g_gfxSettings.shadowOn);
                        }
                        applied = 1;
                    }
                    nw::ut::DynamicCast<GfxModel>(object, &DAT_00472288)->shadow = GfxShadowState(1);
                } else {
                    if (g_gfxSettings.initialized) {
                        FUN_002a3204(mesh, 0, g_gfxSettings.shadowOff);
                    }
                    applied = 1;
                }
            }
        }
    }
    return applied;
}
