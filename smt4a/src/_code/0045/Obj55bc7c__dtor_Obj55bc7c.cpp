/* NON_MATCHING: the material loop, the array reset and the allocator release match; retail guards the emptied element-destroy loop with an unsigned pointer compare and counts it from 1 (count + 1 bound), armcc counts from 0 against the signed size. */
#include "classes/Obj55bc7c.h"

extern "C" void nw_gfx_Material_DestroyResMaterial(u32 owner, u32 material);

/* Destroys every material resource of the array, then releases the array. */
Obj55bc7c::~Obj55bc7c()
{
    u32 owner = this->owner;
    MaterialHandle *end = materials.end;
    for (MaterialHandle *material = materials.begin; material != end; ++material) {
        nw_gfx_Material_DestroyResMaterial(owner, material->value);
    }
}
