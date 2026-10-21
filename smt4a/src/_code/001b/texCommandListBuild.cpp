#include "shard/S2GrTexture.h"

extern "C" {

extern u32 *FUN_001ba5bc(...);
extern u32 *FUN_001ba6b0(GrTexture *texture, u32 *command, u32 flag);
extern u32 *FUN_001ba948(void *unit, u32 *command, u32 flag);
extern u32 *FUN_001bab50(GrTextureUnit *unit, u32 *command, u32 flag);

/* Builds the command list that sets up a texture: function state, the two lower units, then the main unit. */
u32 *texCommandListBuild(GrTexture *texture)
{
    u32 *command = FUN_001ba5bc(texture);

    command = FUN_001ba6b0(texture, command, 0);
    command = FUN_001ba948(texture->unit3c, command, 0);
    return FUN_001bab50(&texture->unit, command, 0);
}

} /* extern "C" */
