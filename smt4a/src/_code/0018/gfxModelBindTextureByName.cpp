/* NON_MATCHING: 236-vs244-byte frame, bound/scratch r5-lr roles and integer-vs-VFP LOD copying differ; complete110-row control flow agrees. */
#include "shard/W6_W6Match7_MaterialTextures.h"
#include "shard/S2GrTexture.h"
#include "classes/Texture.h"
#include <new>

struct NamedModelTexture {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 format;
    /* 0x19 */ u8 mipCount;
    /* 0x1a */ u8 unk1a[2];
    /* 0x1c */ const char* name;
};

struct MaterialTextureSampler {
    /* 0x00 */ u8 targetMode;
    /* 0x01 */ u8 wrapT;
    /* 0x02 */ u8 wrapS;
    /* 0x03 */ u8 filter;
    /* 0x04 */ u8 filterType;
    /* 0x05 */ u8 lodMin;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ f32 lodBias;
    /* 0x0c */ u8 borderColor[4];
};

struct MaterialTextureCommands {
    u32* data;
    u32 size;
};

struct MaterialTextureBinding {
    /* 0x00 */ void* material;
    /* 0x04 */ NamedModelTexture* texture0;
    /* 0x08 */ NamedModelTexture* texture1;
    /* 0x0c */ NamedModelTexture* texture2;
    /* 0x10 */ MaterialTextureCommands commands;
    /* 0x18 */ MaterialTextureSampler* samplers;
    /* 0x1c */ const char* textureNames[3];
    /* 0x28 */ u32 unk28;
};

// Prefix of the model resource used by its material bindings.
struct ModelTextureBindings {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ MaterialTextureBinding* bindings;
    /* 0x38 */ u16 bindingCount;
};

namespace {
// The canonical header models the first three units; the constructor also
// initializes the trailing procedural unit in this complete 0xa8-byte state.
struct MaterialTextureState {
    GrTexture texture;
    GrTextureUnit procedural;
};

inline void applyTextureSampler(GrTextureUnit* unit, const NamedModelTexture* bound,
                                const MaterialTextureSampler* sampler, s32 slot)
{
    if (bound == NULL) {
        return;
    }
    unit->format = bound->format;
    unit->wrapT = sampler->wrapT;
    unit->wrapS = sampler->wrapS;
    unit->minFilter = sampler->filter;
    unit->type = sampler->filterType;
    unit->lodBias = sampler->lodBias;
    unit->lodMin = sampler->lodMin;
    unit->lodMax = bound->mipCount - 1;
    unit->unk16[0] = sampler->borderColor[0];
    unit->unk16[1] = sampler->borderColor[1];
    unit->unk16[2] = sampler->borderColor[2];
    unit->unk16[3] = sampler->borderColor[3];
    // The procedural unit has a different interpretation of this tail byte.
    switch (slot) {
    case 0:
    case 1:
    case 2:
        unit->targetView.targetMode = sampler->targetMode;
        break;
    }
}
}

extern "C" {
void gfxModelRebuildTextureCommands(ModelTextureBindings* model, MaterialTextureCommands* commands,
                 MaterialTextureState* state, const MaterialTextureSampler* first,
                 const MaterialTextureSampler* second, const MaterialTextureSampler* third,
                 u8* replacementCommands, const u8* originalCommands);
s32 libc_strcmp(const char* first, const char* second);

// Bind missing texture references by name and rebuild only changed materials.
u32 gfxModelBindTextureByName(ModelTextureBindings* model, const char* name,
                 NamedModelTexture* texture, u8* replacementCommands,
                 const u8* originalCommands)
{
    u32 result = 0;
    MaterialTextureBinding* end = model->bindings + model->bindingCount;
    for (MaterialTextureBinding* binding = model->bindings; binding != end; ++binding) {
        MaterialTextureState state;
        (MaterialTextureState*)(new ((void *)(&state)) nn::gr::CTR::Texture());
        GrTextureUnit* units[3] = {
            reinterpret_cast<GrTextureUnit*>(state.texture.unk00),
            reinterpret_cast<GrTextureUnit*>(state.texture.unit3c),
            &state.texture.unit
        };
        NamedModelTexture** references[3] = {
            &binding->texture0, &binding->texture1, &binding->texture2
        };
        s32 added = 0;
        for (s32 slot = 0; slot < 3; ++slot) {
            NamedModelTexture*& bound = *references[slot];
            if (bound == NULL && binding->textureNames[slot] != NULL) {
                if (libc_strcmp(binding->textureNames[slot], name) != 0) {
                    result |= 0x80000008;
                } else {
                    ++added;
                    bound = texture;
                }
            }
            applyTextureSampler(units[slot], bound, &binding->samplers[slot], slot);
        }
        if (added != 0) {
            gfxModelRebuildTextureCommands(model, &binding->commands, &state,
                         &binding->samplers[0], &binding->samplers[1],
                         &binding->samplers[2], replacementCommands, originalCommands);
        }
    }
    return result;
}
}
