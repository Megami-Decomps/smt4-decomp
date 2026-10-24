/* NON_MATCHING: logic recovered (runtime-type cast, "shadow" material lookup through the relative-offset dictionary, per-mesh strength call); retail keeps the dictionary-null/name tests, the relative-pointer loads and the global reloads unfused, builds the shadow record through the stack, and uses a 0x24 frame; twin of smt4 FUN_002fb604. */
#include "common.h"
#include "nw/ut/RuntimeTypeInfo.h"

/* The part of g_gfxSettings this reads: the model feature switch, the two shadow strengths and
 * the loaded graphics file. */
struct GfxShadowSettings {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[0x5E];
    /* 0x60 */ f32 shadowOff;
    /* 0x64 */ f32 shadowOn;
    /* 0x68 */ u8 unk68[0x18];
    /* 0x80 */ void *modelData;
};

/* A scene object that reports its runtime type through vtable slot 2. */
class GfxSceneObject {
public:
    virtual ~GfxSceneObject();
    virtual const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() const;
};

/* A value stored as an offset from its own address; 0 means none. */
template <class T>
static inline T *relativePointer(s32 *field)
{
    return *field != 0 ? reinterpret_cast<T *>(reinterpret_cast<u8 *>(field) + *field) : NULL;
}

struct GfxDictionaryNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 valueOffset;
};

struct GfxMaterialValue {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ s32 mode;
};

struct GfxMeshResource {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 dictionaryOffset;
};

struct GfxMesh {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ GfxMeshResource *resource;
};

/* The shadow switch of a model, kept as a small record. */
struct GfxShadowState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
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
extern GfxShadowSettings g_gfxSettings;
extern nw::ut::RuntimeTypeInfo DAT_005c0f18;
extern nw::ut::RuntimeTypeInfo DAT_005c0f34;

u32 wstrlen(const char *text);
void *nw_ut_ResDicPatricia_Get(void *dictionary, const char *name, u32 length);
void FUN_001b5314(GfxMesh *mesh, s32 flag, f32 strength);

/* The named value of the mesh's material dictionary, if the mesh has one. */
static inline GfxMaterialValue *findMaterialValue(GfxMesh *mesh, const char *name)
{
    void *dictionary = relativePointer<void>(&mesh->resource->dictionaryOffset);
    if (dictionary == NULL || name == NULL) {
        return NULL;
    }
    GfxDictionaryNode *node = static_cast<GfxDictionaryNode *>(nw_ut_ResDicPatricia_Get(&dictionary, name, wstrlen(name)));
    if (node == NULL) {
        return NULL;
    }
    return relativePointer<GfxMaterialValue>(&node->valueOffset);
}

/* Switches every mesh of the model between its shadow strengths, per the "shadow" material value. */
s32 FUN_00386548(GfxSceneObject *object)
{
    if (!g_gfxSettings.enabled) {
        return 0;
    }
    if (g_gfxSettings.modelData == NULL) {
        return 0;
    }
    GfxModel *model = nw::ut::DynamicCast<GfxModel>(object, &DAT_005c0f18);
    for (s32 i = 0; i < model->meshesEnd - model->meshesBegin; i++) {
        GfxMesh *mesh = model->meshesBegin[i];
        GfxMaterialValue *value = findMaterialValue(mesh, "shadow");
        if (value != NULL) {
            if (!(value->flags & 0x20000000)) {
                value = NULL;
            }
            if (value->mode > 0) {
                if (value->mode == 2 && g_gfxSettings.enabled) {
                    FUN_001b5314(mesh, 1, g_gfxSettings.shadowOn);
                }
                GfxModel *shadowed = nw::ut::DynamicCast<GfxModel>(object, &DAT_005c0f34);
                GfxShadowState state;
                state.active = 1;
                shadowed->shadow = state;
            } else if (g_gfxSettings.enabled) {
                FUN_001b5314(mesh, 1, g_gfxSettings.shadowOff);
            }
        }
    }
    return 1;
}

}
