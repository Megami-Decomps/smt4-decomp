/* NON_MATCHING: allocation-size register reuse, count multiply operands and resolved-data pointer lifetime differ. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemCopy.h"

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
extern "C" {
extern const char DAT_00544ac4[], DAT_00544af8[];
ObjectParticleHeaderView *resourceResolveHeaderPointer(ObjectParticleResourceView *);
const u8 *resourceResolveDataPointer(ObjectParticleResourceView *);
void *memAlloc(u32, u32, u32, u32, u32, u32);
void rt_memclr(void *, u32);
void __aeabi_memcpy4(void *, const void *, u32);
void FUN_003aa57c(EffObjectParticle *, u16, EffEmitterDesc *);
void FUN_003b8ecc(EffObjectParticle *);
AsdMdlObject *asdMdlManagerCreateFromSource(void *, u32, u32);

EffObjectParticle *FUN_003aa6c0(ObjectParticleResourceView *resource)
{
    ObjectParticleHeaderView *header = resourceResolveHeaderPointer(resource);
    s32 count = header->emission.countOverride;
    if (!count)
        count = header->emission.countDefault;
    u32 maximum = count * header->emission.multiplier;
    if (maximum > 100)
        maximum = 100;
    asdDebugTrace(DAT_00544ac4, 0x1C2);
    ObjectParticleCreationView *particle = static_cast<ObjectParticleCreationView *>(memAlloc(0x10000, 0x100, 0, sizeof(EffObjectParticle), 0x10, 1));
    rt_memclr(particle, sizeof(EffObjectParticle));
    particle->creation.previous = -1;
    particle->creation.maxCount = maximum;
    particle->creation.scale = 1.0f;
    __aeabi_memcpy4(particle->creation.initialization, header, 0x44);
    FUN_003aa57c(&particle->object, resource->description.kind, &header->emission);
    if (particle->object.source->count) {
        const u8 *data = resourceResolveDataPointer(resource);
        if (data) {
            if (resource->description.resourceType == 3 && resource) {
                u32 size = resource->dataSize;
                if (data[0] == 'C' && data[1] == 'G' && data[2] == 'F' && data[3] == 'X') {
                    asdDebugTrace(DAT_00544af8, 0x279);
                    particle->creation.modelData = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
                    FUN_002e59f8(data, particle->creation.modelData, size);
                    AsdMdlObject *model = asdMdlManagerCreateFromSource(particle->creation.modelData, size, 7);
                    particle->creation.model = model;
                    model->node->resource->state->flags->flags = 1;
                }
                FUN_003b8ecc(&particle->object);
            }
            particle->creation.type = resource->description.resourceType;
        }
    }
    return &particle->object;
}
}
