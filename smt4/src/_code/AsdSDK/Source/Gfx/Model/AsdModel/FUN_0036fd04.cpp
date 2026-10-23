/* NON_MATCHING: relative-pointer null branches/owner reloads fold and uniform indices reload after stage stores; registers differ, 108 vs 107 instructions. */
#include "gfx/ShaderProgramLoad.h"
#include "classes/AsdAllocatorObject.h"
namespace {
struct UniformReference {
    RelativePointer name;
    u8 kind;
    u8 stage;
    u8 unk06[2];
    s32 index;
};
struct UniformLocation { s32 index; u8 kind; u8 unk05[3]; };
typedef char UniformReferenceOffsets[offsetof(UniformReference, stage) == 5 && offsetof(UniformReference, index) == 8 && sizeof(UniformLocation) == 8 ? 1 : -1];
}
extern "C" {
extern AsdAllocatorObject *DAT_00471c40;
void nw_gfx_ShaderBinaryInfo_SearchUniformIndex(UniformLocation *result, ShaderExecutableTable *programs, s32 program, const char *name);
u32 nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(ShaderExecutableTable *programs, s32 vertex, s32 geometry);
u32 nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand(ShaderExecutableTable *programs, s32 vertex, s32 geometry, void *commands, u32 bytes);

// Resolve named uniforms against vertex/geometry programs and lazily build shader commands.
u32 FUN_0036fd04(ShaderProgramResource **owner, AsdAllocatorObject *allocator)
{
    if (!allocator)
        allocator = DAT_00471c40;
    u32 errors = 0;
    s32 count = (*owner)->uniforms.count;
    for (s32 index = 0; index < count; ++index) {
        RelativePointer *references = static_cast<RelativePointer *>((*owner)->uniforms.references.get());
        UniformReference *uniform = static_cast<UniformReference *>(references[index].get());
        if (uniform->index == -1) {
            UniformLocation location;
            ShaderProgramResource *resource = *owner;
            ShaderBinaryCommands *binary = static_cast<ShaderBinaryCommands *>(resource->binary.get());
            nw_gfx_ShaderBinaryInfo_SearchUniformIndex(&location, binary->programs, resource->vertexProgram, static_cast<const char *>(uniform->name.get()));
            if (location.index >= 0) {
                uniform->stage = 0;
                uniform->index = location.index;
            } else {
                resource = *owner;
                binary = static_cast<ShaderBinaryCommands *>(resource->binary.get());
                nw_gfx_ShaderBinaryInfo_SearchUniformIndex(&location, binary->programs, resource->geometryProgram, static_cast<const char *>(uniform->name.get()));
                if (location.index >= 0) {
                    uniform->stage = 1;
                    uniform->index = location.index;
                } else {
                    uniform->index = -1;
                    errors |= 0x10;
                }
            }
        }
    }
    if (!(*owner)->commands) {
        ShaderBinaryCommands *binary = static_cast<ShaderBinaryCommands *>((*owner)->binary.get());
        ShaderExecutableTable *programs = binary->programs;
        s32 vertex = (*owner)->vertexProgram;
        s32 geometry = (*owner)->geometryProgram;
        u32 bytes = nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(programs, vertex, geometry);
        void *commands = allocator->allocate(bytes, 4);
        u32 written = nw_gfx_ShaderBinaryInfo_BuildShaderProgramCommand(programs, vertex, geometry, commands, bytes);
        (*owner)->commands = commands;
        (*owner)->commandBytes = written;
    }
    return errors;
}
}
