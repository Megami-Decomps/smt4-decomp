/* NON_MATCHING: compiler uses a 68-byte rather than 28-byte frame and changes resource-table load/address scheduling. */
#include "shard/W6_W6Match7_MaterialTextures.h"

extern "C" {
s32 libc_strcmp(const char *first, const char *second);

// Bind source textures to matching material slots across all destination models.
u32 FUN_00416168(ModelTextureResourceOwner *destination, const ModelTextureResourceOwner *source)
{
    u32 result = 0;
    s32 modelCount = destination->tables->modelCount;
    s32 textureCount = source->tables->textureCount;
    for (s32 modelIndex = 0; modelIndex < modelCount; ++modelIndex) {
        ModelTextureBindings *model = destination->tables->models[modelIndex];
        for (s32 textureIndex = 0; textureIndex < textureCount; ++textureIndex) {
            NamedModelTexture *texture = source->tables->textures[textureIndex];
            MaterialTextureBinding *end = model->bindings + model->bindingCount;
            for (MaterialTextureBinding *binding = model->bindings; binding != end; ++binding) {
                for (s32 slot = 0; slot < 3; ++slot) {
                    const char *name = binding->textureNames[slot];
                    if (name && libc_strcmp(name, texture->name) == 0)
                        result |= gfxModelBindTextureByName(model, binding->textureNames[slot], texture,
                                                            destination->replacementCommands,
                                                            destination->originalCommands);
                }
            }
        }
    }
    return result;
}
}
