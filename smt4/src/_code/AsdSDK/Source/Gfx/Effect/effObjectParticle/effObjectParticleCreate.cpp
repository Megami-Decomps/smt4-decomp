#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdDebug.h"

struct ObjectParticleResourceView {
    EffMiscDesc description;
    u8 unk1E[6];
    u32 dataSize;
};
struct ObjectParticleHeaderView { u8 initialization[0x44]; EffEmitterDesc emission; };
union ObjectParticleCreationView {
    EffObjectParticle object;
    struct {
        u32 maxCount;
        s32 previous;
        f32 scale;
        u16 type;
        u16 unk0E;
        u8 initialization[0x44];
        AsdMdlObject *model;
        void *modelData;
    } creation;
};
/* Model graph links extend beyond the recovered shared AsdMdlNode prefix. */
struct ParticleModelRenderView { u8 unk00[0x28]; u32 enabled; };
struct ParticleModelBindingView { u8 unk00[8]; ParticleModelRenderView *render; };
struct ParticleModelGraphView { u8 unk000[0x220]; ParticleModelBindingView *binding; };
struct ParticleModelNodeView { u8 unk00[0x2C]; ParticleModelGraphView *graph; };
extern "C" {
extern const char g_effObjectParticleEffMiscHeaderFileName[], g_effObjectParticleSourceFileName[];
ObjectParticleHeaderView *resourceResolveHeaderPointer(ObjectParticleResourceView *);
const u8 *resourceResolveDataPointer(ObjectParticleResourceView *);
void *memAlloc(u32, u32, u32, u32, u32, u32);
void rt_memclr(void *, u32);
void __aeabi_memcpy4(void *, const void *, u32);
void memCopy(const void *, void *, u32);
void effObjectParticleSetSource(EffObjectParticle *, u16, EffEmitterDesc *);
void FUN_0031ce4c(EffObjectParticle *);
AsdMdlObject *asdMdlManagerCreateFromSource(void *, u32, u32);

/* effMisc.h's inline allocator (retail traces the allocation at ./effMisc.h line 450, as effEmitterCreateSmall's
 * effAllocCleared does): a cleared block from the effect heap. */
static __inline void *effAllocCleared(u32 size)
{
    asdDebugTrace(g_effObjectParticleEffMiscHeaderFileName, 450);
    void *block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Creates the particle's model from CGFX data (a copy the particle owns), then binds the particle to it. */
static __inline void particleLoadModel(ObjectParticleCreationView *particle, const u8 *data, u32 size)
{
    if (data[0] == 'C' && data[1] == 'G' && data[2] == 'F' && data[3] == 'X') {
        asdDebugTrace(g_effObjectParticleSourceFileName, 0x279);
        particle->creation.modelData = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        memCopy(data, particle->creation.modelData, size);
        AsdMdlObject *model = asdMdlManagerCreateFromSource(particle->creation.modelData, size, 7);
        particle->creation.model = model;
        reinterpret_cast<ParticleModelNodeView *>(model->node)->graph->binding->render->enabled = 1;
    }
    FUN_0031ce4c(&particle->object);
}

/* Creates an object particle from its resource: the emitter parameters and, for a model resource, the CGFX model. */
EffObjectParticle *effObjectParticleCreate(ObjectParticleResourceView *resource)
{
    ObjectParticleHeaderView *header = resourceResolveHeaderPointer(resource);
    u32 maximum = effEmitterGetCapacity(&header->emission);
    ObjectParticleCreationView *particle = static_cast<ObjectParticleCreationView *>(effAllocCleared(sizeof(EffObjectParticle)));
    particle->creation.previous = -1;
    particle->creation.maxCount = maximum;
    particle->creation.scale = 1.0f;
    __aeabi_memcpy4(particle->creation.initialization, header, 0x44);
    effObjectParticleSetSource(&particle->object, resource->description.kind, &header->emission);
    if (particle->object.source->elementCount) {
        const u8 *data = resourceResolveDataPointer(resource);
        if (data) {
            if (resource->description.resourceType == 3 && resource) {
                particleLoadModel(particle, data, resource->dataSize);
            }
            particle->creation.type = resource->description.resourceType;
        }
    }
    return &particle->object;
}
}
