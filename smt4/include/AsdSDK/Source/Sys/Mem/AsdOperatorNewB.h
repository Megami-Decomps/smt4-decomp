#ifndef SMT4_ASDSDK_SOURCE_SYS_MEM_ASDOPERATORNEWB_H
#define SMT4_ASDSDK_SOURCE_SYS_MEM_ASDOPERATORNEWB_H

#include "common.h"

/* IV's array allocator accepts an owner hint, although the main-heap implementation ignores it. */
extern "C" void *asdOperatorNewB(u32 size, void *owner);

#endif
