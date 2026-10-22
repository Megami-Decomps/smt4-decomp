/* NON_MATCHING: overflow-report setup and final capacity/end pointer-update register allocation differ. */
#include "shard/ElementVector.h"

extern "C" {
void FUN_002e32a4(s32 kind, ...);
void asdOperatorDeleteArray(void *allocation);
void FUN_00307a98(ElementRecord40 *begin, ElementRecord40 *end,
                  ElementRecord40 *destination, ElementVector40 *owner);
void destroyRangeElem40(ElementVector40 *vector, ElementRecord40 *begin, ElementRecord40 *end);
s32 vectorCountx28_0030fd70(ElementVector40 *vector);
const u32 *wordRefMax(const u32 *left, const u32 *right);
ElementRecord40 *vectorAllocx28(ElementVector40 *vector, u32 count, ElementRecord40 *hint);
u32 vectorGrowCapacity_0030fd7e(u32 count, ElementVector40 *vector);

// Reserve space for the requested number of records while retaining the current contents.
void FUN_00133c2c(ElementVector40 *vector, u32 required)
{
    if (required > 0x06666666)
        FUN_002e32a4(8, "", "", required, 0x06666666);
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < required) {
        u32 grown = vectorGrowCapacity_0030fd7e(vectorCountx28_0030fd70(vector), vector);
        u32 count = *wordRefMax(&required, &grown);
        ElementRecord40 *allocation = vectorAllocx28(vector, count, vector->begin);
        FUN_00307a98(vector->begin, vector->end, allocation, vector);
        destroyRangeElem40(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        s32 size = vectorCountx28_0030fd70(vector);
        vector->begin = allocation;
        vector->capacityEnd = allocation + count;
        vector->end = allocation + size;
    }
}
}
