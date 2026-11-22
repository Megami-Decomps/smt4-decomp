/* NON_MATCHING: 40 lines, register choices only. (1) `flags |= 1` is `orr r1, r0, #1; strb r1` ahead of the
 * count read in retail; here the count load is scheduled between the two. (2) The half-size products of the
 * image and table textures (types 1 and 4) take other VFP registers: retail keeps the width in s0 and the
 * height in s2 and stores both with one vstmia. The per-type setters below are the bodies of the file's own
 * functions, which retail inlines here (they also exist out of line): the unit belongs in one translation
 * unit with them. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W6_W6Match2_TextureHolder.h"
#include "util/MemoryHelpers.h"
#include "code/Code0035_Smt4a.h"
#include "code/Code0013_Smt4a.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "shard/W5_W5Match2_RelativeData.h"

extern "C" {

extern const char g_effMiscHeaderNestedSourceFileName[]; /* "...\Effect\././effMisc.h": __FILE__ of the header's allocator */
extern const char g_effParticleSourceFileName[];             /* __FILE__ of effParticle.cpp */

void rt_memclr(void *block, s32 size);
void *resourceResolveHeaderPointer(const RelativeDataB *record);
void *resourceResolveDataPointer(const RelativeDataA *record);
EffParticleSource *effBehaviorCreate(u16 kind, u32 count, EffEmitterDesc *descriptor);
AsdTexture *sysGetTableWord(u16 id); // declcheck: local (returns the texture; sys/RuntimeObjects.h's u32 view also redeclares refCountIncrement)
void handleBlockRefDrop(void *handle);
void handleBlockUnref(void *handle);
void *spriteGroupCreateFromFile(const void *file);
void *effTlpCreate(const void *data);
void resourceListDestroy(void *handle); // declcheck: local (the shared one sits in a class header, classes/Obj557dcc.h)
void *effBlockClone(void *handle);
void *effBlockCreateFromBlock(const void *init);
void *effPartCreateFromSource(const void *source);
void *effPartClone(void *handle); // declcheck: local (untyped handle arrays; shard/S1ModelEffect.h declares the model's view)

