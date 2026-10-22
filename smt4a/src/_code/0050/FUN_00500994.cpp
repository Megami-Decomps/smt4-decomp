/* NON_MATCHING: command stores use STM/STR instead of retail STRD/STM combinations; saved registers and packet cursor scheduling differ. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

struct GxMeshBinding {
    AsdGxTexture *vertexBuffer;
    u8 mode;
    u8 padding05[0x1F];
    AsdGxTexture *indexBuffer;
    u8 indexType;
    u8 padding29[0x17];
    u32 attributes;
    u32 attributeCount;
};
typedef char GxMeshBindingOffsetsCheck[
    offsetof(GxMeshBinding, indexBuffer) == 0x24 &&
    offsetof(GxMeshBinding, indexType) == 0x28 &&
    offsetof(GxMeshBinding, attributes) == 0x40 &&
    offsetof(GxMeshBinding, attributeCount) == 0x44 ? 1 : -1];

extern "C" u32 asdGxGetPhysicalAddress(AsdGxTexture *buffer);

extern "C" u32 *FUN_00500994(const GxMeshBinding *binding, u32 *commands, u32 changed, s32 reset)
{
    if (reset) {
        *commands++ = 1;
        *commands++ = 0xF0111;
        *commands++ = 1;
        *commands++ = 0xF0110;
    }
    if (changed & 1) {
        u32 mode = binding->mode == 0 ? 2 : 0;
        *commands++ = mode | (static_cast<u32>(binding->mode) << 16);
        *commands++ = 0xF0117;
        *commands++ = asdGxGetPhysicalAddress(binding->vertexBuffer) >> 3;
        *commands++ = 0xF011D;
    }
    if (changed & 6) {
        *commands++ = binding->indexType;
        *commands++ = 0xF0116;
        *commands++ = asdGxGetPhysicalAddress(binding->indexBuffer) >> 3;
        *commands++ = 0xF011C;
    }
    *commands++ = binding->attributes | (binding->attributeCount * 0x1000 - 0x1000u) | 0x1000000;
    *commands++ = 0xF011E;
    *commands++ = (binding->attributeCount * 0x1000 - 0x1000u) | 0x1000000 | binding->attributes;
    *commands++ = 0xF006E;
    *commands++ = 1;
    *commands++ = 0xF0111;
    *commands++ = 1;
    *commands++ = 0xF0110;
    return commands;
}
