/* NON_MATCHING: brings the model system up: starts the screen fade, loads the shadow model and the shadow
 * shader, builds the shadow scene object and the three shadow render helpers (183 raw / 97 shape rows). Left:
 * retail carries the model's first material into the caster pass through s16 (vldr/vstr and vpush {d8}, as if
 * the word were a float; an f32 field and local still build a core register copy, so the pointer type stays),
 * reads g_gfxSettings.shadowModelFile through its address (add r0, r8, #108; ldr r0, [r0]), keeps the
 * dictionary in the outgoing-argument slot and the model resource above the builder (other frame order),
 * schedules the builder's stores differently, uses the hoisted zero for the casts' NULL, and stores the caster
 * pass's layer before its vtable/fade pair (strd). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/FileLoadSync.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"
#include "classes/AllocatorWordVector.h"
#include "gfx/GfxSettings.h"
#include "nw/ut/RuntimeTypeInfo.h"
#include "shard/W5_W5Match2_ModelColor.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

/* A scene object that reports its runtime type through vtable slot 2. */
class GfxSceneObject {
public:
    virtual ~GfxSceneObject();
    virtual const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() const;
};

struct ShadowShaderProgram;

/* nw::gfx::res::ResMaterialColor: the float colours and their packed copies. */
struct ShadowMaterialColor {
    /* 0x00 */ ModelColor emission;
    /* 0x10 */ ModelColor ambient;
    /* 0x20 */ ModelColor diffuse;
    /* 0x30 */ u8 unk30[0x88];
    /* 0xB8 */ u32 diffuseU32;
};

struct ShadowMaterialResource {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ ShadowMaterialColor color;
    /* 0x0E0 */ u8 unk0E0[0x60];
    /* 0x140 */ u32 flags;
    /* 0x144 */ u8 unk144[0x160];
    /* 0x2A4 */ u32 unk2A4;
};

struct ShadowMaterial {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ShadowMaterialResource *resource;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ ShadowShaderProgram *shader;
};

class GfxShadowModel : public GfxSceneObject {
public:
    /* 0x004 */ u8 unk004[0x160];
    /* 0x164 */ ShadowMaterial **materialsBegin;
};

struct ShadowModelResource;

struct ShadowDictionaryNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ ResourceRelativePointer<ShadowModelResource> value;
};

struct ShadowDictionaryData;

/* nw::ut::ResDicPatricia: a dictionary viewed through its data pointer. */
struct ShadowDictionary {
    ShadowDictionaryData *data;

    ShadowDictionary(ShadowDictionaryData *dictionary) : data(dictionary) {}
    inline ShadowModelResource *find(const char *key) const;
};

/* ShadowModel.bcmdl: the models dictionary of the graphics file. */
struct ShadowModelFile {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ ResourceRelativePointer<ShadowDictionaryData> models;
};

/* The shader the first dictionary entry of nwgfx_ShadowShader.bcsdr names. */
struct ShadowShaderResource {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ResourceRelativePointer<ResourceRelativePointer<ShadowShaderProgram> > program;
};

struct ShadowShaderDictionary {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ ResourceRelativePointer<ShadowShaderResource> first;
};

struct ShadowShaderFile {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ ResourceRelativePointer<ShadowShaderDictionary> shaders;

    ShadowShaderResource *firstShader() const
    {
        ShadowShaderDictionary *dictionary = shaders.get();
        return dictionary ? dictionary->first.get() : NULL;
    }
};

/* nw::gfx::SceneBuilder: the request a scene object is created from. */
struct ShadowSceneBuilder {
    /* 0x00 */ ShadowModelResource *resource;
    /* 0x04 */ bool isFixedSizeMemory;
    /* 0x08 */ s32 maxChildren;
    /* 0x0C */ s32 maxCallbacks;
    /* 0x10 */ s32 bufferOption;
    /* 0x14 */ void *sharedMaterialModel;
    /* 0x18 */ void *sharedMeshNodeVisibilityModel;
    /* 0x1C */ s32 maxAnimObjectsPerGroup;
    /* 0x20 */ s32 particleSetMarginCount;
    /* 0x24 */ bool isAnimationEnabled;
};

extern "C" {
extern const u32 DAT_00420980[];                    /* vtable of ShadowCasterPass (0x420978 + 8) */
extern const u32 _ZTV9Obj420908[];                  /* vtable of ShadowCasterLink */
extern const u32 _ZTV9Obj4208a0[];                  /* vtable of ShadowReceiverPass */
}

/* The three shadow render helpers (0x18, 0xC and 0x10 bytes). */
struct ShadowCasterPass {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 fade;            /* the newest fade object */
    /* 0x08 */ s32 layer;
    /* 0x0C */ ShadowMaterial *material; /* the shadow model's first material */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;

    ShadowCasterPass(u32 fadeObject, ShadowMaterial *shadowMaterial)
        : vtable(DAT_00420980), fade(fadeObject), layer(2), material(shadowMaterial), unk10(0), unk14(0) {}
};

struct ShadowCasterLink {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ ShadowCasterPass *pass;
    /* 0x08 */ u32 unk08;

    ShadowCasterLink(ShadowCasterPass *casterPass) : vtable(_ZTV9Obj420908 + 2), pass(casterPass), unk08(0) {}
};

struct ShadowReceiverPass {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 fade;
    /* 0x08 */ u32 slotState;
    /* 0x0C */ u32 unk0C;

