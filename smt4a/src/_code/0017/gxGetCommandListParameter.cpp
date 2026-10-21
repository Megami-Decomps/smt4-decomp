/* NON_MATCHING: compiler saves r4/r5 as a leaf and uses BX epilogues; retail saves LR and uses it as address scratch; -O2 candidate. */
#include "shard/Block61a470.h"

struct CommandListQueryEntry {
    u8 type;
    u8 unk01[3];
    u32 first, second;
    u8 unk0c[0x10];
};
extern "C" {
extern u32 *g_commandBufferCursor;
u32 gpuReadHardwareRegisters(u32, u32 *, u32);

void gxGetCommandListParameter(u32 parameter, u32 *value)
{
    Pool *list = g_asdGfxContext.pool;
    u32 result;
    switch (parameter) {
    case 0x200:
        result = list->unk2C;
        break;
    case 0x201:
        result = g_asdGfxContext.activePool == list && g_asdGfxContext.submission.submitPending != 0;
        break;
    case 0x202:
        list->unk0C = (u32)g_commandBufferCursor - (u32)list->start;
        *value = list->unk0C;
        return;
    case 0x203:
        result = list->entryCount;
        break;
    case 0x204:
        result = list->length;
        break;
    case 0x205:
        result = *(const u32 *)list->unk1C;
        break;
    case 0x206:
        result = list->start;
        break;
    case 0x207:
        result = list ? *(const u32 *)list->unk00 : 0;
        break;
    case 0x208:
        result = (u32)g_commandBufferCursor;
        break;
    case 0x209:
        result = list->unk10;
        break;
    case 0x20a:
        result = list->unk28;
        break;
    case 0x20b:
        result = (u32)list->entries;
        break;
    case 0x20c:
        if (list->entryCount <= (s32)list->unk28)
            return;
        switch (((const CommandListQueryEntry *)list->entries)[list->unk28].type) {
        case 0: result = 0x310; break;
        case 1: result = 0x311; break;
        case 2: result = 0x312; break;
        case 3: result = 0x313; break;
        case 4: result = 0x314; break;
        default: return;
        }
        break;
    case 0x20d:
        if (list->entryCount <= (s32)list->unk28 ||
            ((const CommandListQueryEntry *)list->entries)[list->unk28].type != 1)
            return;
        value[0] = ((const CommandListQueryEntry *)list->entries)[list->unk28].first;
        value[1] = ((const CommandListQueryEntry *)list->entries)[list->unk28].second;
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
