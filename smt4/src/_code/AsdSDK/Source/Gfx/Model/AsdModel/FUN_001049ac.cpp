/* NON_MATCHING: loads the shadow model and shader (graphics files), builds the shadow scene object and its three helper objects; written from the decompilation, the nw::gfx builder/RTTI inlining is approximated and the helper objects' vtables (unnamed classes) and the allocation trace calls (source path AsdModel.cpp) are not reproduced */
#include "common.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

struct NwTypeInfo {
    NwTypeInfo *parent;
};

/* An nw::gfx object; slot 2 returns its type information. */
class NwObject {
public:
    virtual ~NwObject();
    virtual void slot04();
    virtual const NwTypeInfo *getTypeInfo();   /* +0x08 */
    /* 0x164 */ u8 unk04[0x15C];
    /* 0x164 */ struct NwChildList *children;   /* word index 0x59 of the object */
};

struct NwModelInstance {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *data;
};

struct NwChildList {
    NwModelInstance *first;
};

struct NwResModel {
    s32 resource;
};

/* The arguments of the scene builder. */
struct NwSceneBuilderArgs {
    /* 0x00 */ s32 model;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
};

struct ShadowHelperA {
    /* 0x00 */ u32 vtable;
    /* 0x04 */ u32 owner;
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 model;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
};

struct ShadowHelperB {
    /* 0x00 */ u32 vtable;
    /* 0x04 */ ShadowHelperA *helperA;
    /* 0x08 */ u32 unk08;
};

struct ShadowHelperC {
    /* 0x00 */ u32 vtable;
    /* 0x04 */ u32 owner;
    /* 0x08 */ u32 shader;
    /* 0x0C */ u32 unk0C;
};

extern "C" {
extern u8 DAT_00464af1;
extern u8 DAT_0044e858[];       /* type information of the scene model class */
extern u8 DAT_00472180[];       /* type information of the shadow model class */
extern NwObject *DAT_00464b44;
extern s32 DAT_00464b5c;
extern u32 DAT_00464bbc;
extern u32 *DAT_004dae64;
extern ShadowHelperA *DAT_00472950;
extern ShadowHelperB *DAT_00472954;
extern ShadowHelperC *DAT_00472958;

void FUN_0010bb84(void);
u32 asdMemoryGetDefaultAllocator(void);
s32 fileLoadSync(const char *path, u32 size, u32 flags);
u32 libc_strlen(const char *text);
s32 nw_ut_ResDicPatricia_Get(s32 *dictionary, const char *name, u32 length);
void nw_gfx_res_ResModel_Setup(s32 *resource, u32 allocator, s32 file);
void nw_gfx_res_ResGraphicsFile_Setup(s32 *file, u32 allocator, s32 data);
NwObject *nw_gfx_SceneBuilder_CreateObject(NwSceneBuilderArgs *args, u32 allocator, u32 allocatorA);
u32 nw_ut_FloatColor_ToPicaU32(const void *color);
void *asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);

/* A self-relative offset: 0 means no target. */
static __inline s32 relativeTarget(s32 *slot)
{
    return *slot != 0 ? (s32)slot + *slot : 0;
}

/* Walks the object's type chain looking for `type`. */
static __inline NwObject *nwObjectCast(NwObject *object, const void *type)
{
    if (object != NULL) {
        for (const NwTypeInfo *info = object->getTypeInfo(); info != NULL; info = info->parent) {
            if (info == type)
                return object;
        }
    }
    return NULL;
}

