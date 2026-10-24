/* NON_MATCHING: unit needs -Ospace and its mangled name; remaining differences are armcc inlining copy/copy_backward where retail calls them, and register allocation */
#include "stl/AsdAllocator.h"
#include <vector>

typedef std::vector<u8, AsdAllocator<u8> > ByteVector;

/* std::vector<u8>::_C_insert_aux(position, count, value): inserts `count` copies of a byte, growing the storage when it is full. */
template void ByteVector::_C_insert_aux(ByteVector::iterator, ByteVector::size_type, const u8 &);
