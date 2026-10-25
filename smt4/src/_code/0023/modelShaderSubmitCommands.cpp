/* NON_MATCHING: header stores merge and attribute loops strength-reduce to pointer/countdown loops; -O2 candidate. */
#include "common.h"

struct VertexAttributeBinding {
    u32 enabled;
    u8 unk04[0x6c];
};
struct VertexAttributeConstant {
    u8 enabled;
    u8 unk01[0x13];
};
struct ModelShaderCommands {
    u32 cachedCount;
    u32 cached[87]; // 0x004
    VertexAttributeBinding bindings[12]; // 0x160
    VertexAttributeConstant constants[12]; // 0x6a0
};
extern "C" {
void FUN_002bc7f4(u32, u32 **);
u32 *FUN_0023bba0(ModelShaderCommands *, u32 *);
u32 *FUN_0023bb00(ModelShaderCommands *, u32 *, const void *);
void *__aeabi_memcpy4(void *, const void *, u32);
void asdModelAdvanceCommandCursor(u32);
}

// Restore each attribute's format and clear any active constant attribute.
static inline u32 *appendAttributeReset(u32 *cursor, const ModelShaderCommands *shader)
{
    for (s32 i = 0; i < 12; ++i) {
        if (shader->bindings[i].enabled) {
            *cursor++ = 0;
            *cursor++ = (i * 3 + 0x203) | 0x802f0000;
            *cursor++ = 0;
            *cursor++ = 0;
        } else {
            *cursor++ = 0;
            *cursor++ = (i * 3 + 0x205) | 0xf0000;
        }
        if (shader->constants[i].enabled) {
            *cursor++ = i;
            *cursor++ = 0x803f0232;
            *cursor++ = 0;
            *cursor++ = 0;
            *cursor++ = 0;
            *cursor++ = 0;
        }
    }
    return cursor;
}

extern "C" void modelShaderSubmitCommands(void *, ModelShaderCommands *shader, const void *draw)
{
    u32 *cursor;
    FUN_002bc7f4(0x208, &cursor);
    u32 *start = cursor;
    *cursor++ = 0x100;
    *cursor++ = 0x20229;
    *cursor++ = 0x300;
    *cursor++ = 0x2025e;
    *cursor++ = 1;
    *cursor++ = 0xf025f;
    *cursor++ = 0x100;
    *cursor++ = 0x30253;
    cursor = appendAttributeReset(cursor, shader);
    if (!shader->cachedCount) {
        u32 *end = FUN_0023bba0(shader, shader->cached);
        shader->cachedCount = end - shader->cached;
    }
    __aeabi_memcpy4(cursor, shader->cached, shader->cachedCount * sizeof(u32));
    cursor += shader->cachedCount;
    cursor = FUN_0023bb00(shader, cursor, draw);
    cursor = appendAttributeReset(cursor, shader);
    u32 bytes = (u8 *)cursor - (u8 *)start;
    asdModelAdvanceCommandCursor(bytes & ~3u);
}
