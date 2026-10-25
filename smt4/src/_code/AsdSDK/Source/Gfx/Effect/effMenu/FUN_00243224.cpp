#include "util/EffMenuListAppend.h"
/* NON_MATCHING: the payload copy destination uses r5 where retail uses lr. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "util/EffMenuListAppend.h"
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include "AsdSDK/AsdDebug.h"

// This full render payload extends beyond the shared 0x38-byte list-node prefix.
struct MenuVectorPayload {
    EffMenuNode *next;
    u32 kind; // 0x04
    EffMenuPosition first; // 0x08
    EffMenuPosition second; // 0x18
    u32 firstArgument; // 0x28
    u32 secondArgument; // 0x2c
    u8 unk30[0x38];
};
extern "C" {
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 boundary, u32 track);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

// Queue the same vector effect for both menu display lists.
void FUN_00243224(const EffMenuPosition *first, const EffMenuPosition *second, u32 firstArgument, u32 secondArgument)
{
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 708);
    MenuVectorPayload *effect = (MenuVectorPayload *)memAlloc(0x10000, 0x100, 0, sizeof(MenuVectorPayload), 16, 1);
    effect->first = *first;
    effect->second = *second;
    effect->kind = 8;
    effect->firstArgument = firstArgument;
    effect->secondArgument = secondArgument;
    effMenuListAppend((EffMenuNode *)effect, 1);
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 719);
    MenuVectorPayload *copy = (MenuVectorPayload *)memAlloc(0x10000, 0x100, 0, sizeof(MenuVectorPayload), 16, 1);
    __aeabi_memcpy4(copy, effect, sizeof(MenuVectorPayload));
    effMenuListAppend((EffMenuNode *)copy, 2);
}
}
