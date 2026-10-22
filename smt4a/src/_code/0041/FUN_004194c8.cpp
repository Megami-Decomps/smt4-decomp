#include "common.h"

struct ShaderAttributeBindings;
struct ModelResource;

extern "C" void FUN_004194cc(ShaderAttributeBindings *bindings, ModelResource *model, s32 useLocalHeap);

// Forward to the shader-attribute binding constructor.
extern "C" void FUN_004194c8(ShaderAttributeBindings *bindings, ModelResource *model, s32 useLocalHeap)
{
    FUN_004194cc(bindings, model, useLocalHeap);
}
