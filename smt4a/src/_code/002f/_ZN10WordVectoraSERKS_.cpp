#include "classes/WordVector.h"

extern "C" void assignWordVector(WordVector *destination, const WordVector *source);

/* Applies the vector's existing storage-reuse assignment operation. */
WordVector &WordVector::operator=(const WordVector &other)
{
    assignWordVector(this, &other);
    return *this;
}
