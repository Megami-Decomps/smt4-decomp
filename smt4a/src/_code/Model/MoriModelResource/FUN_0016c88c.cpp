/* NON_MATCHING: readable rebuild of the model unit setup; retail merges the two registry blocks with a shared null test, keeps the counters in r5/r6/r8 across the binding calls and reloads the content tables per iteration, which armcc here allocates differently. */
#include "shard/W6_W6Match7_MaterialTextures.h"
#include "classes/Obj557dcc.h"

/* A unit's tables: the model list, the texture list and the material bindings. */
struct UnitTables : ModelTextureResourceTables {
    /* 0x2C */ u8 unk2C[0x10];
    /* 0x3C */ MaterialTextureBinding **bindings;
    /* 0x40 */ u16 bindingCount;
};

/* The registry's shared model: its tables and the texture list it binds. */
struct RegistryModel {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ UnitTables *tables;
};
struct RegistryBoundTextures {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ NamedModelTexture *texture;
};

/* The handle registry (g_handleRegistry): the texture and model the unit setup adopts. */
struct HandleRegistryView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RegistryModel *sharedModel;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ RegistryBoundTextures *bound;
};

/* A model unit under construction. */
struct MoriUnit {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 flags;           /* 2: binds the registry's texture */
    /* 0x0C */ u8 matrix[0x30];
    /* 0x3C */ UnitTables *tables;
    /* 0x40 */ u32 handle;
    /* 0x44 */ u8 unk44[0x20];
    /* 0x64 */ const u8 *originalCommands;
    /* 0x68 */ u8 unk68[0x14];
    /* 0x7C */ u8 *replacementCommands;
    /* 0x80 */ u8 unk80[8];
    /* 0x88 */ Obj557dcc *extra;
};

/* What the unit is made from. */
struct MoriUnitSpec {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 isResource;       /* the handle already names the resource */
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
    /* 0x10 */ u32 third;
    /* 0x14 */ u8 mode;
};

extern "C" {
extern HandleRegistryView *g_handleRegistry;

u32 FUN_00186118(u32 handle, u32 *argument);
void FUN_00187e08(MoriUnit *unit, u32 resource, u32 first, u32 second, u32 third);
void FUN_0018f69c(ModelTextureBindings *model, u8 *matrix, u8 *replacementCommands, const u8 *originalCommands);
void FUN_0018f9c0(MaterialTextureBinding *binding, u8 *matrix);
void *FUN_00178b04(u32 bytes, const char *file, s32 line);
}

/* The engine's tracked allocator: file and line of the allocation site. */
static inline void *operator new(u32 bytes, const char *file, s32 line) throw()
{
    return FUN_00178b04(bytes, file, line);
}

extern "C" void FUN_0016c88c(const MoriUnitSpec *spec, MoriUnit *unit, u32 unused, u32 argument)
{
    u32 resource;
    if (spec->isResource) {
        resource = spec->handle;
    } else {
        resource = FUN_00186118(spec->handle, &argument);
    }
    FUN_00187e08(unit, resource, spec->first, spec->second, spec->third);
    unit->flags = spec->mode;
    unit->handle = spec->handle;
    unit->flag = spec->isResource;
    u32 modelCount = unit->tables->modelCount;
    for (u32 i = 0; i < modelCount; i++)
        FUN_0018f69c(unit->tables->models[i], unit->matrix, unit->replacementCommands, unit->originalCommands);
    u32 bindingCount = unit->tables->bindingCount;
    for (u32 i = 0; i < bindingCount; i++) {
        MaterialTextureBinding *binding = unit->tables->bindings[i];
        if (binding->unk28 & 8)
            FUN_0018f9c0(binding, unit->matrix);
    }
    if (g_handleRegistry != NULL) {
        if (unit->flags & 2) {
            NamedModelTexture *texture = g_handleRegistry->bound->texture;
            if (texture != NULL) {
                for (u32 i = 0; i < unit->tables->modelCount; i++)
                    gfxModelBindTextureByName(unit->tables->models[i], texture->name, texture, unit->replacementCommands,
                                              unit->originalCommands);
            }
        }
        if (g_handleRegistry != NULL && g_handleRegistry->sharedModel != NULL) {
            RegistryModel *shared = g_handleRegistry->sharedModel;
            for (s32 i = 0; i < (s32)unit->tables->modelCount; i++) {
                ModelTextureBindings *model = unit->tables->models[i];
                for (MaterialTextureBinding *binding = model->bindings; binding != model->bindings + model->bindingCount;
                     binding++) {
                    void **material = (void **)binding->material;
                    if (material[2] == NULL)
                        material[2] = ((void **)shared->tables->textures)[0];
                }
                FUN_0018f69c(model, (u8 *)shared + 0xC, unit->replacementCommands, unit->originalCommands);
            }
        }
    }
    unit->extra = new ("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 100) Obj557dcc(spec->handle);
}
