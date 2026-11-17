/* NON_MATCHING: compiler saves r4/r5 as a leaf and uses BX epilogues; retail saves LR and uses it as address scratch; -O2 candidate. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
extern u32 *g_commandBufferCursor;
u32 gpuReadHardwareRegisters(u32, u32 *, u32);

void gxGetCommandListParameter(u32 parameter, u32 *value)
{
    AsdCmdBuffer *list = g_asdGfxContext.cmdBuffer;
    u32 result;
    switch (parameter) {
    case 0x200:
        result = list->unk2c;
        break;
    case 0x201:
        result = g_asdGfxContext.activeBuffer == list && g_asdGfxContext.submitPending != 0;
        break;
    case 0x202:
        list->writeOffset = (u32)g_commandBufferCursor - (u32)list->start;
        *value = list->writeOffset;
        return;
    case 0x203:
        result = list->listCount;
        break;
    case 0x204:
        result = list->size;
        break;
    case 0x205:
        result = list->unk1c;
        break;
    case 0x206:
        result = (u32)list->start;
        break;
    case 0x207:
        result = list ? list->unk00 : 0;
        break;
    case 0x208:
        result = (u32)g_commandBufferCursor;
        break;
    case 0x209:
        result = list->submittedBytes;
        break;
    case 0x20a:
        result = list->unk28;
        break;
    case 0x20b:
        result = (u32)list->entries;
        break;
    case 0x20c:
        if (list->listCount <= (s32)list->unk28)
            return;
        switch (list->entries[list->unk28].kind) {
        case 0: result = 0x310; break;
        case 1: result = 0x311; break;
        case 2: result = 0x312; break;
        case 3: result = 0x313; break;
        case 4: result = 0x314; break;
        default: return;
        }
        break;
    case 0x20d:
        if (list->listCount <= (s32)list->unk28 ||
            list->entries[list->unk28].kind != 1)
            return;
        value[0] = (u32)list->entries[list->unk28].commands;
        value[1] = list->entries[list->unk28].byteCount;
        return;
    case 0x20e:
        gpuReadHardwareRegisters(0x400058, value, sizeof(u32));
        return;
    default:
        return;
    }
    *value = result;
}
}