/* effMisc.h's inline allocator (line 450): a cleared block from the effect heap. */
static __inline void *effAllocCleared(s32 size)
{
    void *block;

    asdDebugTrace(g_effMiscHeaderNestedSourceFileName, 450);
    block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Replaces the block's behaviour buffer with one sized for its particle count. */
static __inline void particleCreateBuffer(EffParticleParam *param, u32 kind, EffEmitterDesc *descriptor)
{
    if (param->source != NULL) {
        objectBufferFree(param->source);
    }
    param->source = effBehaviorCreate(kind, param->count, descriptor);
}

/* textureAttachmentSetImage's body. */
static __inline void particleSetImageTexture(EffParticleParam *param, const void *image)
{
    AsdTexture *texture = textureCreateFromImage(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    param->halfWidth = width * 0.5f * 0.0625f;
    param->halfHeight = height * 0.5f * 0.0625f;
    EffParticleModel *model = param->geometry->model;
    model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}

/* FUN_0031d0bc's body. */
static __inline void particleSetTableTexture(EffParticleParam *param, u32 textureId)
{
    AsdTexture *texture = sysGetTableWord((u16)textureId);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    param->halfWidth = width * 0.5f * 0.0625f;
    param->halfHeight = height * 0.5f * 0.0625f;
    param->geometry->model->texture = texture;
    refCountIncrement(texture);
}

/* FUN_0030ee9c's body. */
static __inline void particleSetEffectTexture(EffParticleParam *param, const void *image)
{
    AsdTexture *texture = asdEffectTextureCreate(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    param->halfWidth = width * 0.5f * 0.0625f;
    param->halfHeight = height * 0.5f * 0.0625f;
    EffParticleModel *model = param->geometry->model;
    model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}

/* objResourceReplace's body. */
static __inline void particleSetSpriteGroup(EffParticleParam *param, const void *file)
{
    if (param->object44 != NULL) {
        handleBlockRefDrop(param->object44);
    }
    param->object44 = spriteGroupCreateFromFile(file);
}

/* effTlpReplace's body. */
static __inline void particleSetTlp(EffParticleParam *param, const void *data)
{
    if (param->object48 != NULL) {
        handleBlockUnref(param->object48);
    }
    param->object48 = effTlpCreate(data);
}

/* effParticleRebuildHandles' body. */
static __inline void particleRebuildBlocks(EffParticleParam *param, const void *init)
{
    u32 count = param->source != NULL ? param->source->count : param->count;
    u32 i;
    u32 size;

    if (param->buffer38 != NULL) {
        for (i = 0; i < count; i++) {
            resourceDestroy((Resource *)param->handles34[i]);
        }
        asdMemFree(param->buffer38);
        param->handles34 = NULL;
        param->buffer38 = NULL;
    }
    if ((size = count * 4) != 0) {
        asdDebugTrace(g_effParticleSourceFileName, 578);
        param->buffer38 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        param->handles34 = (void **)param->buffer38;
        param->handles34[0] = effBlockCreateFromBlock(init);
        for (i = 1; i < count; i++) {
            param->handles34[i] = effBlockClone(param->handles34[0]);
        }
    }
}

/* effParticleParamRebuildHandles3c's body. */
static __inline void particleRebuildParts(EffParticleParam *param, const void *source)
{
    u32 count = param->source != NULL ? param->source->count : param->count;
    u32 i;
    u32 size;

    if (param->buffer40 != NULL) {
        for (i = 0; i < count; i++) {
            resourceListDestroy(param->handles3c[i]);
        }
        asdMemFree(param->buffer40);
        param->handles3c = NULL;
        param->buffer40 = NULL;
    }
    size = count * sizeof(void *);
    if (size != 0) {
        asdDebugTrace(g_effParticleSourceFileName, 629);
        param->buffer40 = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        param->handles3c = (void **)param->buffer40;
        param->handles3c[0] = effPartCreateFromSource(source);
        for (i = 1; i < count; i++) {
            void *copy = effPartClone(param->handles3c[0]);
            param->handles3c[i] = copy;
        }
    }
}

/* Creates the particle parameter block of an effect description: a block for the description's particle
 * count (at most 300), its behaviour buffer, and the resource its type uses (a texture, a sprite group,
 * a TLP effect or one block or part handle per particle). */
EffParticleParam *effParticleParamCreateFromResource(EffMiscDesc *resource)
{
    EffEmitterDesc *descriptor = (EffEmitterDesc *)resourceResolveHeaderPointer((const RelativeDataB *)resource);
    u32 count = (descriptor->countOverride != 0 ? descriptor->countOverride : descriptor->countDefault) * descriptor->multiplier;
    if (count > 300) {
        count = 300;
    }
    /* effEmitterCreate's statements */
    EffParticleParam *param = (EffParticleParam *)effAllocCleared(sizeof(EffParticleParam));
    param->handle = -1;
    param->count = count;
    param->scale = 1.0f;
    particleCreateBuffer(param, resource->kind, descriptor);
    param->flags |= 1;
    if (param->count != 0) {
        const u32 *data = (const u32 *)resourceResolveDataPointer((const RelativeDataA *)resource);
        if (data != NULL) {
            switch (resource->resourceType) {
            case 1:
                geometryOwnerSetGeometry((GeometryOwner *)param, param->source->count, 1);
                particleSetImageTexture(param, data);
                break;
            case 2:
                geometryOwnerSetGeometry((GeometryOwner *)param, param->source->count, 2);
                particleSetSpriteGroup(param, data);
                break;
            case 4:
                geometryOwnerSetGeometry((GeometryOwner *)param, param->source->count, 4);
                particleSetTableTexture(param, *data);
                break;
            case 5:
                particleRebuildBlocks(param, data);
                break;
            case 6:
                particleRebuildParts(param, data);
                break;
            case 7:
                geometryOwnerSetGeometry((GeometryOwner *)param, param->source->count, 7);
                particleSetTlp(param, data);
                break;
            case 9:
                geometryOwnerSetGeometry((GeometryOwner *)param, param->source->count, 9);
                particleSetEffectTexture(param, data);
                break;
            }
            param->type = resource->resourceType;
        }
    }
    return param;
}

} /* extern "C" */
