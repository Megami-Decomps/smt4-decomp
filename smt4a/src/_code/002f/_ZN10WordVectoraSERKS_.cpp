#include "classes/WordVector.h"

extern "C" void _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(WordVector *destination, const WordVector *source);

/* Applies the vector's existing storage-reuse assignment operation. */
WordVector &WordVector::operator=(const WordVector &other)
{
    _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(this, &other);
    return *this;
}
