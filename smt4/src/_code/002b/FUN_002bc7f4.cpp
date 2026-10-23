/* NON_MATCHING: leaf LR scratch allocation and switch exit epilogues differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u32 *g_commandBufferCursor;
extern u32 DAT_00400058;
s32 nn_gxlow_CTR_ReadHWRegs(u32, u32 *, u32);

void FUN_002bc7f4(u32 property, u32 *out)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 value;
    switch (property) {
    case 0x200: value = buffer->unk2c; break;
    case 0x201:
        value = g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.pending ? 1 : 0;
        break;
    case 0x202:
        buffer->writeOffset = reinterpret_cast<u32>(g_commandBufferCursor) - reinterpret_cast<u32>(buffer->start);
        *out = buffer->writeOffset;
        return;
    case 0x203: value = buffer->listCount; break;
    case 0x204: value = buffer->size; break;
    case 0x205: value = buffer->unk1c; break;
    case 0x206: value = reinterpret_cast<u32>(buffer->start); break;
    case 0x207: value = buffer ? buffer->unk00 : 0; break;
    case 0x208: value = reinterpret_cast<u32>(g_commandBufferCursor); break;
    case 0x209: value = buffer->unk10; break;
    case 0x20A: value = buffer->unk28; break;
    case 0x20B: value = reinterpret_cast<u32>(buffer->entries); break;
    case 0x20C:
        if (buffer->listCount <= static_cast<s32>(buffer->unk28))
            return;
        value = buffer->entries[buffer->unk28].kind;
        switch (value) {
        case 0: value = 0x310; break;
        case 1: value = 0x311; break;
        case 2: value = 0x312; break;
        case 3: value = 0x313; break;
        case 4: value = 0x314; break;
        default: return;
        }
        break;
    case 0x20D:
        if (buffer->listCount <= static_cast<s32>(buffer->unk28) || buffer->entries[buffer->unk28].kind != 1)
            return;
        out[0] = reinterpret_cast<u32>(buffer->entries[buffer->unk28].commands);
        value = buffer->entries[buffer->unk28].byteCount;
        out[1] = value;
        return;
    case 0x20E:
        nn_gxlow_CTR_ReadHWRegs(reinterpret_cast<u32>(&DAT_00400058), out, 4);
        return;
    default:
        return;
    }
    *out = value;
}
}
