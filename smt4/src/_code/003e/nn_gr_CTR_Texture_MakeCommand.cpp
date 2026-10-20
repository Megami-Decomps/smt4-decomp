#include "shard/S2GrTexture.h"

extern "C" {

extern u32 *nn_gr_CTR_Texture_MakeFuncCommand(...);
extern u32 *FUN_003dfea0(GrTexture *texture, u32 *command, u32 flag);
extern u32 *FUN_003e013c(void *unit, u32 *command, u32 flag);
extern u32 *FUN_003e0344(GrTextureUnit *unit, u32 *command, u32 flag);

/* Builds the command list that sets up a texture: function state, the two lower units, then the main unit. */
u32 *nn_gr_CTR_Texture_MakeCommand(GrTexture *texture)
{
    u32 *command = nn_gr_CTR_Texture_MakeFuncCommand(texture);

    command = FUN_003dfea0(texture, command, 0);
    command = FUN_003e013c(texture->unit3c, command, 0);
    return FUN_003e0344(&texture->unit, command, 0);
}

} /* extern "C" */
