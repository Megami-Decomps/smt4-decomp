/* NON_MATCHING: retail stores the packed slot byte at SP+16 (original source/aggregate contract unresolved) and shares the return epilogue. The readable lookup and 64-bit comparison otherwise match. */
#include "shard/Shard0031.h"

struct OnlineComparisonRequest {
    u8 unk00[0x25];
    u8 slotAndFlags;
    u8 unk26[0x16];
    u16 kind;
    u8 unk3E[0xca];
    u64 value;
    u8 unk110[0x20];
    u8 bypass;
};

extern "C" {
Slot* FUN_002eac34(s32 index);
void FUN_0010cc26(u64* value, void* state);
s32 FUN_002f2dc2(const u64* left, const u64* right);

u32 FUN_002f2aa0(const OnlineComparisonRequest* request)
{
    if ((request->kind & 0x0f) != 7) {
        u32 index = request->slotAndFlags >> 4;
        if (request->bypass == 0 && FUN_002eac34(index)->data[0x1c] != 0) {
            u64 current;
            FUN_0010cc26(&current, FUN_002eac34(index)->data + 0x18);
            u64 value = request->value;
            return FUN_002f2dc2(&value, &current);
        }
    }
    return 1;
}
}
