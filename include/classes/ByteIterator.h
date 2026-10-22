#ifndef CLASSES_BYTE_ITERATOR_H
#define CLASSES_BYTE_ITERATOR_H

#include "common.h"

/* A byte-buffer iterator returned through the compiler's aggregate-result ABI. */
struct ByteIterator {
    ByteIterator() : pointer(NULL) {}
    ByteIterator(u8 *position) : pointer(position) {}
    ByteIterator(const ByteIterator &other) : pointer(other.pointer) {}
    ByteIterator operator+(u32 offset) const;
    /* 0x00 */ u8 *pointer;
};

#endif
