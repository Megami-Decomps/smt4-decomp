/* NON_MATCHING: resolves a model's material and texture references against a resource set and rebuilds the texture commands of the materials that gained textures; written from the decompilation and the retail disassembly, stack frame layout and sampler copies not compared with retail */
#include "shard/W6_W6Match7_MaterialTextures.h"
#include "shard/S2GrTexture.h"
#include "classes/Texture.h"
#include <new>

#define MATERIAL_ENTRY_COUNT 6
#define NAME_NOT_FOUND 0xFFFF
#define RESULT_MISSING_MATERIAL 0x80000010
#define RESULT_MISSING_ENTRY_TABLE 0x80000020
#define RESULT_MISSING_TEXTURE 0x80000008

/* One table of 0x10-byte entries; the name of an entry is at 0x0C. */
struct MaterialEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ const char *name;
};

struct MaterialEntryTable {
    /* 0x00 */ MaterialEntry *entries;
    /* 0x04 */ s32 count;
};

/* A material definition: the resource it names and the entries it still has to bind. */
struct MaterialDefinition {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ void *resource;
    /* 0x00C */ u8 unk00C[0x80];
    /* 0x08C */ MaterialEntry *entries[MATERIAL_ENTRY_COUNT];
    /* 0x0A4 */ u8 unk0A4[0x30];
    /* 0x0D4 */ const u16 *tableNames[MATERIAL_ENTRY_COUNT];
    /* 0x0EC */ const char *entryNames[MATERIAL_ENTRY_COUNT];
    /* 0x104 */ const u16 *name;
};

/* The resource set the model's names are resolved in: arrays plus their name tables. */
struct ModelResourceSet {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ void **materials;
    /* 0x1C */ u8 materialNames[8];
    /* 0x24 */ NamedModelTexture **textures;
    /* 0x28 */ u8 textureNames[8];
    /* 0x30 */ MaterialEntryTable **entryTables;
    /* 0x34 */ u8 entryNames[8];
};

struct ModelBindOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ ModelResourceSet *set;
};

namespace {
struct MaterialTextureState {
    GrTexture texture;
    GrTextureUnit procedural;
};

inline void applyTextureSampler(GrTextureUnit *unit, const NamedModelTexture *bound,
                                const MaterialTextureSampler *sampler, s32 slot)
{
    if (bound == NULL)
        return;
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
    if (slot < 3)
        unit->targetView.targetMode = sampler->targetMode;
}
}

extern "C" {
u32 wstrlen(const u16 *text);
s32 FUN_001a7a20(void *names, const void *name, u32 length);
s32 libc_strcmp(const char *first, const char *second);
void gfxModelRebuildTextureCommands(ModelTextureBindings *model, MaterialTextureCommands *commands,
                                    MaterialTextureState *state, const MaterialTextureSampler *first,
                                    const MaterialTextureSampler *second, const MaterialTextureSampler *third,
                                    u8 *replacementCommands, const u8 *originalCommands);

/* Binds every material's resource, entries and textures from `owner`'s resource set; returns the
 * error bits of the names that could not be resolved. */
u32 FUN_0018f69c(ModelTextureBindings *model, ModelBindOwner *owner, u8 *replacementCommands,
                 const u8 *originalCommands)
{
    u32 result = 0;
    MaterialTextureBinding *end = model->bindings + model->bindingCount;
    for (MaterialTextureBinding *binding = model->bindings; binding != end; ++binding) {
        MaterialDefinition *material = static_cast<MaterialDefinition *>(binding->material);
        if (material != NULL) {
            if (material->resource == NULL) {
                s32 index = FUN_001a7a20(owner->set->materialNames, material->name, wstrlen(material->name));
                if (index == NAME_NOT_FOUND)
                    result |= RESULT_MISSING_MATERIAL;
                else
                    material->resource = owner->set->materials[index];
            }
            for (s32 slot = 0; slot < MATERIAL_ENTRY_COUNT; ++slot) {
                if (material->entries[slot] == NULL && material->tableNames[slot] != NULL
                    && material->entryNames[slot] != NULL) {
                    s32 tableIndex = FUN_001a7a20(owner->set->entryNames, material->tableNames[slot],
                                                  wstrlen(material->tableNames[slot]));
                    if (tableIndex == NAME_NOT_FOUND) {
                        result |= RESULT_MISSING_ENTRY_TABLE;
                    } else {
                        MaterialEntryTable *table = owner->set->entryTables[tableIndex];
                        MaterialEntry *entry = table->entries;
                        MaterialEntry *tableEnd = table->entries + table->count;
                        for (; entry != tableEnd; ++entry) {
                            if (libc_strcmp(entry->name, material->entryNames[slot]) == 0)
                                break;
                        }
                        if (entry == table->entries + table->count)
                            entry = NULL;
                        material->entries[slot] = entry;
                    }
                }
            }
        }

        MaterialTextureState state;
        (MaterialTextureState *)(new ((void *)(&state)) nn::gr::CTR::Texture());
        GrTextureUnit *units[3] = {
            reinterpret_cast<GrTextureUnit *>(state.texture.unk00),
            reinterpret_cast<GrTextureUnit *>(state.texture.unit3c),
            &state.texture.unit
        };
        NamedModelTexture **references[3] = { &binding->texture0, &binding->texture1, &binding->texture2 };
        s32 added = 0;
        for (s32 slot = 0; slot < 3; ++slot) {
            NamedModelTexture *&bound = *references[slot];
            if (bound == NULL && binding->textureNames[slot] != NULL) {
                s32 index = FUN_001a7a20(owner->set->textureNames, binding->textureNames[slot],
                                         wstrlen(reinterpret_cast<const u16 *>(binding->textureNames[slot])));
                if (index == NAME_NOT_FOUND) {
                    result |= RESULT_MISSING_TEXTURE;
                } else {
                    ++added;
                    bound = owner->set->textures[index];
                }
            }
            applyTextureSampler(units[slot], bound, &binding->samplers[slot], slot);
        }
        if (added != 0) {
            gfxModelRebuildTextureCommands(model, &binding->commands, &state, &binding->samplers[0],
                                           &binding->samplers[1], &binding->samplers[2],
                                           replacementCommands, originalCommands);
        }
    }
    return result;
}

} /* extern "C" */
