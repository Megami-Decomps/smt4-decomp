/* NON_MATCHING: typed reserve preserves behavior, but diagnostic argument setup, scalar destruction loop registers, and storage-update scheduling differ. */
#include "classes/WordVector.h"

extern "C" {
void FUN_002e32a4(int kind, ...);
u32 vectorCount4_002ff8c6(const WordVector *vector);
u32 vectorGrowCapacity_002ff8b4(u32 count, const WordVector *vector);
const u32 *wordRefMax(const u32 *first, const u32 *second);
u32 *allocArrayWords(WordVector *vector, u32 count, u32 *hint);
void FUN_0030759c(u32 *first, u32 *last, u32 *destination, WordVector *vector);

// Ensure enough storage, preserving the vector's existing words.
void FUN_00135778(WordVector *vector, u32 capacity)
{
    if (capacity > 0x3fffffff) {
        FUN_002e32a4(8, "", "", capacity, 0x3fffffff);
    }
    if ((u32)(vector->capacityEnd - vector->begin) < capacity) {
        u32 grownCapacity = vectorGrowCapacity_002ff8b4(vectorCount4_002ff8c6(vector), vector);
        u32 newCapacity = *wordRefMax(&capacity, &grownCapacity);
        u32 *storage = allocArrayWords(vector, newCapacity, vector->begin);
        FUN_0030759c(vector->begin, vector->end, storage, vector);
        for (u32 *element = vector->begin; element != vector->end; ++element)
            element->~u32();
        asdOperatorDeleteArray(vector->begin);
        u32 count = vectorCount4_002ff8c6(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + count;
    }
}
}
