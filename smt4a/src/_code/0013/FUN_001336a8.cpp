/* NON_MATCHING: Allocation byte count and buffer registers are swapped; exception arguments and final pointer stores are scheduled differently. */
#include "shard/ElementVector.h"

extern "C" {
void FUN_002e32a4(s32 kind, const char *message, const char *detail, u32 requested, u32 maximum);
const u32 *wordRefMax(const u32 *left, const u32 *right);
void *rt_malloc(u32 size);
void asdOperatorDeleteArray(void *allocation);
void FUN_00307b9a(ElementRecord *begin, ElementRecord *end, ElementRecord *destination, ElementVector *vector);
u32 vectorSize24B(const ElementVector *vector);
u32 vectorGrowCapacity_00307bbc(u32 size, const ElementVector *vector);
void FUN_0030fdc0(ElementVector *vector, ElementRecord *begin, ElementRecord *end);

/* Grows the allocation while preserving the existing element range. */
void FUN_001336a8(ElementVector *vector, u32 requested)
{
    if (requested > 0xaaaaaaa) {
        FUN_002e32a4(8, "", "", requested, 0xaaaaaaa);
    }
    if ((u32)(vector->capacityEnd - vector->begin) < requested) {
        u32 growth = vectorGrowCapacity_00307bbc(vectorSize24B(vector), vector);
        u32 capacity = *wordRefMax(&requested, &growth);
        ElementRecord *allocation = (ElementRecord *)rt_malloc(capacity * sizeof(ElementRecord));
        FUN_00307b9a(vector->begin, vector->end, allocation, vector);
        FUN_0030fdc0(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        u32 size = vectorSize24B(vector);
        vector->begin = allocation;
        vector->capacityEnd = allocation + capacity;
        vector->end = allocation + size;
    }
}
}
