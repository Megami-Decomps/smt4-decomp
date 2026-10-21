/* NON_MATCHING: retail includes a post-return pool cleanup region and construction-lifetime MOVs absent from explicit constructor-entry calls. Original C++ construction/unwind contract is unresolved. */
#include "common.h"

struct AllocationPool {
    u8 unk00[0x10];
    u32 mask;
    u8 unk14[4];
    u32 initialValue;
    u8 unk1C[4];
};
struct PoolBucket;
struct AllocationPools {
    u8 unk00[8];
    AllocationPool* primary;
    AllocationPool* secondary;
    AllocationPool* current;
};

extern "C" {
extern AllocationPools DAT_005c4bf0;
void* asdOperatorNewB(u32 size);
AllocationPool* FUN_002e4d84(AllocationPool* pool, const char* name, s32 bits, s32 count);
PoolBucket* intArrayGetElementPtr(AllocationPool* pool, s32 index);
void FUN_00101e28(PoolBucket* bucket, u32 value);

void FUN_002e4064(void)
{
    if (DAT_005c4bf0.current == NULL) {
        DAT_005c4bf0.primary = FUN_002e4d84(static_cast<AllocationPool*>(asdOperatorNewB(sizeof(AllocationPool))), "C", 10, 2);
        s32 index = 0;
        for (u32 bit = 0x10; (bit & 0x3f0) != 0; bit <<= 1) {
            PoolBucket* bucket = intArrayGetElementPtr(DAT_005c4bf0.primary, index);
            FUN_00101e28(bucket, DAT_005c4bf0.primary->initialValue);
            ++index;
        }
        DAT_005c4bf0.secondary = FUN_002e4d84(static_cast<AllocationPool*>(asdOperatorNewB(sizeof(AllocationPool))), "", 10, 1);
        DAT_005c4bf0.secondary->mask = 0x3f0;
        DAT_005c4bf0.current = DAT_005c4bf0.primary;
    }
}
}
