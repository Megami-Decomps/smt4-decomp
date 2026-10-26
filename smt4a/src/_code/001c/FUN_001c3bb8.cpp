/* NON_MATCHING: register assignment only (retail keeps the binding in r4 and the executable in r5) and the shared failure-exit placement after the loop. */
#include "shard/W6_W6Match5_ShaderBinding.h"

struct ShaderUniformSymbolRecordView {
    u32 nameOffset;
    u32 registerRange;
};
struct ShaderExecutableSymbolsView {
    u8 unk00[0x30];
    u32 symbolsOffset;
    u32 symbolCount;
    u32 stringsOffset;
};
/* Executable tables lie beyond NativeShaderPrefix's recovered leading byte. */
struct ShaderUniformLookupView {
    s32 vertexExecutable;
    s32 geometryExecutable;
    u8 unk08[8];
    ShaderExecutableSymbolsView *executables[1];
};

extern "C" {
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *first, const char *second, u32 count);

u8 FUN_001c3bb8(NativeShaderPrefix *shader, ShaderBindSymbol *binding, const char *name)
{
    const ShaderUniformLookupView *lookup = (const ShaderUniformLookupView *)shader;
    s32 executable = binding->uniform.stage == 1 ? lookup->geometryExecutable : lookup->vertexExecutable;
    ShaderExecutableSymbolsView *binary = lookup->executables[executable];
    const ShaderUniformSymbolRecordView *symbols = (const ShaderUniformSymbolRecordView *)((const u8 *)binary + binary->symbolsOffset);
    const char *strings = (const char *)binary + binary->stringsOffset;
    u32 length = libc_strlen(name);
    for (u32 i = 0; i < binary->symbolCount; ++i) {
        const ShaderUniformSymbolRecordView *entry = &symbols[i];
        if (libc_strncmp(name, strings + entry->nameOffset, length) != 0 ||
            (strings[entry->nameOffset + length] != '\0' && strings[entry->nameOffset + length] != '.')) {
            continue;
        }
        binding->uniform.name = strings + entry->nameOffset;
        u32 first = entry->registerRange & 0xff;
        binding->uniform.first = first;
        u32 last = (entry->registerRange >> 16) & 0xff;
        binding->uniform.last = last;
        if (first >= 0x88)
            return 0;
        if (first >= 0x78) {
            binding->uniform.first = first - 0x78;
            binding->uniform.last = last - 0x78;
            if (binding->uniform.category != 4)
                return 0;
        } else if (first >= 0x70) {
            binding->uniform.first = first - 0x70;
            binding->uniform.last = last - 0x70;
            if (binding->uniform.category != 3)
                return 0;
        } else if (first >= 0x10) {
            binding->uniform.first = first - 0x10;
            binding->uniform.last = last - 0x10;
            if (binding->uniform.category != 2)
                return 0;
        } else if (binding->uniform.category != 1) {
            return 0;
        }
        return 1;
    }
    return 0;
}
}