void FUN_001049ac(void)
{
    DAT_00464af1 = 1;
    FUN_0010bb84();
    DAT_00464b5c = fileLoadSync("ShadowModel.bcmdl", 0, 1);

    s32 *modelTable = reinterpret_cast<s32 *>(DAT_00464b5c + 0x20);
    s32 dictionary = relativeTarget(modelTable);
    s32 modelResource = 0;
    if (dictionary != 0) {
        s32 entry = nw_ut_ResDicPatricia_Get(&dictionary, "ShadowModel", libc_strlen("ShadowModel"));
        if (entry != 0)
            modelResource = relativeTarget(reinterpret_cast<s32 *>(entry + 0xC));
    }
    nw_gfx_res_ResModel_Setup(&modelResource, (u32)asdMemoryGetAllocatorA(), DAT_00464b5c);

    NwSceneBuilderArgs args;
    args.model = modelResource;
    args.enabled = 1;
    args.unk08 = 8;
    args.unk0C = 4;
    args.unk10 = 0;
    args.unk14 = 0;
    args.unk18 = 0;
    args.unk1C = 4;
    args.unk20 = 0;
    args.unk24 = 1;
    NwObject *scene = nwObjectCast(nw_gfx_SceneBuilder_CreateObject(&args, asdMemoryGetDefaultAllocator(), (u32)asdMemoryGetAllocatorA()), DAT_0044e858);
    DAT_00464b44 = nwObjectCast(scene, DAT_00472180);

    s32 shaderFile = fileLoadSync("nwgfx_ShadowShader.bcsdr", 0, 1);
    nw_gfx_res_ResGraphicsFile_Setup(&shaderFile, asdMemoryGetDefaultAllocator(), shaderFile);
    s32 shaderTable = relativeTarget(reinterpret_cast<s32 *>(shaderFile + 0x40));
    s32 shaderEntry = 0;
    if (shaderTable != 0)
        shaderEntry = relativeTarget(reinterpret_cast<s32 *>(shaderTable + 0x28));
    s32 *shaderRoot = reinterpret_cast<s32 *>(relativeTarget(reinterpret_cast<s32 *>(shaderEntry + 0x2C)));
    s32 shaderData = relativeTarget(shaderRoot);

    NwModelInstance *instance = DAT_00464b44->children->first;
    *reinterpret_cast<s32 *>(instance->data + 0x20) = shaderData;
    *reinterpret_cast<u32 *>(*reinterpret_cast<u32 *>(instance->data + 8) + 0x2A4) = 0;

    NwObject *shadow = nwObjectCast(scene, DAT_00472180);
    u8 *shadowData = *reinterpret_cast<u8 **>(reinterpret_cast<u8 *>(shadow->children->first) + 8);
    *reinterpret_cast<u32 *>(shadowData + 0x140) |= 3;
    f32 *color = reinterpret_cast<f32 *>(shadowData + 0x44);
    color[0] = 0.0f;
    color[1] = 0.0f;
    color[2] = 0.0f;
    color[3] = 0.0f;
    *reinterpret_cast<u32 *>(shadowData + 0xDC) = nw_ut_FloatColor_ToPicaU32(color);

    u32 shadowInstance = *reinterpret_cast<u32 *>(DAT_00464b44->children->first);
    ShadowHelperA *helperA = static_cast<ShadowHelperA *>(asdMemoryAlloc(0x10000, 0x100, 0, 0x18, 1));
    if (helperA != NULL) {
        helperA->owner = *DAT_004dae64;
        helperA->state = 2;
        helperA->model = shadowInstance;
        helperA->unk10 = 0;
        helperA->unk14 = 0;
    }
    DAT_00472950 = helperA;

    ShadowHelperB *helperB = static_cast<ShadowHelperB *>(asdMemoryAlloc(0x10000, 0x100, 0, 0xC, 1));
    if (helperB != NULL) {
        helperB->helperA = DAT_00472950;
        helperB->unk08 = 0;
    }
    DAT_00472954 = helperB;

    ShadowHelperC *helperC = static_cast<ShadowHelperC *>(asdMemoryAlloc(0x10000, 0x100, 0, 0x10, 1));
    if (helperC != NULL) {
        helperC->owner = *DAT_004dae64;
        helperC->shader = DAT_00464bbc;
        helperC->unk0C = 0;
    }
    DAT_00472958 = helperC;
}

} /* extern "C" */