    ShadowReceiverPass(u32 fadeObject, u32 state) : vtable(_ZTV9Obj4208a0 + 2), fade(fadeObject), slotState(state), unk0C(0) {}
};

extern "C" {
extern nw::ut::RuntimeTypeInfo DAT_0044e858;       /* type of a scene node */
extern nw::ut::RuntimeTypeInfo DAT_00472180;       /* type of a model */
extern AllocatorWordVector DAT_004dae60;           /* the fade objects */
extern u32 DAT_00464bbc;                            /* g_gfxSettings.slotState[0] */
extern ShadowCasterPass *DAT_00472950;
extern ShadowCasterLink *DAT_00472954;
extern ShadowReceiverPass *DAT_00472958;

void FUN_0010bb84(u32 color, u32 flags);
u32 libc_strlen(const char *text);
ShadowDictionaryNode *nw_ut_ResDicPatricia_Get(const ShadowDictionary *dictionary, const char *name, u32 length);
void nw_gfx_res_ResModel_Setup(ShadowModelResource **model, AsdAllocator *allocator, ShadowModelFile *file);
void nw_gfx_res_ResGraphicsFile_Setup(ShadowShaderFile **file, AsdAllocator *allocator, ShadowShaderFile *other);
GfxSceneObject *nw_gfx_SceneBuilder_CreateObject(ShadowSceneBuilder *builder, AsdAllocator *allocator, AsdAllocator *deviceAllocator);
u32 nw_ut_FloatColor_ToPicaU32(ModelColor *color);
void *asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
}

inline ShadowModelResource *ShadowDictionary::find(const char *key) const
{
    if (data != NULL && key != NULL) {
        ShadowDictionaryNode *node = nw_ut_ResDicPatricia_Get(this, key, libc_strlen(key));
        if (node != NULL) {
            return node->value.get();
        }
    }
    return NULL;
}

extern "C" void asdModelSystemStart(u32 fadeColor, u32 fadeFlags)
{
    g_gfxSettings.initialized = 1;
    FUN_0010bb84(fadeColor, fadeFlags);

    g_gfxSettings.shadowModelFile = (ShadowModelFile *)fileLoadSync("ShadowModel.bcmdl", NULL, 1);
    ShadowDictionary models(g_gfxSettings.shadowModelFile->models.get());
    ShadowModelResource *modelResource = models.find("ShadowModel");
    nw_gfx_res_ResModel_Setup(&modelResource, asdMemoryGetAllocatorA(), g_gfxSettings.shadowModelFile);

    AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
    AsdAllocator *deviceAllocator = asdMemoryGetAllocatorA();
    ShadowSceneBuilder builder;
    builder.isFixedSizeMemory = true;
    builder.maxChildren = 8;
    builder.maxCallbacks = 4;
    builder.bufferOption = 0;
    builder.sharedMaterialModel = NULL;
    builder.sharedMeshNodeVisibilityModel = NULL;
    builder.maxAnimObjectsPerGroup = 4;
    builder.particleSetMarginCount = 0;
    builder.isAnimationEnabled = true;
    builder.resource = modelResource;
    GfxSceneObject *created = nw_gfx_SceneBuilder_CreateObject(&builder, allocator, deviceAllocator);
    GfxSceneObject *object = nw::ut::DynamicCast<GfxSceneObject>(created, &DAT_0044e858);
    g_gfxSettings.shadowModel = nw::ut::DynamicCast<GfxShadowModel>(object, &DAT_00472180);

    ShadowShaderFile *shaderFile = (ShadowShaderFile *)fileLoadSync("nwgfx_ShadowShader.bcsdr", NULL, 1);
    nw_gfx_res_ResGraphicsFile_Setup(&shaderFile, asdMemoryGetDefaultAllocator(), shaderFile);
    ShadowShaderResource *shader = shaderFile->firstShader();
    ShadowShaderProgram *program = shader->program.get()->get();
    ShadowMaterial *material = g_gfxSettings.shadowModel->materialsBegin[0];
    material->shader = program;
    material->resource->unk2A4 = 0;

    GfxShadowModel *model = nw::ut::DynamicCast<GfxShadowModel>(object, &DAT_00472180);
    model->materialsBegin[0]->resource->flags |= 3;
    ShadowMaterialColor *color = &model->materialsBegin[0]->resource->color;
    color->diffuse.Set(0.0f, 0.0f, 0.0f, 0.0f);
    color->diffuseU32 = nw_ut_FloatColor_ToPicaU32(&color->diffuse);

    ShadowMaterial *casterMaterial = g_gfxSettings.shadowModel->materialsBegin[0];
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 3336);
    void *casterPass = asdMemoryAlloc(0x10000, 0x100, 0, sizeof(ShadowCasterPass), 1);
    DAT_00472950 = casterPass != NULL ? new (casterPass) ShadowCasterPass(DAT_004dae60.begin[0], casterMaterial) : NULL;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 3343);
    void *casterLink = asdMemoryAlloc(0x10000, 0x100, 0, sizeof(ShadowCasterLink), 1);
    DAT_00472954 = casterLink != NULL ? new (casterLink) ShadowCasterLink(DAT_00472950) : NULL;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 3347);
    void *receiverPass = asdMemoryAlloc(0x10000, 0x100, 0, sizeof(ShadowReceiverPass), 1);
    DAT_00472958 = receiverPass != NULL ? new (receiverPass) ShadowReceiverPass(DAT_004dae60.begin[0], DAT_00464bbc) : NULL;
}
