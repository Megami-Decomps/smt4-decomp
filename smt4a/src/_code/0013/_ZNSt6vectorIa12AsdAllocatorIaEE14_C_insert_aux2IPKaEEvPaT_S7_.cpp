/* NON_MATCHING: unit needs -Ospace and its mangled name; remaining differences are armcc inlining copy/copy_backward where retail calls them, and register allocation */
#include "stl/AsdAllocator.h"
#include <vector>

typedef std::vector<s8, AsdAllocator<s8> > SignedByteVector;

/* std::vector<s8>::_C_insert_aux2(position, first, last): inserts a range of bytes, growing the storage when it is full. */
template void SignedByteVector::_C_insert_aux2(SignedByteVector::iterator, SignedByteVector::const_iterator, SignedByteVector::const_iterator);
